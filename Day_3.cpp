#include <iostream>
#include <vector>
using namespace std;

void printSubArray(vector<int> &arr,int target){
    int left=-1,right=-1;
    int flag=0;
    for(int i=0;i<(int)arr.size();i++) {
        if(arr[i]==target) {
            left=i;
            right=i;
            break;
        }
        int sum=0;
        for(int j=i;j<(int)arr.size();j++) {
            sum+=arr[j];
            if(sum>target) {
                break;
            }
            else if(sum==target) {
                left=i;
                right=j;
                flag=1;
                break;
            }
        }
        if(flag) {
            break;
        }
    }
    if(left==-1){
        cout<<"No such subarray exists";
        return;
    }
    cout<<"The subarray is:[";
    for(int c=left;c<=right;c++) {
        if(c==right) {
            cout<<arr[c]<<"]";
            break;
        }
        cout<<arr[c]<<",";
    }
}

int main() {
    vector<int> arr={1, 2, 3, 4, 5};
    int target=7;
    printSubArray(arr,target);
    return 0;
}
