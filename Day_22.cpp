#include <iostream>
#include <string>
#include <map>
#include <stack>
using namespace std;
//Below is the code

int findClosingIndex(string &s,int n) {
	map<char,char> m = {
		{'[',']'},
		{'(',')'},
		{'{','}'}
	};
	stack<char> st;
	for(int i=n;i<(int)s.size();i++) {
		if(i==n) {
			st.push(s[i]);
			continue;
		}
		if(s[i]=='[' || s[i]=='(' || s[i]=='{') {
			st.push(s[i]);
		}else if(s[i]==']' || s[i]==')' || s[i]=='}') {
			st.pop();
		}
		if(st.empty()) {
			return i;
		}
	}
}


int main() {
	string s;
	int n;
	cout<<"Enter the string:\n";
	cin>>s;
	cout<<"Enter starting index:\n";
	cin>>n;
	cout<<"The index of the closing bracket in the string is:\n";
	cout<<findClosingIndex(s,n);
	return 0;
}
