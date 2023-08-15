//Problem Statement
//A string consists of opening and closing brackets.Write a program to check whether the string is balanced
#include <iostream>
#include <map>
#include <string>
#include <stack>
using namespace std;

bool isBalanced(string &s) {
    if(s.size()==0) {
        return true;
    }
    if(s[0]==')' || s[0]==']' || s[0]=='}') {
        return false;
    }
    stack<char> st;
    map<char,char> m= {
        {'(',')'},
        {'[',']'},
        {'{','}'}
    };
    for(int i=0;i<(int)s.size();i++) {
        if(s[i]=='(' || s[i]=='[' || s[i]=='{') {
            st.push(s[i]);
        }
        else {
            if(st.empty()) {
                return false;
            }
            if(m[st.top()]==s[i]) {
                st.pop();
            }
        }
    }
    if(st.empty()) {
        return true;
    }
    return false;
}

int main() {
    string s;
    cout<<"Enter the string you want to check for balanced parantheses:\n";
    cin>>s;
    if(isBalanced(s)) {
        cout<<"\nBalanced";
    }
    else {
        cout<<"\nNot Balanced";
    }
    return 0;
}
