#include "RecoInfoTree.C"
#include "TTree.h"
#include <ctime>
#include <iostream>

using namespace std;
int RecoInfoAnalyzer(){   

  TTree *tree=0;
  RecoInfoTree* recoinfo = new RecoInfoTree(tree);
  recoinfo->Loop();
  return 1;
}
