#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextGreater(vector<int> &arr) {
	stack<int> s;
	vector<int> ans(arr.size());
	for(int i=arr.size()-1;i>=0;i--) {
		while(!s.empty() && s.top()<=arr[i]) {
			s.pop();
		}
		if(s.empty()) {
			ans[i]=-1;
			s.push(arr[i]);
		}
		else {
			ans[i]=s.top();
			s.push(arr[i]);
		}
	}
	return ans;
}

int main() {
	vector<int> arr = {100, 90, 110, 95};
	vector<int> ans=nextGreater(arr);
	cout<<"The array is:\n";
	for(auto x:arr) {
		cout<<x<<" ";
	}
	cout<<endl;
	cout<<"The next greater elements for the given array are:\n";
	for(auto x:ans) {
		cout<<x<<" ";
	}
	return 0;
}
