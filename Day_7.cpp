//Problem Statement
//Rotate the array left N times.Accept N value from the user.
#include <iostream>
#include <vector>
using namespace std;

void rotateLeft(vector<int> &arr,int n) {
    n%=arr.size();
    vector<int> a;
    if(!n) {
        return;
    }
    for(int i=n;i<(int)arr.size();i++) {
        a.push_back(arr[i]);
    }
    for(int i=0;i<=n-1;i++) {
        a.push_back(arr[i]);
    }
    arr=a;
    
}

int main() {
    vector<int> arr={1, 3, 5, 7, 9};
    int n;
    cout<<"Enter the number of left rotations:";
    cin>>n;
    if(n<0) {
        cout<<"\nPlease enter a valid input";
        return 0;
    }
    rotateLeft(arr,n);
    cout<<"The array after "<<n<<" left rotations is:";
    for(int i=0;i<(int)arr.size();++i) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
