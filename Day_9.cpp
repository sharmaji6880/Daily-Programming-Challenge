#include <iostream>
#include <string>
using namespace std;

string reverseString(string s,int i) {
    if(i==s.size()/2) {
        return s;
    }
    char temp=s[i];
    s[i]=s[s.size()-1-i];
    s[s.size()-1-i]=temp;
    return reverseString(s,i+1);
}

int main() {
    string s="";
    cout<<"Enter the string you want to reverse:\n";
    getline(cin,s);
    cout<<"Reverse of string is:\n"<<reverseString(s,0);
    return 0;
}