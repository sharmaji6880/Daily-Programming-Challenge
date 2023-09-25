//Problem Statement
//Given an array and a positive integer k , find the first negative integer for each window(contiguous subarray) of size k.If a window does not contain a negative
//integer,then print 0 for that window.
#include <iostream>
#include <vector>
using namespace std;

vector<int> firstNegative(vector<int> arr,int k) {
	vector<int> ans;
	int n=arr.size();
	int neg=0;
	for(int i=0;i<k;i++) {
		if(arr[i]<0) {
			neg=arr[i];
			break;
		}
	}
	ans.push_back(neg);
	int left=1,right=k;
	while(right!=n) {
		if(arr[left-1]>=0) {
			if(neg<0) {
				ans.push_back(neg);
			}else {
				if(arr[right]<0) {
					neg=arr[right];
				}
				ans.push_back(neg);
			}
			left++;
			right++;
		}else if(arr[left-1]<0) {
			neg=0;
			for(int j=left;j<=right;j++) {
				if(arr[j]<0) {
					neg=arr[j];
					break;
				}
			}
			ans.push_back(neg);
			left++;
			right++;
		}
	}
	return ans;
}

int main() {
	int n,k;
	cout<<"Enter size of the array:\n";
	cin>>n;
	vector<int> arr(n);
	cout<<"Enter the elements of the array:\n";
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	cout<<"Enter k:\n";
	cin>>k;
	vector<int> ans=firstNegative(arr,k);
	cout<<"The first negative for each window of size "<<k<<" are:\n";
	for(auto x:ans) {
		cout<<x<<" ";
	}
	return 0;
}
