#include <iostream>
#include <vector>
using namespace std;

void findMinMax(vector<int> &arr){
    if(!arr.size()){
        cout<<"The array is empty\n";
        return;
    }
    int Min=arr[0],Max=arr[0];
    for(int i=1;i<(int)arr.size();++i) {
        if(arr[i]<Min){
            Min=arr[i];
        }
        if(arr[i]>Max){
            Max=arr[i];
        }
    }
    cout<<"Smallest element:"<<Min<<endl;
    cout<<"Largest element:"<<Max<<endl;
}

int main() {
    vector<int> arr={9, 3, 8, 5, 6, 2, 1, 7, 4};
    findMinMax(arr);
    return 0;
}
