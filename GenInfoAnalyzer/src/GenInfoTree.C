#define GenInfoTree_cxx
#include "../interface/GenInfoTree.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream>
void GenInfoTree::Loop()
{
  
  BookHistograms();
  
  if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;

   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      if(jentry%5000==0)       std::cout<<" processing event "<<jentry+1<<std::endl;
      // if (Cut(ientry) < 0) continue;
      eettFiller();
      eeetFiller();
      eemtFiller();
      eeemFiller();

      mmttFiller();
      mmetFiller();
      mmmtFiller();
      mmmeFiller();
      //std::cout<<" ZMass size "<<(*ZMass).size()<<std::endl;
   }
   WriteHistograms();

}


void GenInfoTree::eettFiller(){
  //if(genbits==GenInfoTree::eetauhtauh){
  if(genbits==4){
    
    //for(int i=0; i<(int)elemom->GetEntries(); i++){
    TLorentzVector*  p41  = (TLorentzVector*) elemom->At(0);
    TLorentzVector*  p42  = (TLorentzVector*) elemom->At(1);
    TLorentzVector*  p43  = (TLorentzVector*) tauhadmom->At(0);
    TLorentzVector*  p44  = (TLorentzVector*) tauhadmom->At(1);
    // tau before decay 
    TLorentzVector*  p45  = (TLorentzVector*) taumom->At(0);
    TLorentzVector*  p46  = (TLorentzVector*) taumom->At(1);
    
    double pt1 = p41->Pt();
    double pt2 = p42->Pt();
    double pt3 = p43->Pt(); 
    double pt4 = p44->Pt();
    
    // pt of four laptons 
    if(pt1 > pt2) {
      eett_pt_[0]->Fill(pt1);
      eett_pt_[1]->Fill(pt2);      
    }
    if(pt1 < pt2){
      eett_pt_[1]->Fill(pt1);
      eett_pt_[0]->Fill(pt2);      
    }
    
    if(pt3 > pt4) {
      eett_pt_[2]->Fill(pt3);
      eett_pt_[3]->Fill(pt4);      
    }
    if(pt3 < pt4){
      eett_pt_[3]->Fill(pt3);
      eett_pt_[2]->Fill(pt4);      
    }
    
    // dr b/w leptons 
    double dr12 = p41->DeltaR(*p42); 
    double dr34 = p43->DeltaR(*p44); 
    dr_leptons[0]->Fill(dr12);
    dr_leptons[1]->Fill(dr34);
    
    double dphi12 = p41->DeltaPhi(*p42); 
    double dphi34 = p43->DeltaPhi(*p44); 
    dphi_leptons[0]->Fill(dphi12);
    dphi_leptons[1]->Fill(dphi34);
    
    
    TLorentzVector Z1 = *p41 + *p42 ;
    TLorentzVector Z2 = *p43 + *p44 ;
    TLorentzVector Z2_beforedecay = *p45 + *p46 ;
    
    double dr_Z1_Z2  = Z1.DeltaR(Z2);
    double dr_Z1_Z2_beforedecay  = Z1.DeltaR(Z2_beforedecay);
    dr_Z[0]->Fill(dr_Z1_Z2_beforedecay);
    dr_Z[1]->Fill(dr_Z1_Z2);

    double dphi_Z1_Z2  = Z1.DeltaPhi(Z2);
    double dphi_Z1_Z2_beforedecay  = Z1.DeltaPhi(Z2_beforedecay);
    dphi_Z[0]->Fill(dphi_Z1_Z2_beforedecay);
    dphi_Z[1]->Fill(dphi_Z1_Z2);

    MZ2[0]->Fill(Z2_beforedecay.Mag());
    MZ2[1]->Fill(Z2.Mag());
    
    TLorentzVector lltt_beforedecay = Z1 + Z2_beforedecay ;
    TLorentzVector lltt             = Z1 + Z2;
    
    M2l2tau[0]->Fill(lltt_beforedecay.Mag());
    M2l2tau[1]->Fill(lltt.Mag());
  }
}





void GenInfoTree::eeetFiller(){
  //if(genbits==GenInfoTree::eetauhtauh){
  if(genbits==5){
    //for(int i=0; i<(int)elemom->GetEntries(); i++){
    TLorentzVector*  p41  = (TLorentzVector*) elemom->At(0);
    TLorentzVector*  p42  = (TLorentzVector*) elemom->At(1);
    TLorentzVector*  p43  = (TLorentzVector*) tauemom->At(0);
    TLorentzVector*  p44  = (TLorentzVector*) tauhadmom->At(0);
    // tau before decay 
    TLorentzVector*  p45  = (TLorentzVector*) taumom->At(0);
    TLorentzVector*  p46  = (TLorentzVector*) taumom->At(1);
    
    double pt1 = p41->Pt();
    double pt2 = p42->Pt();
    double pt3 = p43->Pt(); 
    double pt4 = p44->Pt();
    
    // pt of four laptons 
    if(pt1 > pt2) {
      eeet_pt_[0]->Fill(pt1);
      eeet_pt_[1]->Fill(pt2);      
    }
    if(pt1 < pt2){
      eeet_pt_[1]->Fill(pt1);
      eeet_pt_[0]->Fill(pt2);      
    }
    
    if(pt3 > pt4) {
      eeet_pt_[2]->Fill(pt3);
      eeet_pt_[3]->Fill(pt4);      
    }
    if(pt3 < pt4){
      eeet_pt_[3]->Fill(pt3);
      eeet_pt_[2]->Fill(pt4);      
    }
    
    // dr b/w leptons 
    double dr12 = p41->DeltaR(*p42); 
    double dr34 = p43->DeltaR(*p44); 
    dr_leptons[0]->Fill(dr12);
    dr_leptons[2]->Fill(dr34);
    
    double dphi12 = p41->DeltaPhi(*p42); 
    double dphi34 = p43->DeltaPhi(*p44); 
    dphi_leptons[0]->Fill(dphi12);
    dphi_leptons[2]->Fill(dphi34);
    
    
    TLorentzVector Z1 = *p41 + *p42 ;
    TLorentzVector Z2 = *p43 + *p44 ;
    TLorentzVector Z2_beforedecay = *p45 + *p46 ;
    
    double dr_Z1_Z2  = Z1.DeltaR(Z2);
    double dr_Z1_Z2_beforedecay  = Z1.DeltaR(Z2_beforedecay);
    dr_Z[0]->Fill(dr_Z1_Z2_beforedecay);
    dr_Z[2]->Fill(dr_Z1_Z2);

    double dphi_Z1_Z2  = Z1.DeltaPhi(Z2);
    double dphi_Z1_Z2_beforedecay  = Z1.DeltaPhi(Z2_beforedecay);
    dphi_Z[0]->Fill(dphi_Z1_Z2_beforedecay);
    dphi_Z[2]->Fill(dphi_Z1_Z2);

    MZ2[0]->Fill(Z2_beforedecay.Mag());
    MZ2[2]->Fill(Z2.Mag());
    
    TLorentzVector lltt_beforedecay = Z1 + Z2_beforedecay ;
    TLorentzVector lltt             = Z1 + Z2;
    
    M2l2tau[0]->Fill(lltt_beforedecay.Mag());
    M2l2tau[2]->Fill(lltt.Mag());
  }
}




void GenInfoTree::eemtFiller(){
  //if(genbits==GenInfoTree::eetauhtauh){
  if(genbits==6){
    //for(int i=0; i<(int)elemom->GetEntries(); i++){
    TLorentzVector*  p41  = (TLorentzVector*) elemom->At(0);
    TLorentzVector*  p42  = (TLorentzVector*) elemom->At(1);
    TLorentzVector*  p43  = (TLorentzVector*) taumumom->At(0);
    TLorentzVector*  p44  = (TLorentzVector*) tauhadmom->At(0);
    // tau before decay 
    TLorentzVector*  p45  = (TLorentzVector*) taumom->At(0);
    TLorentzVector*  p46  = (TLorentzVector*) taumom->At(1);
    
    double pt1 = p41->Pt();
    double pt2 = p42->Pt();
    double pt3 = p43->Pt(); 
    double pt4 = p44->Pt();
    
    // pt of four laptons 
    if(pt1 > pt2) {
      eemt_pt_[0]->Fill(pt1);
      eemt_pt_[1]->Fill(pt2);      
    }
    if(pt1 < pt2){
      eemt_pt_[1]->Fill(pt1);
      eemt_pt_[0]->Fill(pt2);      
    }
    
    if(pt3 > pt4) {
      eemt_pt_[2]->Fill(pt3);
      eemt_pt_[3]->Fill(pt4);      
    }
    if(pt3 < pt4){
      eemt_pt_[3]->Fill(pt3);
      eemt_pt_[2]->Fill(pt4);      
    }
    
    // dr b/w leptons 
    double dr12 = p41->DeltaR(*p42); 
    double dr34 = p43->DeltaR(*p44); 
    dr_leptons[0]->Fill(dr12);
    dr_leptons[2]->Fill(dr34);
    
    double dphi12 = p41->DeltaPhi(*p42); 
    double dphi34 = p43->DeltaPhi(*p44); 
    dphi_leptons[0]->Fill(dphi12);
    dphi_leptons[2]->Fill(dphi34);
    
    
    TLorentzVector Z1 = *p41 + *p42 ;
    TLorentzVector Z2 = *p43 + *p44 ;
    TLorentzVector Z2_beforedecay = *p45 + *p46 ;
    
    double dr_Z1_Z2  = Z1.DeltaR(Z2);
    double dr_Z1_Z2_beforedecay  = Z1.DeltaR(Z2_beforedecay);
    dr_Z[0]->Fill(dr_Z1_Z2_beforedecay);
    dr_Z[2]->Fill(dr_Z1_Z2);

    double dphi_Z1_Z2  = Z1.DeltaPhi(Z2);
    double dphi_Z1_Z2_beforedecay  = Z1.DeltaPhi(Z2_beforedecay);
    dphi_Z[0]->Fill(dphi_Z1_Z2_beforedecay);
    dphi_Z[2]->Fill(dphi_Z1_Z2);

    MZ2[0]->Fill(Z2_beforedecay.Mag());
    MZ2[2]->Fill(Z2.Mag());
    
    TLorentzVector lltt_beforedecay = Z1 + Z2_beforedecay ;
    TLorentzVector lltt             = Z1 + Z2;
    
    M2l2tau[0]->Fill(lltt_beforedecay.Mag());
    M2l2tau[2]->Fill(lltt.Mag());
  }
}



void GenInfoTree::eeemFiller(){
  //if(genbits==GenInfoTree::eetauhtauh){
  if(genbits==7){
    //for(int i=0; i<(int)elemom->GetEntries(); i++){
    TLorentzVector*  p41  = (TLorentzVector*) elemom->At(0);
    TLorentzVector*  p42  = (TLorentzVector*) elemom->At(1);
    TLorentzVector*  p43  = (TLorentzVector*) tauemom->At(0);
    TLorentzVector*  p44  = (TLorentzVector*) taumumom->At(0);
    // tau before decay 
    TLorentzVector*  p45  = (TLorentzVector*) taumom->At(0);
    TLorentzVector*  p46  = (TLorentzVector*) taumom->At(1);
    
    double pt1 = p41->Pt();
    double pt2 = p42->Pt();
    double pt3 = p43->Pt(); 
    double pt4 = p44->Pt();
    
    // pt of four laptons 
    if(pt1 > pt2) {
      eeem_pt_[0]->Fill(pt1);
      eeem_pt_[1]->Fill(pt2);      
    }
    if(pt1 < pt2){
      eeem_pt_[1]->Fill(pt1);
      eeem_pt_[0]->Fill(pt2);      
    }
    
    if(pt3 > pt4) {
      eeem_pt_[2]->Fill(pt3);
      eeem_pt_[3]->Fill(pt4);      
    }
    if(pt3 < pt4){
      eeem_pt_[3]->Fill(pt3);
      eeem_pt_[2]->Fill(pt4);      
    }
    
    // dr b/w leptons 
    double dr12 = p41->DeltaR(*p42); 
    double dr34 = p43->DeltaR(*p44); 
    dr_leptons[0]->Fill(dr12);
    dr_leptons[3]->Fill(dr34);
    
    double dphi12 = p41->DeltaPhi(*p42); 
    double dphi34 = p43->DeltaPhi(*p44); 
    dphi_leptons[0]->Fill(dphi12);
    dphi_leptons[3]->Fill(dphi34);
    
    
    TLorentzVector Z1 = *p41 + *p42 ;
    TLorentzVector Z2 = *p43 + *p44 ;
    TLorentzVector Z2_beforedecay = *p45 + *p46 ;
    
    double dr_Z1_Z2  = Z1.DeltaR(Z2);
    double dr_Z1_Z2_beforedecay  = Z1.DeltaR(Z2_beforedecay);
    dr_Z[0]->Fill(dr_Z1_Z2_beforedecay);
    dr_Z[3]->Fill(dr_Z1_Z2);

    double dphi_Z1_Z2  = Z1.DeltaPhi(Z2);
    double dphi_Z1_Z2_beforedecay  = Z1.DeltaPhi(Z2_beforedecay);
    dphi_Z[0]->Fill(dphi_Z1_Z2_beforedecay);
    dphi_Z[3]->Fill(dphi_Z1_Z2);

    MZ2[0]->Fill(Z2_beforedecay.Mag());
    MZ2[3]->Fill(Z2.Mag());
    
    TLorentzVector lltt_beforedecay = Z1 + Z2_beforedecay ;
    TLorentzVector lltt             = Z1 + Z2;
    
    M2l2tau[0]->Fill(lltt_beforedecay.Mag());
    M2l2tau[3]->Fill(lltt.Mag());
  }
}



//////////////// Muons 

void GenInfoTree::mmttFiller(){
  //if(genbits==GenInfoTree::eetauhtauh){
  if(genbits==10){
    //for(int i=0; i<(int)elemom->GetEntries(); i++){
    TLorentzVector*  p41  = (TLorentzVector*) mumom->At(0);
    TLorentzVector*  p42  = (TLorentzVector*) mumom->At(1);
    TLorentzVector*  p43  = (TLorentzVector*) tauhadmom->At(0);
    TLorentzVector*  p44  = (TLorentzVector*) tauhadmom->At(1);
    // tau before decay 
    TLorentzVector*  p45  = (TLorentzVector*) taumom->At(0);
    TLorentzVector*  p46  = (TLorentzVector*) taumom->At(1);
    
    double pt1 = p41->Pt();
    double pt2 = p42->Pt();
    double pt3 = p43->Pt(); 
    double pt4 = p44->Pt();
    
    // pt of four laptons 
    if(pt1 > pt2) {
      mmtt_pt_[0]->Fill(pt1);
      mmtt_pt_[1]->Fill(pt2);      
    }
    if(pt1 < pt2){
      mmtt_pt_[1]->Fill(pt1);
      mmtt_pt_[0]->Fill(pt2);      
    }
    
    if(pt3 > pt4) {
      mmtt_pt_[2]->Fill(pt3);
      mmtt_pt_[3]->Fill(pt4);      
    }
    if(pt3 < pt4){
      mmtt_pt_[3]->Fill(pt3);
      mmtt_pt_[2]->Fill(pt4);      
    }
    
    // dr b/w leptons 
    double dr12 = p41->DeltaR(*p42); 
    double dr34 = p43->DeltaR(*p44); 
    dr_leptons[0]->Fill(dr12);
    dr_leptons[1]->Fill(dr34);
    
    double dphi12 = p41->DeltaPhi(*p42); 
    double dphi34 = p43->DeltaPhi(*p44); 
    dphi_leptons[0]->Fill(dphi12);
    dphi_leptons[1]->Fill(dphi34);
    
    
    TLorentzVector Z1 = *p41 + *p42 ;
    TLorentzVector Z2 = *p43 + *p44 ;
    TLorentzVector Z2_beforedecay = *p45 + *p46 ;
    
    double dr_Z1_Z2  = Z1.DeltaR(Z2);
    double dr_Z1_Z2_beforedecay  = Z1.DeltaR(Z2_beforedecay);
    dr_Z[0]->Fill(dr_Z1_Z2_beforedecay);
    dr_Z[1]->Fill(dr_Z1_Z2);

    double dphi_Z1_Z2  = Z1.DeltaPhi(Z2);
    double dphi_Z1_Z2_beforedecay  = Z1.DeltaPhi(Z2_beforedecay);
    dphi_Z[0]->Fill(dphi_Z1_Z2_beforedecay);
    dphi_Z[1]->Fill(dphi_Z1_Z2);

    MZ2[0]->Fill(Z2_beforedecay.Mag());
    MZ2[1]->Fill(Z2.Mag());
    
    TLorentzVector lltt_beforedecay = Z1 + Z2_beforedecay ;
    TLorentzVector lltt             = Z1 + Z2;
    
    M2l2tau[0]->Fill(lltt_beforedecay.Mag());
    M2l2tau[1]->Fill(lltt.Mag());
  }
}





void GenInfoTree::mmetFiller(){
  //if(genbits==GenInfoTree::eetauhtauh){
  if(genbits==11){
    //for(int i=0; i<(int)mumom->GetEntries(); i++){
    TLorentzVector*  p41  = (TLorentzVector*) mumom->At(0);
    TLorentzVector*  p42  = (TLorentzVector*) mumom->At(1);
    TLorentzVector*  p43  = (TLorentzVector*) tauemom->At(0);
    TLorentzVector*  p44  = (TLorentzVector*) tauhadmom->At(0);
    // tau before decay 
    TLorentzVector*  p45  = (TLorentzVector*) taumom->At(0);
    TLorentzVector*  p46  = (TLorentzVector*) taumom->At(1);
    
    double pt1 = p41->Pt();
    double pt2 = p42->Pt();
    double pt3 = p43->Pt(); 
    double pt4 = p44->Pt();
    
    // pt of four laptons 
    if(pt1 > pt2) {
      mmet_pt_[0]->Fill(pt1);
      mmet_pt_[1]->Fill(pt2);      
    }
    if(pt1 < pt2){
      mmet_pt_[1]->Fill(pt1);
      mmet_pt_[0]->Fill(pt2);      
    }
    
    if(pt3 > pt4) {
      mmet_pt_[2]->Fill(pt3);
      mmet_pt_[3]->Fill(pt4);      
    }
    if(pt3 < pt4){
      mmet_pt_[3]->Fill(pt3);
      mmet_pt_[2]->Fill(pt4);      
    }
    
    // dr b/w leptons 
    double dr12 = p41->DeltaR(*p42); 
    double dr34 = p43->DeltaR(*p44); 
    dr_leptons[0]->Fill(dr12);
    dr_leptons[2]->Fill(dr34);
    
    double dphi12 = p41->DeltaPhi(*p42); 
    double dphi34 = p43->DeltaPhi(*p44); 
    dphi_leptons[0]->Fill(dphi12);
    dphi_leptons[2]->Fill(dphi34);
    
    
    TLorentzVector Z1 = *p41 + *p42 ;
    TLorentzVector Z2 = *p43 + *p44 ;
    TLorentzVector Z2_beforedecay = *p45 + *p46 ;
    
    double dr_Z1_Z2  = Z1.DeltaR(Z2);
    double dr_Z1_Z2_beforedecay  = Z1.DeltaR(Z2_beforedecay);
    dr_Z[0]->Fill(dr_Z1_Z2_beforedecay);
    dr_Z[2]->Fill(dr_Z1_Z2);

    double dphi_Z1_Z2  = Z1.DeltaPhi(Z2);
    double dphi_Z1_Z2_beforedecay  = Z1.DeltaPhi(Z2_beforedecay);
    dphi_Z[0]->Fill(dphi_Z1_Z2_beforedecay);
    dphi_Z[2]->Fill(dphi_Z1_Z2);

    MZ2[0]->Fill(Z2_beforedecay.Mag());
    MZ2[2]->Fill(Z2.Mag());
    
    TLorentzVector lltt_beforedecay = Z1 + Z2_beforedecay ;
    TLorentzVector lltt             = Z1 + Z2;
    
    M2l2tau[0]->Fill(lltt_beforedecay.Mag());
    M2l2tau[2]->Fill(lltt.Mag());
  }
}




void GenInfoTree::mmmtFiller(){
  //if(genbits==GenInfoTree::eetauhtauh){
  if(genbits==12){
    //for(int i=0; i<(int)mumom->GetEntries(); i++){
    TLorentzVector*  p41  = (TLorentzVector*) mumom->At(0);
    TLorentzVector*  p42  = (TLorentzVector*) mumom->At(1);
    TLorentzVector*  p43  = (TLorentzVector*) taumumom->At(0);
    TLorentzVector*  p44  = (TLorentzVector*) tauhadmom->At(0);
    // tau before decay 
    TLorentzVector*  p45  = (TLorentzVector*) taumom->At(0);
    TLorentzVector*  p46  = (TLorentzVector*) taumom->At(1);
    
    double pt1 = p41->Pt();
    double pt2 = p42->Pt();
    double pt3 = p43->Pt(); 
    double pt4 = p44->Pt();
    
    // pt of four laptons 
    if(pt1 > pt2) {
      mmmt_pt_[0]->Fill(pt1);
      mmmt_pt_[1]->Fill(pt2);      
    }
    if(pt1 < pt2){
      mmmt_pt_[1]->Fill(pt1);
      mmmt_pt_[0]->Fill(pt2);      
    }
    
    if(pt3 > pt4) {
      mmmt_pt_[2]->Fill(pt3);
      mmmt_pt_[3]->Fill(pt4);      
    }
    if(pt3 < pt4){
      mmmt_pt_[3]->Fill(pt3);
      eemt_pt_[2]->Fill(pt4);      
    }
    
    // dr b/w leptons 
    double dr12 = p41->DeltaR(*p42); 
    double dr34 = p43->DeltaR(*p44); 
    dr_leptons[0]->Fill(dr12);
    dr_leptons[2]->Fill(dr34);
    
    double dphi12 = p41->DeltaPhi(*p42); 
    double dphi34 = p43->DeltaPhi(*p44); 
    dphi_leptons[0]->Fill(dphi12);
    dphi_leptons[2]->Fill(dphi34);
    
    
    TLorentzVector Z1 = *p41 + *p42 ;
    TLorentzVector Z2 = *p43 + *p44 ;
    TLorentzVector Z2_beforedecay = *p45 + *p46 ;
    
    double dr_Z1_Z2  = Z1.DeltaR(Z2);
    double dr_Z1_Z2_beforedecay  = Z1.DeltaR(Z2_beforedecay);
    dr_Z[0]->Fill(dr_Z1_Z2_beforedecay);
    dr_Z[2]->Fill(dr_Z1_Z2);

    double dphi_Z1_Z2  = Z1.DeltaPhi(Z2);
    double dphi_Z1_Z2_beforedecay  = Z1.DeltaPhi(Z2_beforedecay);
    dphi_Z[0]->Fill(dphi_Z1_Z2_beforedecay);
    dphi_Z[2]->Fill(dphi_Z1_Z2);

    MZ2[0]->Fill(Z2_beforedecay.Mag());
    MZ2[2]->Fill(Z2.Mag());
    
    TLorentzVector lltt_beforedecay = Z1 + Z2_beforedecay ;
    TLorentzVector lltt             = Z1 + Z2;
    
    M2l2tau[0]->Fill(lltt_beforedecay.Mag());
    M2l2tau[2]->Fill(lltt.Mag());
  }
}



void GenInfoTree::mmmeFiller(){
  //if(genbits==GenInfoTree::eetauhtauh){
  if(genbits==13){
    //for(int i=0; i<(int)mumom->GetEntries(); i++){
    TLorentzVector*  p41  = (TLorentzVector*) mumom->At(0);
    TLorentzVector*  p42  = (TLorentzVector*) mumom->At(1);
    TLorentzVector*  p43  = (TLorentzVector*) tauemom->At(0);
    TLorentzVector*  p44  = (TLorentzVector*) taumumom->At(0);
    // tau before decay 
    TLorentzVector*  p45  = (TLorentzVector*) taumom->At(0);
    TLorentzVector*  p46  = (TLorentzVector*) taumom->At(1);
    
    double pt1 = p41->Pt();
    double pt2 = p42->Pt();
    double pt3 = p43->Pt(); 
    double pt4 = p44->Pt();
    
    // pt of four laptons 
    if(pt1 > pt2) {
      mmme_pt_[0]->Fill(pt1);
      mmme_pt_[1]->Fill(pt2);      
    }
    if(pt1 < pt2){
      mmme_pt_[1]->Fill(pt1);
      mmme_pt_[0]->Fill(pt2);      
    }
    
    if(pt3 > pt4) {
      mmme_pt_[2]->Fill(pt3);
      mmme_pt_[3]->Fill(pt4);      
    }
    if(pt3 < pt4){
      mmme_pt_[3]->Fill(pt3);
      mmme_pt_[2]->Fill(pt4);      
    }
    
    // dr b/w leptons 
    double dr12 = p41->DeltaR(*p42); 
    double dr34 = p43->DeltaR(*p44); 
    dr_leptons[0]->Fill(dr12);
    dr_leptons[3]->Fill(dr34);
    
    double dphi12 = p41->DeltaPhi(*p42); 
    double dphi34 = p43->DeltaPhi(*p44); 
    dphi_leptons[0]->Fill(dphi12);
    dphi_leptons[3]->Fill(dphi34);
    
    
    TLorentzVector Z1 = *p41 + *p42 ;
    TLorentzVector Z2 = *p43 + *p44 ;
    TLorentzVector Z2_beforedecay = *p45 + *p46 ;
    
    double dr_Z1_Z2  = Z1.DeltaR(Z2);
    double dr_Z1_Z2_beforedecay  = Z1.DeltaR(Z2_beforedecay);
    dr_Z[0]->Fill(dr_Z1_Z2_beforedecay);
    dr_Z[3]->Fill(dr_Z1_Z2);

    double dphi_Z1_Z2  = Z1.DeltaPhi(Z2);
    double dphi_Z1_Z2_beforedecay  = Z1.DeltaPhi(Z2_beforedecay);
    dphi_Z[0]->Fill(dphi_Z1_Z2_beforedecay);
    dphi_Z[3]->Fill(dphi_Z1_Z2);

    MZ2[0]->Fill(Z2_beforedecay.Mag());
    MZ2[3]->Fill(Z2.Mag());
    
    TLorentzVector lltt_beforedecay = Z1 + Z2_beforedecay ;
    TLorentzVector lltt             = Z1 + Z2;
    
    M2l2tau[0]->Fill(lltt_beforedecay.Mag());
    M2l2tau[3]->Fill(lltt.Mag());
  }
}




void GenInfoTree::BookHistograms(){
  for (int i=0; i<4; i++){
    TString postfix = Form("_%d",int(i));
    
    eett_pt_[i] = new TH1F("eett_pt_"+postfix,"eett_pt_",200,0,200);
    eeet_pt_[i] = new TH1F("eeet_pt_"+postfix,"eeet_pt_",200,0,200);
    eemt_pt_[i] = new TH1F("eemt_pt_"+postfix,"eemt_pt_",200,0,200);
    eeem_pt_[i] = new TH1F("eeem_pt_"+postfix,"eeem_pt_",200,0,200);

    mmtt_pt_[i] = new TH1F("mmtt_pt_"+postfix,"mmtt_pt_",200,0,200);
    mmet_pt_[i] = new TH1F("mmet_pt_"+postfix,"mmet_pt_",200,0,200);
    mmmt_pt_[i] = new TH1F("mmmt_pt_"+postfix,"mmmt_pt_",200,0,200);
    mmme_pt_[i] = new TH1F("mmme_pt_"+postfix,"mmme_pt_",200,0,200);
    
    dr_leptons[i]    = new TH1F("dr_leptons_"+postfix,"dr_leptons",60,0,6);
    dphi_leptons[i]  = new TH1F("dphi_leptons_"+postfix,"dphi_leptons",60,0,6);
    dr_Z[i]          = new TH1F("dr_Z_"+postfix,"dr_Z",60,0,6);
    dphi_Z[i]        = new TH1F("dphi_Z_"+postfix,"dphi_Z",60,0,6);
    MZ2[i]           = new TH1F("MZ2_"+postfix,"MZ2",120,0,120);
    M2l2tau[i]       = new TH1F("M2l2tau_"+postfix,"M2l2tau",1000,0,1000);

    
  }
}


void GenInfoTree::WriteHistograms(){
  TFile* outfile = new TFile("HZZ.root", "RECREATE");
  outfile->cd();
  for (int i=0; i<4; i++){
    
    eett_pt_[i]->Write();;
    eeet_pt_[i]->Write();;
    eemt_pt_[i]->Write();;
    eeem_pt_[i]->Write();;
    
    mmtt_pt_[i]->Write();;
    mmet_pt_[i]->Write();;
    mmmt_pt_[i]->Write();;
    mmme_pt_[i]->Write();;
    
    dr_leptons[i]->Write();
    dphi_leptons[i]->Write();
    dr_Z[i]->Write();
    dphi_Z[i]->Write();
    MZ2[i]->Write();
    M2l2tau[i]->Write();
  }

}
