#include <iostream>
#include <set>
using namespace std;

struct Node {
	int val;
	Node *left;
	Node *right;
	Node():val(0),left(nullptr),right(nullptr){}
	Node(int x):val(x),left(nullptr),right(nullptr) {}
};

set<int> nodes;

Node *buildTree() {
	int x;
	cin>>x;
	if(x==-1) {
		return NULL;
	}
	Node *root=new Node(x);
	root->left=buildTree();
	root->right=buildTree();
	return root;
}
void traversal(Node *root) {
	if(!root) {
		return;
	}
	nodes.insert(root->val);
	traversal(root->left);
	traversal(root->right);
}
int kthLargest(set<int> nodes,int k) {
	if(k==1) {
		return *(--nodes.end());
	}
	int count=0;
	set<int>::iterator it=(--nodes.end());
	while(count!=k-1) {
		if(*it!=*(--it)) {
			count++;
		}
	}
	return *it;
}

int main() {
	cout<<"Enter the nodes of the Binary Search Tree:\n";
	Node *root=buildTree();
	nodes={};
	traversal(root);
	cout<<"Enter k:\n";
	int k;
	cin>>k;
	cout<<"The "<<k<<"th largest element in the Binary Search Tree is:\n";
	cout<<kthLargest(nodes,k);
	
	return 0;
}
