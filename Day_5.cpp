//Problem Statement
//Find the number of pairs in an array whose sum is equal to a given target

#include <bits/stdc++.h>
using namespace std;

int returnCount(vector<int> &arr,int k) {
    int count=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++) {
            if(arr[i]+arr[j]==k) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int k=6;
    vector<int> arr={1, 2, 3, 4, 5};
    cout<<returnCount(arr,k);
    return 0;
}
