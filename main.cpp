#include <iostream>
#include <cmath>
#include "algo.h"
#include "L2_1.h"

using namespace std;


int main(){

  for(int i =1;i<20;++i){
    for(int j=1;j<=i;++j){
      cout<<pascal(j,i)<<" ";
    }
    cout<<endl;
  }
  return 0;

}
