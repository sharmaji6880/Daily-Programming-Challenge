//Problem Statement
//Rearrange all the elements of an array such that all the negative numbers come before the positive numbers
#include <bits/stdc++.h>
using namespace std;

void func(vector<int> &arr) {
    vector<int> a,b; 
    for(auto x:arr) {
        if(x<0) {
            a.push_back(x);
        }
        else {
            b.push_back(x);
        }
    }
    arr={};
    for(auto x:a) {
        arr.push_back(x);
    }
    for(auto x:b) {
        arr.push_back(x);
    }
}
int main() {
    vector<int> arr={0, 0, 0, -1, -2, -3};
    func(arr);
    for(auto x:arr) {
        cout<<x<<" ";
    }
    return 0;
}
