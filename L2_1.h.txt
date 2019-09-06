#include <cmath>

string toTer(int n){
    string out="";
    while(n>0){
        out=to_string(n%3)+out;
        n/=3;
    }
    return out;
}

int terToDec(string s){
    int out=0;
    int len=s.length();
    for(int i=0;i<len;++i){
        int digit;
        char c=s[i];
        switch (c) {
        case '0':
            digit=0;
            break;
        case '1':
            digit=1;
            break;
        case '2':
            digit=2;
            break;
        default:
            digit=0;
            break;
        }
        out+=digit*pow(3,len-i-1);
    }
    return out;
}
