#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(unsigned int n){
  if(n==1||(n%2==0&&n!=2)){
    return false;
  }else if(n==2){
    return true;
  }else{
    for(unsigned int i=3;i<=sqrt(n);i=i+2){
      if(n%i==0){
        return false;
      }
    }
  return true;
  }
}

int fib(int n){
  return n<=2?1:fib(n-1)+fib(n-2);
}

double pascal(int x,int y){
  if(x==1&&y==1){
    return 1;
  }else if(x<1||y<1||x>y){
    return 0;
  }else{
    return pascal(x-1,y-1)+pascal(x,y-1);
  }
}

int main(){

  for(int i =1;i<20;++i){
    for(int j=1;j<=i;++j){
      cout<<pascal(j,i)<<" ";
    }
    cout<<endl;
  }
  return 0;

}
