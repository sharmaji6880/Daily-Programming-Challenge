//Problem Statement
//Given an integer k and a queue of integers.The task is to reverse the order of the first k elements of the queue,leaving the other elements in the same relative
//order.
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void reverseOrder(queue<int> &q,int k) {
	int n=q.size();
	vector<int> arr;
	while(!q.empty()) {
		arr.push_back(q.front());
		q.pop();
	}
	for(int i=k-1;i>=0;i--) {
		q.push(arr[i]);
	}
	for(int i=k;i<n;i++) {
		q.push(arr[i]);
	}
}

int main() {
	int n,k;
	cout<<"Enter size of the queue:\n";
	cin>>n;
	queue<int> q;
	cout<<"Enter elements of the queue:\n";
	for(int i=0;i<n;i++) {
		int x;
		cin>>x;
		q.push(x);
	}
	cout<<"Enter k:\n";
	cin>>k;
	reverseOrder(q,k);
	vector<int> ans;
	while(!q.empty()) {
		ans.push_back(q.front());
		q.pop();
	}
	cout<<"The queue after reversing the first "<<k<<" elements is:\n";
	for(auto x:ans) {
		cout<<x<<" ";
	}
	
	return 0;
	
}
