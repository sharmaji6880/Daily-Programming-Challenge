//Problem Statement
//Write a program to check if a given integer belongs to the Fibonacci sequence or not.
#include <iostream>
using namespace std;

bool isFibonacci(int n) {
	if(n==1) {
		return true;
	}
	int a=1,b=1;
	while(b<n) {
		b=a+b;
		a=b-a;
	}
	if(b==n) {
		return true;
	}
	return false;
}

int main() {
	int n;
	cout<<"Enter the number you want to check for a Fibonacci number:\n";
    cin>>n;
    if(isFibonacci(n)) {
      cout<<n<<" is a member of the Fibonacci sequence";
    }else {
      cout<<n<<" is not a member of the Fibonacci sequence";
    }
	return 0;
}
