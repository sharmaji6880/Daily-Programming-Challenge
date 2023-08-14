#include <iostream>
#include <string>
using namespace std;

int toDecimal(string &s) {
    int ans=0;
    int n=s.size();
    for(int i=0;i<n;i++) {
        switch(s[i]) {
            case 'I':
              if(i==n-1) {
                  ans+=1;
                  break;
              }
              if(s[i+1]=='V' || s[i+1]=='X') {
                  ans+=-1;
              }
              else {
                  ans+=1;
              }
              break;
              
            case 'V':
              ans+=5;
              break;
              
            case 'X':
              if(i==n-1) {
                  ans+=10;
                  break;
              }
              if(s[i+1]=='L' || s[i+1]=='C') {
                  ans+=-10;
              }
              else {
                  ans+=10;
              }
              break;
              
            case 'L':
              ans+=50;
              break;
            
            case 'C':
              if(i==n-1) {
                  ans+=100;
                  break;
              }
              if(s[i+1]=='D' || s[i+1]=='M') {
                  ans+=-100;
              }
              else {
                  ans+=100;
              }
              break;
              
            case 'D':
              ans+=500;
              break;
              
            case 'M':
              ans+=1000;
              break;
              
        }
    }
    return ans;
}

int main() {
    string s;
    cout<<"Enter the roman number you want to convert to decimal:\n";
    cin>>s;
    cout<<"The decimal notation of the roman number "<<s<<" is:\n"<<toDecimal(s);

    return 0;
}
