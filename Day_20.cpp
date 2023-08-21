#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

int numberOfWords(vector<string> &arr) {
	stack<string> s;
	for(auto x:arr) {
		if(s.empty()) {
			s.push(x);
		}
		else if(s.top()==x) {
			s.pop();
		}
		else {
			s.push(x);
		}
	}
	return s.size();
}

int main() {
	vector<string> arr = {"apple","apple","banana","banana","cherry","cherry"};
	cout<<"The number of words left in the sequence after pairwise destruction are:\n";
	cout<<numberOfWords(arr);
	return 0;
}

