#include <iostream>
#include <string>
#include <map>
using namespace std;

bool areAnagrams(string &s1,string &s2){
    if(s1.size()!=s2.size()) {
        return false;
    }
    map<char,int> m1,m2;
    for(auto x:s1) {
        m1[x]++;
    }
    for(auto x:s2){
        m2[x]++;
    }
    if(m1==m2){
        return true;
    }
    return false;
}

int main() {
    string s1,s2;
    cout<<"Enter first string:";
    cin>>s1;
    cout<<"Enter second string:";
    cin>>s2;
    areAnagrams(s1,s2)?cout<<"\nThe strings are anagrams":cout<<"\nThe strings are not anagrams";

    return 0;
}
