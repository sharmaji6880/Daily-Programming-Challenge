//Problem Statement
//Given a string of lowercase alphabets, count all possible substrings(not necessarily distinct) that have exactly k distinct character.
#include <bits/stdc++.h>
using namespace std;

bool hasKDistinct(string s,int k) {
	map<char,int> m;
	for(auto x:s) {
		m[x]++;
	}
	if(m.size()==k) {
		return true;
	}
	return false;
}
vector<string> substringCount(string &s,int k) {
	int n=s.size();
	vector<string> ans;
	for(int i=0;i<n;i++) {
		for(int j=1;j<=n-i;j++) {
			if(hasKDistinct(s.substr(i,j),k)) {
				ans.push_back(s.substr(i,j));
			}
		}
	}
	return ans;
}

int main()  {
	string s;
	int k;
	cout<<"Enter string:\n";
	cin>>s;
	cout<<"Enter k:\n";
	cin>>k;
	vector<string> arr;
	arr=substringCount(s,k);
	cout<<"The number of substrings which have exactly k distinct elements is:\n";
	cout<<arr.size()<<endl;
	cout<<"Possible substrings are:\n{";
	for(int i=0;i<(int)arr.size();i++) {
		if(i==arr.size()-1) {
			cout<<arr[i];
		}
		else {
			cout<<arr[i]<<",";
		}	
	}
	cout<<"}";
	return 0;
	
}
