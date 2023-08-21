//Problem Statement
//Given a stack.Write a program to delete the mid element without using any additional data structure
//In this approach, the "removeMiddle" function only uses an extra stack to keep track of the popped elements and uses no additional data structure
//I have used vectors but just for the sake of printing the stacks which requires either an additional data structure or recursion
#include <iostream>
#include <stack>
#include <vector>
using namespace std;


void removeMiddle(stack<int> &s) {
	stack<int> s1;
	int n=s.size()/2;
	while(n--) {
		s1.push(s.top());
		s.pop();
	}
	s.pop();
	while(!s1.empty()) {
		s.push(s1.top());
		s1.pop();
	}	
}

int main() {
	stack<int> s;
	int n;
	cout<<"Enter size of the stack:\n";
	cin>>n;
	cout<<"Enter stack elements:\n";
	while(n--) {
		int x;
		cin>>x;
		s.push(x);
	}
	stack<int> s1=s;
	vector<int> arr;
	while(!s1.empty()) {
		arr.push_back(s1.top());
		s1.pop();
	}
	cout<<"The stack elements are:\n";
	for(int i=arr.size()-1;i>=0;i--) {
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	removeMiddle(s);
	s1=s;
	arr.clear();
	while(!s1.empty()) {
		arr.push_back(s1.top());
		s1.pop();
	}
	cout<<"The stack elements after deleting the mid element are:\n";
	for(int i=arr.size()-1;i>=0;i--) {
		cout<<arr[i]<<" ";
	}
	
	return 0;
	
}
