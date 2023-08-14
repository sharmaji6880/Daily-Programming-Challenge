//Problem Statement
//Find the number of occurences of a given element in a sorted array
#include <iostream>
#include <vector>
using namespace std;

int count(vector<int> &arr,int x){
    int ans=0;
    for(auto a:arr) {
        if(a==x) {
            ans++;
        }
        else if(a>x) {
            return ans;
        }
    }
    return ans;
}

int main() {
    vector<int> arr={-10,-10,-5,-5,-5,0,1,1,1,2,3,10,10,10};
    int x=10;
    cout<<"Number of occurences of "<<x<<" in arr are:"<<count(arr,x);
    return 0;
}
