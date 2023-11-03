//Problem Statement
//Write a program to find the nth root of m.If nth root of m is not an integer, return -1.
#include <iostream>
#include <cmath>
using namespace std;

int nthRoot(int n,int m) {
	float x=1.0/n;
	float ans=pow(m,x);
	if(ans-floor(ans) == 0) {
		return (int)ans;
	}
	return -1;
}

int main() {
	int m,n;
	cout<<"Enter n:\n";
	cin>>n;
	cout<<"Enter m:\n";
	cin>>m;
	int x=nthRoot(n,m);
	if(x!=-1) {
		cout<<"nth root of "<<m<<" is:\n";
		cout<<x<<endl;
	}
	else {
		cout<<"nth root of "<<m<<" is not an integer\n";
	}
	
	return 0;
}
