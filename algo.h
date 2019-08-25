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

bool isLeap(int year){
    if(year%4==0&&year%100!=0||year%400==0){
        return true;
    }else return false;
}

int days(int year, int month){
    switch (month) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    case 2:
        return 28+isLeap(year);
    }
    return 0;
}

