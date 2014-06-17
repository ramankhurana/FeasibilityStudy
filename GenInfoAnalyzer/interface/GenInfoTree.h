//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed May 21 12:17:15 2014 by ROOT version 5.32/00
// from TTree tree/MC information for ZZ background
// found on file: HZZ2l2tau.root
//////////////////////////////////////////////////////////

#ifndef GenInfoTree_h
#define GenInfoTree_h
using namespace std;
#include <TROOT.h>
#include "TH1F.h"
#include <algorithm>
#include <TChain.h>
#include <TFile.h>
#include "TLorentzVector.h"
#include "TVector3.h"
// Header file for the classes stored in the TTree if any.
#include <TClonesArray.h>
#include <vector>

// Fixed size dimensions of array or collections stored in the TTree if any.
const Int_t kMaxrun = 1;
const Int_t kMaxevent = 1;
const Int_t kMaxorbit = 1;
const Int_t kMaxbx = 1;
const Int_t kMaxlumis = 1;
const Int_t kMaxisData = 1;

class GenInfoTree {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   TH1F* eett_pt_[4];
   TH1F* eeet_pt_[4];
   TH1F* eemt_pt_[4];
   TH1F* eeem_pt_[4];

   TH1F* mmtt_pt_[4];
   TH1F* mmet_pt_[4];
   TH1F* mmmt_pt_[4];
   TH1F* mmme_pt_[4];

   TH1F* dr_leptons[4];  //ee/mm, tt, et/mt, em/me
   TH1F* dphi_leptons[4];
   
   TH1F* dr_Z[4]; // ee_tt_beforedecay, ee_tt, ee_et/mt, ee_em/me 
   TH1F* dphi_Z[4];

   TH1F* MZ2[4];

   TH1F* M2l2tau[4];
   
   enum decaymode {junkType=-1,             otherType=0,
			 eemumu=1,                mumumumu=2,
			 eeee=3,
			 
			 eetauhtauh=4,            eetauetauh=5,
			 eetaumutauh=6,           eetauetaumu=7,
			 eetauetaue=8,            eetaumutaumu=9,
			 mumutauhtauh=10,          mumutauetauh=11,
			 mumutaumutauh=12,        mumutauetaumu=13,
			 tauetauemumu=14,         mumutaumutaumu=15,

			 tauetauetauhtauh=16,     tauetauetauetauh=17,
			 tauetauetaumutauh=18,    tauetauetauetaumu=19,
			 tauetauetauetaue=20,     tauetauetaumutaumu=21,

			 taumutaumutauhtauh=22,    taumutaumutauetauh=23,
			 taumutaumutaumutauh=24,  taumutaumutauetaumu=25,
			 taumutaumutaumutaumu=26,

			 tauetaumutauhtauh=27,    tauetauhtauhtauh=28,
			 taumutauhtauhtauh=29,    tauhtauhtauhtauh=30,
			 eetauetau=31,            eetaumutau=32,
			 eetauhtau=33,            tauetauetauetau=34,
			 tauetauetaumutau=35,     tauetauetauhtau=36,
			 mumutauetau=37,          mumutaumutau=38,
			 mumutauhtau=39,          taumutaumutauetau=40,
			 taumutaumutaumutau=41,   taumutaumutauhtau=42,
			 tauetaumutauhtau=43,     tauetauhtauhtau=44,
			 taumutauhtauhtau=45,     tauhtauhtauhtau=46,
			 eetautau=47,             tauetauetautau=48,
			 mumutautau=49,           taumutaumutautau=50,
			 tauetaumutautau=51,      tauetauhtautau=52,
			 taumutauhtautau=53,      tauhtauhtautau=54,
			 tauetautautau=55,        taumutautautau=56,
			 tauhtautautau=57,        tautautautau=58,
			 eenunu=59,               mumununu=60,
			 tautaununu=61,           nunununu=62,
			 eehh=63,                 mumuhh=64,
			 tautauhh=65,             nunuhh=66,
			 hhhh=67};

   // Declaration of leaf types
   TClonesArray    *elemom;
   TClonesArray    *mumom;
   TClonesArray    *taumom;
   TClonesArray    *tauemom;
   TClonesArray    *taumumom;
   TClonesArray    *tauhadmom;
   Int_t           run_;
   Int_t           event_;
   Int_t           orbit_;
   Int_t           bx_;
   Int_t           lumis_;
   Int_t           isData_;
   ULong64_t       genbits;
   ULong64_t       GenBitAfterZMassCut;
   ULong64_t       GenBitAfterEtaCut;
   vector<double>  *ZMass;
   vector<double>  *electronPt;
   vector<double>  *muonPt;
   vector<double>  *tauPt;
   vector<double>  *electronEta;
   vector<double>  *muonEta;
   vector<double>  *tauEta;

   // List of branches
   TBranch        *b_elemom;   //!
   TBranch        *b_mumom;   //!
   TBranch        *b_taumom;   //!
   TBranch        *b_tauemom;   //!
   TBranch        *b_taumumom;   //!
   TBranch        *b_tauhadmom;   //!
   TBranch        *b_run_;   //!
   TBranch        *b_event_;   //!
   TBranch        *b_orbit_;   //!
   TBranch        *b_bx_;   //!
   TBranch        *b_lumis_;   //!
   TBranch        *b_isData_;   //!
   TBranch        *b_genbits;   //!
   TBranch        *b_GenBitAfterZMassCut;   //!
   TBranch        *b_GenBitAfterEtaCut;   //!
   TBranch        *b_ZMass;   //!
   TBranch        *b_electronPt;   //!
   TBranch        *b_muonPt;   //!
   TBranch        *b_tauPt;   //!
   TBranch        *b_electronEta;   //!
   TBranch        *b_muonEta;   //!
   TBranch        *b_tauEta;   //!

   GenInfoTree(TTree *tree=0);
   virtual ~GenInfoTree();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
   void eettFiller();
   void eeetFiller();
   void eemtFiller();
   void eeemFiller();

   void mmttFiller();
   void mmetFiller();
   void mmmtFiller();
   void mmmeFiller();
   void BookHistograms();
   void WriteHistograms();
};

#endif

#ifdef GenInfoTree_cxx
GenInfoTree::GenInfoTree(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("Merged_GluGluToHToZZTo4L_M-600_8TeV-minloHJJ-pythia6-tauola.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("Merged_GluGluToHToZZTo4L_M-600_8TeV-minloHJJ-pythia6-tauola.root");
      }
      f->GetObject("tree",tree);

   }
   Init(tree);
}

GenInfoTree::~GenInfoTree()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t GenInfoTree::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t GenInfoTree::LoadTree(Long64_t entry)
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

void GenInfoTree::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   elemom = 0;
   mumom = 0;
   taumom = 0;
   tauemom = 0;
   taumumom = 0;
   tauhadmom = 0;
   ZMass = 0;
   electronPt = 0;
   muonPt = 0;
   tauPt = 0;
   electronEta = 0;
   muonEta = 0;
   tauEta = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("elemom", &elemom, &b_elemom);
   fChain->SetBranchAddress("mumom", &mumom, &b_mumom);
   fChain->SetBranchAddress("taumom", &taumom, &b_taumom);
   fChain->SetBranchAddress("tauemom", &tauemom, &b_tauemom);
   fChain->SetBranchAddress("taumumom", &taumumom, &b_taumumom);
   fChain->SetBranchAddress("tauhadmom", &tauhadmom, &b_tauhadmom);
   fChain->SetBranchAddress("run_", &run_, &b_run_);
   fChain->SetBranchAddress("event_", &event_, &b_event_);
   fChain->SetBranchAddress("orbit_", &orbit_, &b_orbit_);
   fChain->SetBranchAddress("bx_", &bx_, &b_bx_);
   fChain->SetBranchAddress("lumis_", &lumis_, &b_lumis_);
   fChain->SetBranchAddress("isData_", &isData_, &b_isData_);
   fChain->SetBranchAddress("genbits", &genbits, &b_genbits);
   fChain->SetBranchAddress("GenBitAfterZMassCut", &GenBitAfterZMassCut, &b_GenBitAfterZMassCut);
   fChain->SetBranchAddress("GenBitAfterEtaCut", &GenBitAfterEtaCut, &b_GenBitAfterEtaCut);
   fChain->SetBranchAddress("ZMass", &ZMass, &b_ZMass);
   fChain->SetBranchAddress("electronPt", &electronPt, &b_electronPt);
   fChain->SetBranchAddress("muonPt", &muonPt, &b_muonPt);
   fChain->SetBranchAddress("tauPt", &tauPt, &b_tauPt);
   fChain->SetBranchAddress("electronEta", &electronEta, &b_electronEta);
   fChain->SetBranchAddress("muonEta", &muonEta, &b_muonEta);
   fChain->SetBranchAddress("tauEta", &tauEta, &b_tauEta);
   Notify();
}

Bool_t GenInfoTree::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void GenInfoTree::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t GenInfoTree::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef GenInfoTree_cxx
