#include "src/GenInfoTree.C"
#include "TTree.h"
#include <ctime>
#include <iostream>

using namespace std;
int main(){   

  TTree *tree=0;
  GenInfoTree* geninfo = new GenInfoTree(tree);
  geninfo->Loop();
  return 1;
}
