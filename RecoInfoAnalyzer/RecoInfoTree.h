//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu May 22 12:43:25 2014 by ROOT version 5.32/00
// from TTree tree/tree
// found on file: patTupleForHZZto2l2Tauanalysis_26_1_H9E.root
//////////////////////////////////////////////////////////

#ifndef RecoInfoTree_h
#define RecoInfoTree_h

using namespace std;
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include <vector>
#include <vector>
#include <vector>
#include <vector>
#include <TClonesArray.h>
#include <TLorentzVector.h>
#include <TVector3.h>
// Fixed size dimensions of array or collections stored in the TTree if any.

class RecoInfoTree {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain
   TH1F*   Muon_Iso_            ;
   TH1F*   Muon_Significance3D_ ;
   TH1F*   Muon_NewVz_          ;
   TH1F*   Muon_normChi2_       ;
   TH1F*   Muon_validHits_      ;
   TH1F*   Muon_tkHits_         ;
   TH1F*   Muon_pixHits_        ;
   TH1F*   Muon_numberOfMatches_;

   TH1F* Electron_Iso_              ;
   TH1F* Electron_MVAID_new_        ;
   TH1F* Electron_HoE_              ;
   TH1F* Electron_SigmaIetaIeta_    ;
   TH1F* Electron_dEtaIn_           ;
   TH1F* Electron_dPhiIn_           ;
   TH1F* Electron_missing_hits_     ;
   TH1F* Electron_Significance3D_   ;


   // Declaration of leaf types
   vector<string>  *all_triggers;
   vector<string>  *electron_triggers_in_run;
   vector<string>  *muon_triggers_in_run;
   vector<string>  *emu_triggers_in_run;
   vector<int>     *all_triggerprescales;
   vector<bool>    *all_ifTriggerpassed;
   vector<bool>    *doubleElectron_ifTriggerpassed;
   vector<bool>    *doubleMuon_ifTriggerpassed;
   vector<bool>    *emu_ifTriggerpassed;
   UInt_t          RunNumber;
   UInt_t          EventNumber;
   UInt_t          LumiNumber;
   UInt_t          BXNumber;
   UInt_t          totalIntensityBeam1;
   UInt_t          totalIntensityBeam2;
   Float_t         avgInsDelLumi;
   Float_t         avgInsDelLumiErr;
   Float_t         avgInsRecLumi;
   Float_t         avgInsRecLumiErr;
   Int_t           Event_n;
   Int_t           ootnpuVertices;
   Int_t           npuVertices;
   Int_t           npuVerticesm1;
   Int_t           npuVerticesp1;
   Float_t         trueInteractions;
   Int_t           Vertex_n;
   vector<float>   *Vertex_chi2;
   vector<float>   *Vertex_d0;
   vector<int>     *Vertex_tracksize;
   vector<int>     *Vertex_ndof;
   vector<bool>    *Vertex_isFake;
   TClonesArray    *Vertex_position;
   Int_t           Track_n;
   TClonesArray    *Track_4Momentum;
   TClonesArray    *Track_Vposition;
   Bool_t          Scraping_isScrapingEvent;
   Int_t           Muon_n;
   vector<float>   *Muon_chargedIso;
   vector<float>   *Muon_photonIso;
   vector<float>   *Muon_neutralIso;
   vector<float>   *Muon_particleIso;
   vector<float>   *Muon_dbeta;
   vector<int>     *Muon_trackerLayersWithMeasurement;
   vector<bool>    *Muon_PFMuID;
   vector<float>   *Muon_Significance3D;
   vector<float>   *Muon_Value3D;
   vector<float>   *Muon_Error3D;
   vector<float>   *Muon_Significance2D;
   vector<float>   *Muon_Value2D;
   vector<float>   *Muon_Error2D;
   TClonesArray    *Muon_4Momentum;
   TClonesArray    *Muon_Vposition;
   TClonesArray    *Muon_OuterTrack_InnerPoint_position;
   TClonesArray    *Muon_OuterTrack_InnerPoint_momentum;
   TClonesArray    *Muon_OuterTrack_OuterPoint_position;
   TClonesArray    *Muon_OuterTrack_OuterPoint_momentum;
   TClonesArray    *Muon_Innertrack_InnerPoint_position;
   TClonesArray    *Muon_Innertrack_InnerPoint_momentum;
   TClonesArray    *Muon_Innertrack_OuterPoint_position;
   TClonesArray    *Muon_Innertrack_OuterPoint_momentum;
   vector<int>     *Muon_charge;
   vector<bool>    *Muon_isGlobalMuon;
   vector<bool>    *Muon_isTrackerMuon;
   vector<bool>    *Muon_isStandAloneMuon;
   vector<bool>    *Muon_InnerTrack_isNonnull;
   vector<bool>    *Muon_OuterTrack_isNonnull;
   vector<float>   *Muon_trackIso;
   vector<float>   *Muon_ecalIso;
   vector<float>   *Muon_hcalIso;
   vector<float>   *Muon_NewVz;
   vector<float>   *Muon_normChi2;
   vector<int>     *Muon_validHits;
   vector<int>     *Muon_tkHits;
   vector<int>     *Muon_pixHits;
   vector<int>     *Muon_numberOfMatches;
   vector<float>   *PFMetPt;
   vector<float>   *PFMetPx;
   vector<float>   *PFMetPy;
   vector<float>   *PFMetPhi;
   vector<float>   *PFMetSumEt;
   Int_t           PFJet_n;
   TClonesArray    *PFJet_4Momentum;
   TClonesArray    *UcPFJet_4Momentum;
   TClonesArray    *PFJet_Vposition;
   vector<float>   *PFJet_CEF;
   vector<float>   *PFJet_NEF;
   vector<float>   *PFJet_CHF;
   vector<float>   *PFJet_NHF;
   vector<float>   *PFJet_HFHAE;
   vector<float>   *PFJet_HFEME;
   vector<int>     *PFJet_NCH;
   vector<int>     *PFJet_NConstituents;
   vector<float>   *PFJet_TrackCountHiEffBJetTags;
   vector<float>   *PFJet_TrackCountHiPurBJetTags;
   vector<float>   *PFJet_SimpleSVHiEffBJetTags;
   vector<float>   *PFJet_SimpleSVHiPurBJetTags;
   vector<float>   *PFJet_CombinedSecondaryVertexBJetTags;
   vector<float>   *PFJet_JetProbabilityBJetTags;
   vector<float>   *PFJet_jecUncer;
   vector<float>   *PFJet_jecCorr;
   Int_t           Electron_n;
   vector<float>   *NewVz;
   vector<float>   *Electron_chargedIso;
   vector<float>   *Electron_photonIso;
   vector<float>   *Electron_neutralIso;
   vector<float>   *Electron_particleIso;
   vector<float>   *Electron_dbeta;
   vector<float>   *Electron_MVAID;
   vector<float>   *Electron_MVAID_new;
   TClonesArray    *Electron_4Momentum;
   TClonesArray    *Electron_Vposition;
   TClonesArray    *Electron_sc_position;
   vector<int>     *Electron_charge;
   vector<float>   *Electron_HoE;
   vector<float>   *Electron_SigmaIetaIeta;
   vector<float>   *Electron_trkIso;
   vector<float>   *Electron_ecalIso;
   vector<float>   *Electron_hcalIso;
   vector<float>   *Electron_dEtaIn;
   vector<float>   *Electron_dPhiIn;
   vector<float>   *Electron_sc_E;
   vector<float>   *Electron_sc_Eta;
   vector<float>   *Electron_missing_hits;
   vector<float>   *Electron_Significance3D;
   vector<float>   *Electron_Value3D;
   vector<float>   *Electron_Error3D;
   vector<float>   *Electron_Significance2D;
   vector<float>   *Electron_Value2D;
   vector<float>   *Electron_Error2D;
   Float_t         rho;
   Float_t         rho44;
   Float_t         sigma;
   Float_t         sigma44;
   Int_t           HPSTau_n;
   vector<float>   *taupt;
   TClonesArray    *HPSTau_4Momentum;
   TClonesArray    *HPSTau_Vposition;
   vector<bool>    *HPSTau_leadPFChargedHadrCand;
   vector<bool>    *HPSTau_leadPFChargedHadrCand_trackRef;
   vector<bool>    *discriminationby_byLooseIsolationMVA2;
   vector<bool>    *discriminationby_byMediumIsolationMVA2;
   vector<bool>    *discriminationby_byTightIsolationMVA2;
   vector<bool>    *discriminationby_againstElectronLooseMVA3;
   vector<bool>    *discriminationby_againstElectronMediumMVA3;
   vector<bool>    *discriminationby_againstElectronTightMVA3;
   vector<bool>    *discriminationby_againstElectronVTightMVA3;
   vector<bool>    *discriminationby_againstElectronMVA3raw;
   vector<bool>    *discriminationby_againstMuonLoose2;
   vector<bool>    *discriminationby_againstMuonMedium2;
   vector<bool>    *discriminationby_againstMuonTight2;
   vector<bool>    *discriminationby_againstElectronLoose;
   vector<bool>    *discriminationby_againstElectronMVA;
   vector<bool>    *discriminationby_againstElectronMedium;
   vector<bool>    *discriminationby_againstElectronTight;
   vector<bool>    *discriminationby_againstMuonLoose;
   vector<bool>    *discriminationby_againstMuonMedium;
   vector<bool>    *discriminationby_againstMuonTight;
   vector<bool>    *discriminationby_byLooseCombinedIsolationDeltaBetaCorr;
   vector<bool>    *discriminationby_byLooseCombinedIsolationDeltaBetaCorr3Hits;
   vector<bool>    *discriminationby_byLooseIsolation;
   vector<bool>    *discriminationby_byLooseIsolationDeltaBetaCorr;
   vector<bool>    *discriminationby_byLooseIsolationMVA;
   vector<bool>    *discriminationby_byMediumCombinedIsolationDeltaBetaCorr;
   vector<bool>    *discriminationby_byMediumCombinedIsolationDeltaBetaCorr3Hits;
   vector<bool>    *discriminationby_byMediumIsolation;
   vector<bool>    *discriminationby_byMediumIsolationDeltaBetaCorr;
   vector<bool>    *discriminationby_byMediumIsolationMVA;
   vector<bool>    *discriminationby_byTightCombinedIsolationDeltaBetaCorr;
   vector<bool>    *discriminationby_byTightCombinedIsolationDeltaBetaCorr3Hits;
   vector<bool>    *discriminationby_byTightIsolation;
   vector<bool>    *discriminationby_byTightIsolationDeltaBetaCorr;
   vector<bool>    *discriminationby_byTightIsolationMVA;
   vector<bool>    *discriminationby_byVLooseCombinedIsolationDeltaBetaCorr;
   vector<bool>    *discriminationby_byVLooseIsolation;
   vector<bool>    *discriminationby_byVLooseIsolationDeltaBetaCorr;
   vector<bool>    *discriminationby_decayModeFinding;
   vector<float>   *HPSTau_NewVz;
   vector<int>     *HPSTau_charge;
   TClonesArray    *H_Gen_4Momentum;
   vector<float>   *HMass;

   // List of branches
   TBranch        *b_all_triggers;   //!
   TBranch        *b_electron_triggers_in_run;   //!
   TBranch        *b_muon_triggers_in_run;   //!
   TBranch        *b_emu_triggers_in_run;   //!
   TBranch        *b_all_triggerprescales;   //!
   TBranch        *b_all_ifTriggerpassed;   //!
   TBranch        *b_doubleElectron_ifTriggerpassed;   //!
   TBranch        *b_doubleMuon_ifTriggerpassed;   //!
   TBranch        *b_emu_ifTriggerpassed;   //!
   TBranch        *b_RunNumber;   //!
   TBranch        *b_EventNumber;   //!
   TBranch        *b_LumiNumber;   //!
   TBranch        *b_BXNumber;   //!
   TBranch        *b_totalIntensityBeam1;   //!
   TBranch        *b_totalIntensityBeam2;   //!
   TBranch        *b_avgInsDelLumi;   //!
   TBranch        *b_avgInsDelLumiErr;   //!
   TBranch        *b_avgInsRecLumi;   //!
   TBranch        *b_avgInsRecLumiErr;   //!
   TBranch        *b_Event_n;   //!
   TBranch        *b_ootnpuVertices;   //!
   TBranch        *b_npuVertices;   //!
   TBranch        *b_npuVerticesm1;   //!
   TBranch        *b_npuVerticesp1;   //!
   TBranch        *b_trueInteractions;   //!
   TBranch        *b_Vertex_n;   //!
   TBranch        *b_Vertex_chi2;   //!
   TBranch        *b_Vertex_d0;   //!
   TBranch        *b_Vertex_tracksize;   //!
   TBranch        *b_Vertex_ndof;   //!
   TBranch        *b_Vertex_isFake;   //!
   TBranch        *b_Vertex_position;   //!
   TBranch        *b_Track_n;   //!
   TBranch        *b_Track_4Momentum;   //!
   TBranch        *b_Track_Vposition;   //!
   TBranch        *b_Scraping_isScrapingEvent;   //!
   TBranch        *b_Muon_n;   //!
   TBranch        *b_Muon_chargedIso;   //!
   TBranch        *b_Muon_photonIso;   //!
   TBranch        *b_Muon_neutralIso;   //!
   TBranch        *b_Muon_particleIso;   //!
   TBranch        *b_Muon_dbeta;   //!
   TBranch        *b_Muon_trackerLayersWithMeasurement;   //!
   TBranch        *b_Muon_PFMuID;   //!
   TBranch        *b_Muon_Significance3D;   //!
   TBranch        *b_Muon_Value3D;   //!
   TBranch        *b_Muon_Error3D;   //!
   TBranch        *b_Muon_Significance2D;   //!
   TBranch        *b_Muon_Value2D;   //!
   TBranch        *b_Muon_Error2D;   //!
   TBranch        *b_Muon_4Momentum;   //!
   TBranch        *b_Muon_Vposition;   //!
   TBranch        *b_Muon_OuterTrack_InnerPoint_position;   //!
   TBranch        *b_Muon_OuterTrack_InnerPoint_momentum;   //!
   TBranch        *b_Muon_OuterTrack_OuterPoint_position;   //!
   TBranch        *b_Muon_OuterTrack_OuterPoint_momentum;   //!
   TBranch        *b_Muon_Innertrack_InnerPoint_position;   //!
   TBranch        *b_Muon_Innertrack_InnerPoint_momentum;   //!
   TBranch        *b_Muon_Innertrack_OuterPoint_position;   //!
   TBranch        *b_Muon_Innertrack_OuterPoint_momentum;   //!
   TBranch        *b_Muon_charge;   //!
   TBranch        *b_Muon_isGlobalMuon;   //!
   TBranch        *b_Muon_isTrackerMuon;   //!
   TBranch        *b_Muon_isStandAloneMuon;   //!
   TBranch        *b_Muon_InnerTrack_isNonnull;   //!
   TBranch        *b_Muon_OuterTrack_isNonnull;   //!
   TBranch        *b_Muon_trackIso;   //!
   TBranch        *b_Muon_ecalIso;   //!
   TBranch        *b_Muon_hcalIso;   //!
   TBranch        *b_Muon_NewVz;   //!
   TBranch        *b_Muon_normChi2;   //!
   TBranch        *b_Muon_validHits;   //!
   TBranch        *b_Muon_tkHits;   //!
   TBranch        *b_Muon_pixHits;   //!
   TBranch        *b_Muon_numberOfMatches;   //!
   TBranch        *b_PFMetPt;   //!
   TBranch        *b_PFMetPx;   //!
   TBranch        *b_PFMetPy;   //!
   TBranch        *b_PFMetPhi;   //!
   TBranch        *b_PFMetSumEt;   //!
   TBranch        *b_PFJet_n;   //!
   TBranch        *b_PFJet_4Momentum;   //!
   TBranch        *b_UcPFJet_4Momentum;   //!
   TBranch        *b_PFJet_Vposition;   //!
   TBranch        *b_PFJet_CEF;   //!
   TBranch        *b_PFJet_NEF;   //!
   TBranch        *b_PFJet_CHF;   //!
   TBranch        *b_PFJet_NHF;   //!
   TBranch        *b_PFJet_HFHAE;   //!
   TBranch        *b_PFJet_HFEME;   //!
   TBranch        *b_PFJet_NCH;   //!
   TBranch        *b_PFJet_NConstituents;   //!
   TBranch        *b_PFJet_TrackCountHiEffBJetTags;   //!
   TBranch        *b_PFJet_TrackCountHiPurBJetTags;   //!
   TBranch        *b_PFJet_SimpleSVHiEffBJetTags;   //!
   TBranch        *b_PFJet_SimpleSVHiPurBJetTags;   //!
   TBranch        *b_PFJet_CombinedSecondaryVertexBJetTags;   //!
   TBranch        *b_PFJet_JetProbabilityBJetTags;   //!
   TBranch        *b_PFJet_jecUncer;   //!
   TBranch        *b_PFJet_jecCorr;   //!
   TBranch        *b_Electron_n;   //!
   TBranch        *b_NewVz;   //!
   TBranch        *b_Electron_chargedIso;   //!
   TBranch        *b_Electron_photonIso;   //!
   TBranch        *b_Electron_neutralIso;   //!
   TBranch        *b_Electron_particleIso;   //!
   TBranch        *b_Electron_dbeta;   //!
   TBranch        *b_Electron_MVAID;   //!
   TBranch        *b_Electron_MVAID_new;   //!
   TBranch        *b_Electron_4Momentum;   //!
   TBranch        *b_Electron_Vposition;   //!
   TBranch        *b_Electron_sc_position;   //!
   TBranch        *b_Electron_charge;   //!
   TBranch        *b_Electron_HoE;   //!
   TBranch        *b_Electron_SigmaIetaIeta;   //!
   TBranch        *b_Electron_trkIso;   //!
   TBranch        *b_Electron_ecalIso;   //!
   TBranch        *b_Electron_hcalIso;   //!
   TBranch        *b_Electron_dEtaIn;   //!
   TBranch        *b_Electron_dPhiIn;   //!
   TBranch        *b_Electron_sc_E;   //!
   TBranch        *b_Electron_sc_Eta;   //!
   TBranch        *b_Electron_missing_hits;   //!
   TBranch        *b_Electron_Significance3D;   //!
   TBranch        *b_Electron_Value3D;   //!
   TBranch        *b_Electron_Error3D;   //!
   TBranch        *b_Electron_Significance2D;   //!
   TBranch        *b_Electron_Value2D;   //!
   TBranch        *b_Electron_Error2D;   //!
   TBranch        *b_rho;   //!
   TBranch        *b_rho44;   //!
   TBranch        *b_sigma;   //!
   TBranch        *b_sigma44;   //!
   TBranch        *b_HPSTau_n;   //!
   TBranch        *b_taupt;   //!
   TBranch        *b_HPSTau_4Momentum;   //!
   TBranch        *b_HPSTau_Vposition;   //!
   TBranch        *b_HPSTau_leadPFChargedHadrCand;   //!
   TBranch        *b_HPSTau_leadPFChargedHadrCand_trackRef;   //!
   TBranch        *b_discriminationby_byLooseIsolationMVA2;   //!
   TBranch        *b_discriminationby_byMediumIsolationMVA2;   //!
   TBranch        *b_discriminationby_byTightIsolationMVA2;   //!
   TBranch        *b_discriminationby_againstElectronLooseMVA3;   //!
   TBranch        *b_discriminationby_againstElectronMediumMVA3;   //!
   TBranch        *b_discriminationby_againstElectronTightMVA3;   //!
   TBranch        *b_discriminationby_againstElectronVTightMVA3;   //!
   TBranch        *b_discriminationby_againstElectronMVA3raw;   //!
   TBranch        *b_discriminationby_againstMuonLoose2;   //!
   TBranch        *b_discriminationby_againstMuonMedium2;   //!
   TBranch        *b_discriminationby_againstMuonTight2;   //!
   TBranch        *b_discriminationby_againstElectronLoose;   //!
   TBranch        *b_discriminationby_againstElectronMVA;   //!
   TBranch        *b_discriminationby_againstElectronMedium;   //!
   TBranch        *b_discriminationby_againstElectronTight;   //!
   TBranch        *b_discriminationby_againstMuonLoose;   //!
   TBranch        *b_discriminationby_againstMuonMedium;   //!
   TBranch        *b_discriminationby_againstMuonTight;   //!
   TBranch        *b_discriminationby_byLooseCombinedIsolationDeltaBetaCorr;   //!
   TBranch        *b_discriminationby_byLooseCombinedIsolationDeltaBetaCorr3Hits;   //!
   TBranch        *b_discriminationby_byLooseIsolation;   //!
   TBranch        *b_discriminationby_byLooseIsolationDeltaBetaCorr;   //!
   TBranch        *b_discriminationby_byLooseIsolationMVA;   //!
   TBranch        *b_discriminationby_byMediumCombinedIsolationDeltaBetaCorr;   //!
   TBranch        *b_discriminationby_byMediumCombinedIsolationDeltaBetaCorr3Hits;   //!
   TBranch        *b_discriminationby_byMediumIsolation;   //!
   TBranch        *b_discriminationby_byMediumIsolationDeltaBetaCorr;   //!
   TBranch        *b_discriminationby_byMediumIsolationMVA;   //!
   TBranch        *b_discriminationby_byTightCombinedIsolationDeltaBetaCorr;   //!
   TBranch        *b_discriminationby_byTightCombinedIsolationDeltaBetaCorr3Hits;   //!
   TBranch        *b_discriminationby_byTightIsolation;   //!
   TBranch        *b_discriminationby_byTightIsolationDeltaBetaCorr;   //!
   TBranch        *b_discriminationby_byTightIsolationMVA;   //!
   TBranch        *b_discriminationby_byVLooseCombinedIsolationDeltaBetaCorr;   //!
   TBranch        *b_discriminationby_byVLooseIsolation;   //!
   TBranch        *b_discriminationby_byVLooseIsolationDeltaBetaCorr;   //!
   TBranch        *b_discriminationby_decayModeFinding;   //!
   TBranch        *b_HPSTau_NewVz;   //!
   TBranch        *b_HPSTau_charge;   //!
   TBranch        *b_H_Gen_4Momentum;   //!
   TBranch        *b_HMass;   //!

   RecoInfoTree(TTree *tree=0);
   virtual ~RecoInfoTree();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
   void BookHistograms();
   void Write2Histograms();
   
};

#endif

#ifdef RecoInfoTree_cxx
RecoInfoTree::RecoInfoTree(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("../patTupleForHZZto2l2Tauanalysis_26_1_H9E.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("../patTupleForHZZto2l2Tauanalysis_26_1_H9E.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("../patTupleForHZZto2l2Tauanalysis_26_1_H9E.root:/demo");
      dir->GetObject("tree",tree);

   }
   Init(tree);
}

RecoInfoTree::~RecoInfoTree()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t RecoInfoTree::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t RecoInfoTree::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void RecoInfoTree::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   all_triggers = 0;
   electron_triggers_in_run = 0;
   muon_triggers_in_run = 0;
   emu_triggers_in_run = 0;
   all_triggerprescales = 0;
   all_ifTriggerpassed = 0;
   doubleElectron_ifTriggerpassed = 0;
   doubleMuon_ifTriggerpassed = 0;
   emu_ifTriggerpassed = 0;
   Vertex_chi2 = 0;
   Vertex_d0 = 0;
   Vertex_tracksize = 0;
   Vertex_ndof = 0;
   Vertex_isFake = 0;
   Vertex_position = 0;
   Track_4Momentum = 0;
   Track_Vposition = 0;
   Muon_chargedIso = 0;
   Muon_photonIso = 0;
   Muon_neutralIso = 0;
   Muon_particleIso = 0;
   Muon_dbeta = 0;
   Muon_trackerLayersWithMeasurement = 0;
   Muon_PFMuID = 0;
   Muon_Significance3D = 0;
   Muon_Value3D = 0;
   Muon_Error3D = 0;
   Muon_Significance2D = 0;
   Muon_Value2D = 0;
   Muon_Error2D = 0;
   Muon_4Momentum = 0;
   Muon_Vposition = 0;
   Muon_OuterTrack_InnerPoint_position = 0;
   Muon_OuterTrack_InnerPoint_momentum = 0;
   Muon_OuterTrack_OuterPoint_position = 0;
   Muon_OuterTrack_OuterPoint_momentum = 0;
   Muon_Innertrack_InnerPoint_position = 0;
   Muon_Innertrack_InnerPoint_momentum = 0;
   Muon_Innertrack_OuterPoint_position = 0;
   Muon_Innertrack_OuterPoint_momentum = 0;
   Muon_charge = 0;
   Muon_isGlobalMuon = 0;
   Muon_isTrackerMuon = 0;
   Muon_isStandAloneMuon = 0;
   Muon_InnerTrack_isNonnull = 0;
   Muon_OuterTrack_isNonnull = 0;
   Muon_trackIso = 0;
   Muon_ecalIso = 0;
   Muon_hcalIso = 0;
   Muon_NewVz = 0;
   Muon_normChi2 = 0;
   Muon_validHits = 0;
   Muon_tkHits = 0;
   Muon_pixHits = 0;
   Muon_numberOfMatches = 0;
   PFMetPt = 0;
   PFMetPx = 0;
   PFMetPy = 0;
   PFMetPhi = 0;
   PFMetSumEt = 0;
   PFJet_4Momentum = 0;
   UcPFJet_4Momentum = 0;
   PFJet_Vposition = 0;
   PFJet_CEF = 0;
   PFJet_NEF = 0;
   PFJet_CHF = 0;
   PFJet_NHF = 0;
   PFJet_HFHAE = 0;
   PFJet_HFEME = 0;
   PFJet_NCH = 0;
   PFJet_NConstituents = 0;
   PFJet_TrackCountHiEffBJetTags = 0;
   PFJet_TrackCountHiPurBJetTags = 0;
   PFJet_SimpleSVHiEffBJetTags = 0;
   PFJet_SimpleSVHiPurBJetTags = 0;
   PFJet_CombinedSecondaryVertexBJetTags = 0;
   PFJet_JetProbabilityBJetTags = 0;
   PFJet_jecUncer = 0;
   PFJet_jecCorr = 0;
   NewVz = 0;
   Electron_chargedIso = 0;
   Electron_photonIso = 0;
   Electron_neutralIso = 0;
   Electron_particleIso = 0;
   Electron_dbeta = 0;
   Electron_MVAID = 0;
   Electron_MVAID_new = 0;
   Electron_4Momentum = 0;
   Electron_Vposition = 0;
   Electron_sc_position = 0;
   Electron_charge = 0;
   Electron_HoE = 0;
   Electron_SigmaIetaIeta = 0;
   Electron_trkIso = 0;
   Electron_ecalIso = 0;
   Electron_hcalIso = 0;
   Electron_dEtaIn = 0;
   Electron_dPhiIn = 0;
   Electron_sc_E = 0;
   Electron_sc_Eta = 0;
   Electron_missing_hits = 0;
   Electron_Significance3D = 0;
   Electron_Value3D = 0;
   Electron_Error3D = 0;
   Electron_Significance2D = 0;
   Electron_Value2D = 0;
   Electron_Error2D = 0;
   taupt = 0;
   HPSTau_4Momentum = 0;
   HPSTau_Vposition = 0;
   HPSTau_leadPFChargedHadrCand = 0;
   HPSTau_leadPFChargedHadrCand_trackRef = 0;
   discriminationby_byLooseIsolationMVA2 = 0;
   discriminationby_byMediumIsolationMVA2 = 0;
   discriminationby_byTightIsolationMVA2 = 0;
   discriminationby_againstElectronLooseMVA3 = 0;
   discriminationby_againstElectronMediumMVA3 = 0;
   discriminationby_againstElectronTightMVA3 = 0;
   discriminationby_againstElectronVTightMVA3 = 0;
   discriminationby_againstElectronMVA3raw = 0;
   discriminationby_againstMuonLoose2 = 0;
   discriminationby_againstMuonMedium2 = 0;
   discriminationby_againstMuonTight2 = 0;
   discriminationby_againstElectronLoose = 0;
   discriminationby_againstElectronMVA = 0;
   discriminationby_againstElectronMedium = 0;
   discriminationby_againstElectronTight = 0;
   discriminationby_againstMuonLoose = 0;
   discriminationby_againstMuonMedium = 0;
   discriminationby_againstMuonTight = 0;
   discriminationby_byLooseCombinedIsolationDeltaBetaCorr = 0;
   discriminationby_byLooseCombinedIsolationDeltaBetaCorr3Hits = 0;
   discriminationby_byLooseIsolation = 0;
   discriminationby_byLooseIsolationDeltaBetaCorr = 0;
   discriminationby_byLooseIsolationMVA = 0;
   discriminationby_byMediumCombinedIsolationDeltaBetaCorr = 0;
   discriminationby_byMediumCombinedIsolationDeltaBetaCorr3Hits = 0;
   discriminationby_byMediumIsolation = 0;
   discriminationby_byMediumIsolationDeltaBetaCorr = 0;
   discriminationby_byMediumIsolationMVA = 0;
   discriminationby_byTightCombinedIsolationDeltaBetaCorr = 0;
   discriminationby_byTightCombinedIsolationDeltaBetaCorr3Hits = 0;
   discriminationby_byTightIsolation = 0;
   discriminationby_byTightIsolationDeltaBetaCorr = 0;
   discriminationby_byTightIsolationMVA = 0;
   discriminationby_byVLooseCombinedIsolationDeltaBetaCorr = 0;
   discriminationby_byVLooseIsolation = 0;
   discriminationby_byVLooseIsolationDeltaBetaCorr = 0;
   discriminationby_decayModeFinding = 0;
   HPSTau_NewVz = 0;
   HPSTau_charge = 0;
   H_Gen_4Momentum = 0;
   HMass = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("all_triggers", &all_triggers, &b_all_triggers);
   fChain->SetBranchAddress("electron_triggers_in_run", &electron_triggers_in_run, &b_electron_triggers_in_run);
   fChain->SetBranchAddress("muon_triggers_in_run", &muon_triggers_in_run, &b_muon_triggers_in_run);
   fChain->SetBranchAddress("emu_triggers_in_run", &emu_triggers_in_run, &b_emu_triggers_in_run);
   fChain->SetBranchAddress("all_triggerprescales", &all_triggerprescales, &b_all_triggerprescales);
   fChain->SetBranchAddress("all_ifTriggerpassed", &all_ifTriggerpassed, &b_all_ifTriggerpassed);
   fChain->SetBranchAddress("doubleElectron_ifTriggerpassed", &doubleElectron_ifTriggerpassed, &b_doubleElectron_ifTriggerpassed);
   fChain->SetBranchAddress("doubleMuon_ifTriggerpassed", &doubleMuon_ifTriggerpassed, &b_doubleMuon_ifTriggerpassed);
   fChain->SetBranchAddress("emu_ifTriggerpassed", &emu_ifTriggerpassed, &b_emu_ifTriggerpassed);
   fChain->SetBranchAddress("RunNumber", &RunNumber, &b_RunNumber);
   fChain->SetBranchAddress("EventNumber", &EventNumber, &b_EventNumber);
   fChain->SetBranchAddress("LumiNumber", &LumiNumber, &b_LumiNumber);
   fChain->SetBranchAddress("BXNumber", &BXNumber, &b_BXNumber);
   fChain->SetBranchAddress("totalIntensityBeam1", &totalIntensityBeam1, &b_totalIntensityBeam1);
   fChain->SetBranchAddress("totalIntensityBeam2", &totalIntensityBeam2, &b_totalIntensityBeam2);
   fChain->SetBranchAddress("avgInsDelLumi", &avgInsDelLumi, &b_avgInsDelLumi);
   fChain->SetBranchAddress("avgInsDelLumiErr", &avgInsDelLumiErr, &b_avgInsDelLumiErr);
   fChain->SetBranchAddress("avgInsRecLumi", &avgInsRecLumi, &b_avgInsRecLumi);
   fChain->SetBranchAddress("avgInsRecLumiErr", &avgInsRecLumiErr, &b_avgInsRecLumiErr);
   fChain->SetBranchAddress("Event_n", &Event_n, &b_Event_n);
   fChain->SetBranchAddress("ootnpuVertices", &ootnpuVertices, &b_ootnpuVertices);
   fChain->SetBranchAddress("npuVertices", &npuVertices, &b_npuVertices);
   fChain->SetBranchAddress("npuVerticesm1", &npuVerticesm1, &b_npuVerticesm1);
   fChain->SetBranchAddress("npuVerticesp1", &npuVerticesp1, &b_npuVerticesp1);
   fChain->SetBranchAddress("trueInteractions", &trueInteractions, &b_trueInteractions);
   fChain->SetBranchAddress("Vertex_n", &Vertex_n, &b_Vertex_n);
   fChain->SetBranchAddress("Vertex_chi2", &Vertex_chi2, &b_Vertex_chi2);
   fChain->SetBranchAddress("Vertex_d0", &Vertex_d0, &b_Vertex_d0);
   fChain->SetBranchAddress("Vertex_tracksize", &Vertex_tracksize, &b_Vertex_tracksize);
   fChain->SetBranchAddress("Vertex_ndof", &Vertex_ndof, &b_Vertex_ndof);
   fChain->SetBranchAddress("Vertex_isFake", &Vertex_isFake, &b_Vertex_isFake);
   fChain->SetBranchAddress("Vertex_position", &Vertex_position, &b_Vertex_position);
   fChain->SetBranchAddress("Track_n", &Track_n, &b_Track_n);
   fChain->SetBranchAddress("Track_4Momentum", &Track_4Momentum, &b_Track_4Momentum);
   fChain->SetBranchAddress("Track_Vposition", &Track_Vposition, &b_Track_Vposition);
   fChain->SetBranchAddress("Scraping_isScrapingEvent", &Scraping_isScrapingEvent, &b_Scraping_isScrapingEvent);
   fChain->SetBranchAddress("Muon_n", &Muon_n, &b_Muon_n);
   fChain->SetBranchAddress("Muon_chargedIso", &Muon_chargedIso, &b_Muon_chargedIso);
   fChain->SetBranchAddress("Muon_photonIso", &Muon_photonIso, &b_Muon_photonIso);
   fChain->SetBranchAddress("Muon_neutralIso", &Muon_neutralIso, &b_Muon_neutralIso);
   fChain->SetBranchAddress("Muon_particleIso", &Muon_particleIso, &b_Muon_particleIso);
   fChain->SetBranchAddress("Muon_dbeta", &Muon_dbeta, &b_Muon_dbeta);
   fChain->SetBranchAddress("Muon_trackerLayersWithMeasurement", &Muon_trackerLayersWithMeasurement, &b_Muon_trackerLayersWithMeasurement);
   fChain->SetBranchAddress("Muon_PFMuID", &Muon_PFMuID, &b_Muon_PFMuID);
   fChain->SetBranchAddress("Muon_Significance3D", &Muon_Significance3D, &b_Muon_Significance3D);
   fChain->SetBranchAddress("Muon_Value3D", &Muon_Value3D, &b_Muon_Value3D);
   fChain->SetBranchAddress("Muon_Error3D", &Muon_Error3D, &b_Muon_Error3D);
   fChain->SetBranchAddress("Muon_Significance2D", &Muon_Significance2D, &b_Muon_Significance2D);
   fChain->SetBranchAddress("Muon_Value2D", &Muon_Value2D, &b_Muon_Value2D);
   fChain->SetBranchAddress("Muon_Error2D", &Muon_Error2D, &b_Muon_Error2D);
   fChain->SetBranchAddress("Muon_4Momentum", &Muon_4Momentum, &b_Muon_4Momentum);
   fChain->SetBranchAddress("Muon_Vposition", &Muon_Vposition, &b_Muon_Vposition);
   fChain->SetBranchAddress("Muon_OuterTrack_InnerPoint_position", &Muon_OuterTrack_InnerPoint_position, &b_Muon_OuterTrack_InnerPoint_position);
   fChain->SetBranchAddress("Muon_OuterTrack_InnerPoint_momentum", &Muon_OuterTrack_InnerPoint_momentum, &b_Muon_OuterTrack_InnerPoint_momentum);
   fChain->SetBranchAddress("Muon_OuterTrack_OuterPoint_position", &Muon_OuterTrack_OuterPoint_position, &b_Muon_OuterTrack_OuterPoint_position);
   fChain->SetBranchAddress("Muon_OuterTrack_OuterPoint_momentum", &Muon_OuterTrack_OuterPoint_momentum, &b_Muon_OuterTrack_OuterPoint_momentum);
   fChain->SetBranchAddress("Muon_Innertrack_InnerPoint_position", &Muon_Innertrack_InnerPoint_position, &b_Muon_Innertrack_InnerPoint_position);
   fChain->SetBranchAddress("Muon_Innertrack_InnerPoint_momentum", &Muon_Innertrack_InnerPoint_momentum, &b_Muon_Innertrack_InnerPoint_momentum);
   fChain->SetBranchAddress("Muon_Innertrack_OuterPoint_position", &Muon_Innertrack_OuterPoint_position, &b_Muon_Innertrack_OuterPoint_position);
   fChain->SetBranchAddress("Muon_Innertrack_OuterPoint_momentum", &Muon_Innertrack_OuterPoint_momentum, &b_Muon_Innertrack_OuterPoint_momentum);
   fChain->SetBranchAddress("Muon_charge", &Muon_charge, &b_Muon_charge);
   fChain->SetBranchAddress("Muon_isGlobalMuon", &Muon_isGlobalMuon, &b_Muon_isGlobalMuon);
   fChain->SetBranchAddress("Muon_isTrackerMuon", &Muon_isTrackerMuon, &b_Muon_isTrackerMuon);
   fChain->SetBranchAddress("Muon_isStandAloneMuon", &Muon_isStandAloneMuon, &b_Muon_isStandAloneMuon);
   fChain->SetBranchAddress("Muon_InnerTrack_isNonnull", &Muon_InnerTrack_isNonnull, &b_Muon_InnerTrack_isNonnull);
   fChain->SetBranchAddress("Muon_OuterTrack_isNonnull", &Muon_OuterTrack_isNonnull, &b_Muon_OuterTrack_isNonnull);
   fChain->SetBranchAddress("Muon_trackIso", &Muon_trackIso, &b_Muon_trackIso);
   fChain->SetBranchAddress("Muon_ecalIso", &Muon_ecalIso, &b_Muon_ecalIso);
   fChain->SetBranchAddress("Muon_hcalIso", &Muon_hcalIso, &b_Muon_hcalIso);
   fChain->SetBranchAddress("Muon_NewVz", &Muon_NewVz, &b_Muon_NewVz);
   fChain->SetBranchAddress("Muon_normChi2", &Muon_normChi2, &b_Muon_normChi2);
   fChain->SetBranchAddress("Muon_validHits", &Muon_validHits, &b_Muon_validHits);
   fChain->SetBranchAddress("Muon_tkHits", &Muon_tkHits, &b_Muon_tkHits);
   fChain->SetBranchAddress("Muon_pixHits", &Muon_pixHits, &b_Muon_pixHits);
   fChain->SetBranchAddress("Muon_numberOfMatches", &Muon_numberOfMatches, &b_Muon_numberOfMatches);
   fChain->SetBranchAddress("PFMetPt", &PFMetPt, &b_PFMetPt);
   fChain->SetBranchAddress("PFMetPx", &PFMetPx, &b_PFMetPx);
   fChain->SetBranchAddress("PFMetPy", &PFMetPy, &b_PFMetPy);
   fChain->SetBranchAddress("PFMetPhi", &PFMetPhi, &b_PFMetPhi);
   fChain->SetBranchAddress("PFMetSumEt", &PFMetSumEt, &b_PFMetSumEt);
   fChain->SetBranchAddress("PFJet_n", &PFJet_n, &b_PFJet_n);
   fChain->SetBranchAddress("PFJet_4Momentum", &PFJet_4Momentum, &b_PFJet_4Momentum);
   fChain->SetBranchAddress("UcPFJet_4Momentum", &UcPFJet_4Momentum, &b_UcPFJet_4Momentum);
   fChain->SetBranchAddress("PFJet_Vposition", &PFJet_Vposition, &b_PFJet_Vposition);
   fChain->SetBranchAddress("PFJet_CEF", &PFJet_CEF, &b_PFJet_CEF);
   fChain->SetBranchAddress("PFJet_NEF", &PFJet_NEF, &b_PFJet_NEF);
   fChain->SetBranchAddress("PFJet_CHF", &PFJet_CHF, &b_PFJet_CHF);
   fChain->SetBranchAddress("PFJet_NHF", &PFJet_NHF, &b_PFJet_NHF);
   fChain->SetBranchAddress("PFJet_HFHAE", &PFJet_HFHAE, &b_PFJet_HFHAE);
   fChain->SetBranchAddress("PFJet_HFEME", &PFJet_HFEME, &b_PFJet_HFEME);
   fChain->SetBranchAddress("PFJet_NCH", &PFJet_NCH, &b_PFJet_NCH);
   fChain->SetBranchAddress("PFJet_NConstituents", &PFJet_NConstituents, &b_PFJet_NConstituents);
   fChain->SetBranchAddress("PFJet_TrackCountHiEffBJetTags", &PFJet_TrackCountHiEffBJetTags, &b_PFJet_TrackCountHiEffBJetTags);
   fChain->SetBranchAddress("PFJet_TrackCountHiPurBJetTags", &PFJet_TrackCountHiPurBJetTags, &b_PFJet_TrackCountHiPurBJetTags);
   fChain->SetBranchAddress("PFJet_SimpleSVHiEffBJetTags", &PFJet_SimpleSVHiEffBJetTags, &b_PFJet_SimpleSVHiEffBJetTags);
   fChain->SetBranchAddress("PFJet_SimpleSVHiPurBJetTags", &PFJet_SimpleSVHiPurBJetTags, &b_PFJet_SimpleSVHiPurBJetTags);
   fChain->SetBranchAddress("PFJet_CombinedSecondaryVertexBJetTags", &PFJet_CombinedSecondaryVertexBJetTags, &b_PFJet_CombinedSecondaryVertexBJetTags);
   fChain->SetBranchAddress("PFJet_JetProbabilityBJetTags", &PFJet_JetProbabilityBJetTags, &b_PFJet_JetProbabilityBJetTags);
   fChain->SetBranchAddress("PFJet_jecUncer", &PFJet_jecUncer, &b_PFJet_jecUncer);
   fChain->SetBranchAddress("PFJet_jecCorr", &PFJet_jecCorr, &b_PFJet_jecCorr);
   fChain->SetBranchAddress("Electron_n", &Electron_n, &b_Electron_n);
   fChain->SetBranchAddress("NewVz", &NewVz, &b_NewVz);
   fChain->SetBranchAddress("Electron_chargedIso", &Electron_chargedIso, &b_Electron_chargedIso);
   fChain->SetBranchAddress("Electron_photonIso", &Electron_photonIso, &b_Electron_photonIso);
   fChain->SetBranchAddress("Electron_neutralIso", &Electron_neutralIso, &b_Electron_neutralIso);
   fChain->SetBranchAddress("Electron_particleIso", &Electron_particleIso, &b_Electron_particleIso);
   fChain->SetBranchAddress("Electron_dbeta", &Electron_dbeta, &b_Electron_dbeta);
   fChain->SetBranchAddress("Electron_MVAID", &Electron_MVAID, &b_Electron_MVAID);
   fChain->SetBranchAddress("Electron_MVAID_new", &Electron_MVAID_new, &b_Electron_MVAID_new);
   fChain->SetBranchAddress("Electron_4Momentum", &Electron_4Momentum, &b_Electron_4Momentum);
   fChain->SetBranchAddress("Electron_Vposition", &Electron_Vposition, &b_Electron_Vposition);
   fChain->SetBranchAddress("Electron_sc_position", &Electron_sc_position, &b_Electron_sc_position);
   fChain->SetBranchAddress("Electron_charge", &Electron_charge, &b_Electron_charge);
   fChain->SetBranchAddress("Electron_HoE", &Electron_HoE, &b_Electron_HoE);
   fChain->SetBranchAddress("Electron_SigmaIetaIeta", &Electron_SigmaIetaIeta, &b_Electron_SigmaIetaIeta);
   fChain->SetBranchAddress("Electron_trkIso", &Electron_trkIso, &b_Electron_trkIso);
   fChain->SetBranchAddress("Electron_ecalIso", &Electron_ecalIso, &b_Electron_ecalIso);
   fChain->SetBranchAddress("Electron_hcalIso", &Electron_hcalIso, &b_Electron_hcalIso);
   fChain->SetBranchAddress("Electron_dEtaIn", &Electron_dEtaIn, &b_Electron_dEtaIn);
   fChain->SetBranchAddress("Electron_dPhiIn", &Electron_dPhiIn, &b_Electron_dPhiIn);
   fChain->SetBranchAddress("Electron_sc_E", &Electron_sc_E, &b_Electron_sc_E);
   fChain->SetBranchAddress("Electron_sc_Eta", &Electron_sc_Eta, &b_Electron_sc_Eta);
   fChain->SetBranchAddress("Electron_missing_hits", &Electron_missing_hits, &b_Electron_missing_hits);
   fChain->SetBranchAddress("Electron_Significance3D", &Electron_Significance3D, &b_Electron_Significance3D);
   fChain->SetBranchAddress("Electron_Value3D", &Electron_Value3D, &b_Electron_Value3D);
   fChain->SetBranchAddress("Electron_Error3D", &Electron_Error3D, &b_Electron_Error3D);
   fChain->SetBranchAddress("Electron_Significance2D", &Electron_Significance2D, &b_Electron_Significance2D);
   fChain->SetBranchAddress("Electron_Value2D", &Electron_Value2D, &b_Electron_Value2D);
   fChain->SetBranchAddress("Electron_Error2D", &Electron_Error2D, &b_Electron_Error2D);
   fChain->SetBranchAddress("rho", &rho, &b_rho);
   fChain->SetBranchAddress("rho44", &rho44, &b_rho44);
   fChain->SetBranchAddress("sigma", &sigma, &b_sigma);
   fChain->SetBranchAddress("sigma44", &sigma44, &b_sigma44);
   fChain->SetBranchAddress("HPSTau_n", &HPSTau_n, &b_HPSTau_n);
   fChain->SetBranchAddress("taupt", &taupt, &b_taupt);
   fChain->SetBranchAddress("HPSTau_4Momentum", &HPSTau_4Momentum, &b_HPSTau_4Momentum);
   fChain->SetBranchAddress("HPSTau_Vposition", &HPSTau_Vposition, &b_HPSTau_Vposition);
   fChain->SetBranchAddress("HPSTau_leadPFChargedHadrCand", &HPSTau_leadPFChargedHadrCand, &b_HPSTau_leadPFChargedHadrCand);
   fChain->SetBranchAddress("HPSTau_leadPFChargedHadrCand_trackRef", &HPSTau_leadPFChargedHadrCand_trackRef, &b_HPSTau_leadPFChargedHadrCand_trackRef);
   fChain->SetBranchAddress("discriminationby_byLooseIsolationMVA2", &discriminationby_byLooseIsolationMVA2, &b_discriminationby_byLooseIsolationMVA2);
   fChain->SetBranchAddress("discriminationby_byMediumIsolationMVA2", &discriminationby_byMediumIsolationMVA2, &b_discriminationby_byMediumIsolationMVA2);
   fChain->SetBranchAddress("discriminationby_byTightIsolationMVA2", &discriminationby_byTightIsolationMVA2, &b_discriminationby_byTightIsolationMVA2);
   fChain->SetBranchAddress("discriminationby_againstElectronLooseMVA3", &discriminationby_againstElectronLooseMVA3, &b_discriminationby_againstElectronLooseMVA3);
   fChain->SetBranchAddress("discriminationby_againstElectronMediumMVA3", &discriminationby_againstElectronMediumMVA3, &b_discriminationby_againstElectronMediumMVA3);
   fChain->SetBranchAddress("discriminationby_againstElectronTightMVA3", &discriminationby_againstElectronTightMVA3, &b_discriminationby_againstElectronTightMVA3);
   fChain->SetBranchAddress("discriminationby_againstElectronVTightMVA3", &discriminationby_againstElectronVTightMVA3, &b_discriminationby_againstElectronVTightMVA3);
   fChain->SetBranchAddress("discriminationby_againstElectronMVA3raw", &discriminationby_againstElectronMVA3raw, &b_discriminationby_againstElectronMVA3raw);
   fChain->SetBranchAddress("discriminationby_againstMuonLoose2", &discriminationby_againstMuonLoose2, &b_discriminationby_againstMuonLoose2);
   fChain->SetBranchAddress("discriminationby_againstMuonMedium2", &discriminationby_againstMuonMedium2, &b_discriminationby_againstMuonMedium2);
   fChain->SetBranchAddress("discriminationby_againstMuonTight2", &discriminationby_againstMuonTight2, &b_discriminationby_againstMuonTight2);
   fChain->SetBranchAddress("discriminationby_againstElectronLoose", &discriminationby_againstElectronLoose, &b_discriminationby_againstElectronLoose);
   fChain->SetBranchAddress("discriminationby_againstElectronMVA", &discriminationby_againstElectronMVA, &b_discriminationby_againstElectronMVA);
   fChain->SetBranchAddress("discriminationby_againstElectronMedium", &discriminationby_againstElectronMedium, &b_discriminationby_againstElectronMedium);
   fChain->SetBranchAddress("discriminationby_againstElectronTight", &discriminationby_againstElectronTight, &b_discriminationby_againstElectronTight);
   fChain->SetBranchAddress("discriminationby_againstMuonLoose", &discriminationby_againstMuonLoose, &b_discriminationby_againstMuonLoose);
   fChain->SetBranchAddress("discriminationby_againstMuonMedium", &discriminationby_againstMuonMedium, &b_discriminationby_againstMuonMedium);
   fChain->SetBranchAddress("discriminationby_againstMuonTight", &discriminationby_againstMuonTight, &b_discriminationby_againstMuonTight);
   fChain->SetBranchAddress("discriminationby_byLooseCombinedIsolationDeltaBetaCorr", &discriminationby_byLooseCombinedIsolationDeltaBetaCorr, &b_discriminationby_byLooseCombinedIsolationDeltaBetaCorr);
   fChain->SetBranchAddress("discriminationby_byLooseCombinedIsolationDeltaBetaCorr3Hits", &discriminationby_byLooseCombinedIsolationDeltaBetaCorr3Hits, &b_discriminationby_byLooseCombinedIsolationDeltaBetaCorr3Hits);
   fChain->SetBranchAddress("discriminationby_byLooseIsolation", &discriminationby_byLooseIsolation, &b_discriminationby_byLooseIsolation);
   fChain->SetBranchAddress("discriminationby_byLooseIsolationDeltaBetaCorr", &discriminationby_byLooseIsolationDeltaBetaCorr, &b_discriminationby_byLooseIsolationDeltaBetaCorr);
   fChain->SetBranchAddress("discriminationby_byLooseIsolationMVA", &discriminationby_byLooseIsolationMVA, &b_discriminationby_byLooseIsolationMVA);
   fChain->SetBranchAddress("discriminationby_byMediumCombinedIsolationDeltaBetaCorr", &discriminationby_byMediumCombinedIsolationDeltaBetaCorr, &b_discriminationby_byMediumCombinedIsolationDeltaBetaCorr);
   fChain->SetBranchAddress("discriminationby_byMediumCombinedIsolationDeltaBetaCorr3Hits", &discriminationby_byMediumCombinedIsolationDeltaBetaCorr3Hits, &b_discriminationby_byMediumCombinedIsolationDeltaBetaCorr3Hits);
   fChain->SetBranchAddress("discriminationby_byMediumIsolation", &discriminationby_byMediumIsolation, &b_discriminationby_byMediumIsolation);
   fChain->SetBranchAddress("discriminationby_byMediumIsolationDeltaBetaCorr", &discriminationby_byMediumIsolationDeltaBetaCorr, &b_discriminationby_byMediumIsolationDeltaBetaCorr);
   fChain->SetBranchAddress("discriminationby_byMediumIsolationMVA", &discriminationby_byMediumIsolationMVA, &b_discriminationby_byMediumIsolationMVA);
   fChain->SetBranchAddress("discriminationby_byTightCombinedIsolationDeltaBetaCorr", &discriminationby_byTightCombinedIsolationDeltaBetaCorr, &b_discriminationby_byTightCombinedIsolationDeltaBetaCorr);
   fChain->SetBranchAddress("discriminationby_byTightCombinedIsolationDeltaBetaCorr3Hits", &discriminationby_byTightCombinedIsolationDeltaBetaCorr3Hits, &b_discriminationby_byTightCombinedIsolationDeltaBetaCorr3Hits);
   fChain->SetBranchAddress("discriminationby_byTightIsolation", &discriminationby_byTightIsolation, &b_discriminationby_byTightIsolation);
   fChain->SetBranchAddress("discriminationby_byTightIsolationDeltaBetaCorr", &discriminationby_byTightIsolationDeltaBetaCorr, &b_discriminationby_byTightIsolationDeltaBetaCorr);
   fChain->SetBranchAddress("discriminationby_byTightIsolationMVA", &discriminationby_byTightIsolationMVA, &b_discriminationby_byTightIsolationMVA);
   fChain->SetBranchAddress("discriminationby_byVLooseCombinedIsolationDeltaBetaCorr", &discriminationby_byVLooseCombinedIsolationDeltaBetaCorr, &b_discriminationby_byVLooseCombinedIsolationDeltaBetaCorr);
   fChain->SetBranchAddress("discriminationby_byVLooseIsolation", &discriminationby_byVLooseIsolation, &b_discriminationby_byVLooseIsolation);
   fChain->SetBranchAddress("discriminationby_byVLooseIsolationDeltaBetaCorr", &discriminationby_byVLooseIsolationDeltaBetaCorr, &b_discriminationby_byVLooseIsolationDeltaBetaCorr);
   fChain->SetBranchAddress("discriminationby_decayModeFinding", &discriminationby_decayModeFinding, &b_discriminationby_decayModeFinding);
   fChain->SetBranchAddress("HPSTau_NewVz", &HPSTau_NewVz, &b_HPSTau_NewVz);
   fChain->SetBranchAddress("HPSTau_charge", &HPSTau_charge, &b_HPSTau_charge);
   fChain->SetBranchAddress("H_Gen_4Momentum", &H_Gen_4Momentum, &b_H_Gen_4Momentum);
   fChain->SetBranchAddress("HMass", &HMass, &b_HMass);
   Notify();
}

Bool_t RecoInfoTree::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void RecoInfoTree::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t RecoInfoTree::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef RecoInfoTree_cxx
