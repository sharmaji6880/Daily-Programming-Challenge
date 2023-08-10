#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

char nonRepeating(string &s) {
    map<char,int> m;
    for(int i=0;i<(int)s.size();i++) {
        m[s[i]]++;
    }
    for(int i=0;i<(int)s.size();i++) {
       if(m[s[i]]==1) {
        return s[i];
       }
    }
    return '*';
}

int main() {
    string s;
    cout<<"Enter the string you want to check for the first non-repeating character:\n";
    cin>>s;
    if(nonRepeating(s)=='*') {
        cout<<"There is no non-repeating character";
        return 0;
    }
    cout<<"The first non-repeating character is:\'"<<nonRepeating(s)<<"\'";
    return 0;
}