//Problem Statement
//Write a program to find the GCD(greatest common divisor) of two integers
#include <iostream>
#include <cmath>
using namespace std;
int gcd(int m,int n) {
    while(m%n) {
        int x=m%n;
        m=n;
        n=x;
    }
    return n;
}
int main() {
    int m,n;
    cout<<"Enter first number:\n";
    cin>>m;
    cout<<"Enter second number:\n";
    cin>>n;
    cout<<"The greatest common divisor of "<<m<<" and "<<n<<" is:\n";
    cout<<gcd(m,n);
    return 0;
}
