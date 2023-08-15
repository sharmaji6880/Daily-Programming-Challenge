//Problem Statement
//Reverse a string word by word
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string reverseWords(string &s) {
    vector<string> ans;
    int prev=0;
    for(int i=0;i<(int)s.size();++i) {
        if(i==s.size()-1) {
            ans.push_back(s.substr(prev,s.size()));
            break;
        }
        if(s[i]==' ') {
            ans.push_back(s.substr(prev,i-prev));
            prev=i+1;
        }
    }
    s="";
    for(int i=(int)ans.size()-1;i>=0;--i) {
        s+=ans[i];
        s+=" ";
    }
    return s;
    
}

int main() {
    string s;
    cout<<"Enter the string you want to reverse word by word:\n";
    getline(cin,s);
    cout<<"The string reversed word by word is:\n"<<reverseWords(s);
    return 0;
}
