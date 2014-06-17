#define RecoInfoTree_cxx
#include "RecoInfoTree.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

#include <vector>
#include <TClonesArray.h>
#include "TLorentzVector.h"
#include <TH1F.h>
#include <TH2F.h>

void RecoInfoTree::Loop()
{
  
  BookHistograms();
  if (fChain == 0) return;

  Long64_t nentries = fChain->GetEntriesFast();
  
  Long64_t nbytes = 0, nb = 0;
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;
    if(jentry%1000==0) std::cout<<" processing event "<<jentry<<std::endl;

    for(int i=0; i<(int)Muon_n ; i++){
      //if(Muon_n>0){
      TLorentzVector* p4 = (TLorentzVector*) Muon_4Momentum->At(i); 
      if(p4->Pt()<10) continue ;
      double correctedIso =  ( (*Muon_particleIso)[i]  +
			       TMath::Max(double( (*Muon_neutralIso)[i]     +   (*Muon_photonIso)[i]-
						  TMath::Max((0.5*(*Muon_dbeta)[i]),0.0)),0.0 ))/p4->Pt();
      Muon_Iso_->Fill(correctedIso);
      Muon_Significance3D_->Fill(TMath::Abs((*Muon_Significance3D)[i]));
      Muon_NewVz_->Fill((*Muon_NewVz)[i]);
      Muon_normChi2_->Fill((*Muon_normChi2)[i]);
      Muon_validHits_->Fill((*Muon_validHits)[i]);
      Muon_tkHits_->Fill((*Muon_tkHits)[i]);
      Muon_pixHits_->Fill((*Muon_pixHits)[i]);
      Muon_numberOfMatches_->Fill((*Muon_numberOfMatches)[i]);
    }


    for(int i=0; i<(int)Electron_n;i++ ){
      TLorentzVector* p4 = (TLorentzVector*) Electron_4Momentum->At(i); 
      if(p4->Pt()<10) continue ;
      double correctedIso =  ( (*Electron_particleIso)[i]  +
			       TMath::Max(double( (*Electron_neutralIso)[i]     +   (*Electron_photonIso)[i]-
						  TMath::Max((0.5*(*Electron_dbeta)[i]),0.0)),0.0 ))/p4->Pt();
      
      Electron_Iso_->Fill(correctedIso);
      Electron_MVAID_new_->Fill((*Electron_MVAID_new)[i]);
      Electron_HoE_->Fill((*Electron_HoE)[i]);
      Electron_SigmaIetaIeta_->Fill((*Electron_SigmaIetaIeta)[i]);
      Electron_dEtaIn_->Fill((*Electron_dEtaIn)[i]);
      Electron_dPhiIn_->Fill((*Electron_dPhiIn)[i]);
      Electron_missing_hits_->Fill((*Electron_missing_hits)[i]);
      Electron_Significance3D_->Fill(TMath::Abs((*Electron_Significance3D)[i]));
    }

  }
  WriteHistograms();
}



void RecoInfoTree::BookHistograms(){
  Muon_Iso_            = new TH1F("MuonIso_"               ,"MuonIso_"               ,100,0,5);
  Muon_Significance3D_ = new TH1F("Muon_Significance3D_"   ,"Muon_Significance3D_"   ,50,0,50);
  Muon_NewVz_          = new TH1F("Muon_NewVz_"            ,"Muon_NewVz_"            ,100,-50,50);
  Muon_normChi2_       = new TH1F("Muon_normChi2_"         ,"Muon_normChi2_"         ,20,0,20);
  Muon_validHits_      = new TH1F("Muon_validHits_"        ,"Muon_validHits_"        ,70,0,70);
  Muon_tkHits_         = new TH1F("Muon_tkHits_"           ,"Muon_tkHits_"           ,35,0,35);
  Muon_pixHits_        = new TH1F("Muon_pixHits_"          ,"Muon_pixHits_"          ,10,0,10);
  Muon_numberOfMatches_= new TH1F("Muon_numberOfMatches_"  ,"Muon_numberOfMatches_"  ,10,0,10);

  
  Electron_Iso_              = new TH1F("Electron_Iso_"           ,"Electron_Iso_"            ,100,0,5);
  Electron_MVAID_new_        = new TH1F("Electron_MVAID_new_"     ,"Electron_MVAID_new_"      ,100,-1,1);
  Electron_HoE_              = new TH1F("Electron_HoE_"           ,"Electron_HoE_"            ,100,0,5); 
  Electron_SigmaIetaIeta_    = new TH1F("Electron_SigmaIetaIeta_" ,"Electron_SigmaIetaIeta_"  ,100,0,1); 
  Electron_dEtaIn_           = new TH1F("Electron_dEtaIn_"        ,"Electron_dEtaIn_"         ,100,-1,1); 
  Electron_dPhiIn_           = new TH1F("Electron_dPhiIn_"        ,"Electron_dPhiIn_"         ,100,-1,1); 
  Electron_missing_hits_     = new TH1F("Electron_missing_hits_"  ,"Electron_missing_hits_"   ,10,0,10); 
  Electron_Significance3D_   = new TH1F("Electron_Significance3D_","Electron_Significance3D_" ,50,0,50); 
}

void RecoInfoTree::WriteHistograms(){
  TFile* fout = new TFile("RecoAnalysisOut.root","RECREATE");
  fout->cd();
  Muon_Iso_            ->Write();
  Muon_Significance3D_ ->Write();
  Muon_NewVz_          ->Write();
  Muon_normChi2_       ->Write();
  Muon_validHits_      ->Write();
  Muon_tkHits_         ->Write();
  Muon_pixHits_        ->Write();
  Muon_numberOfMatches_->Write();
  

  
  Electron_Iso_              ->Write();
  Electron_MVAID_new_        ->Write();
  Electron_HoE_              ->Write(); 
  Electron_SigmaIetaIeta_    ->Write(); 
  Electron_dEtaIn_           ->Write(); 
  Electron_dPhiIn_           ->Write(); 
  Electron_missing_hits_     ->Write(); 
  Electron_Significance3D_   ->Write(); 
  
  
}


