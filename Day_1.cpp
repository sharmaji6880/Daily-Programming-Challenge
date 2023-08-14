//Problem Statement
//Find the kth largest element in an array
#include <iostream>
#include <set>
#include <vector>
using namespace std;

void kthLargest(vector<int> &arr,int k){
    set<int> s;
    for(auto x:arr) {
        s.insert(x);
    }
    if(s.size()<k) {
        cout<<"kth largest element doesn't exist";
        return;
    }
    set<int>::iterator it=--s.end();
    int count=1;
    while((count++)!=k) {
        --it;
        
    }
    cout<<"kth largest element is:"<<*(it);
    return;
}

int main() {
    vector<int> arr={-1,-2,3,-10,4,3};
    int k=1;
    kthLargest(arr,k);
    return 0;
}
