#include <bits/stdc++.h>
using namespace std;

bool areIsomorphic(string &s,string &t) {
	if(s.size()!=t.size()) {
		return false;
	}
	int n=s.size();
	map<char,char> m;
	m[s[0]]=t[0];
	for(int i=1;i<n;i++) {
		if(m.count(s[i])==0) {
			m[s[i]]=t[i];
		}
		else {
			if(m[s[i]]!=t[i]) {
				return false;
			}
		}
	}
	
	return true;
}

int main() {
	string s,t;
	cout<<"Enter first string:\n";
	cin>>s;
	cout<<"Enter second string\n";
	cin>>t;
	if(areIsomorphic(s,t)) {
		cout<<s<<" and "<<t<<" are isomorphic";
	}else {
		cout<<s<<" and "<<t<<" are not isomorphic";
	}
	return 0;
}
