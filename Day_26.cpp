//Problem Statement
//Given a binary tree ,find the largest value in each level.
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Node {
	int val;
	Node *left;
	Node *right;
	Node():val(0),left(nullptr),right(nullptr){}
	Node(int x):val(x),left(nullptr),right(nullptr) {}
	
};
Node* buildTree() {
	int x;
	cin>>x;
	if(x==-1) {
		return NULL;
	}
	Node *node=new Node(x);
	node->left=buildTree();
	node->right=buildTree();
	return node;
}

int main() {
	cout<<"Enter nodes of the tree:\n";
	Node *root=buildTree();
	vector<int> ans;
	queue<Node*> q;
	q.push(root);
	while(!q.empty()) {
		int size=q.size();
		int Max=-1;
		for(int i=0;i<size;i++) {
			if(q.front()->val > Max) {
				Max=q.front()->val;
			}
			if(q.front()->left) {
				q.push(q.front()->left);
			}
			if(q.front()->right) {
				q.push(q.front()->right);
			}
			q.pop();
		}
		ans.push_back(Max);	
	}
	cout<<"Level wise maximum nodes are:\n";
	for(auto x:ans) {
		cout<<x<<" ";
	}
	return 0;
}
