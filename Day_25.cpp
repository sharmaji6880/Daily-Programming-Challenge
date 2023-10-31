//You are given a binary tree.A binary tree is considered balanced if the heights of the two subtrees of any node never differ by more than 1.
//Write a code to determine if a given binary tree is balanced or not
#include <iostream>.
#include <vector>
using namespace std;

struct Node {
	int val;
	int heightBalance;
	Node *left;
	Node *right;
	Node():val(0),left(nullptr),right(nullptr){}
	Node(int x):val(x),left(nullptr),right(nullptr) {}
	
};

vector<Node*> nodes;

Node *buildTree() {
	int d;
	cin>>d;
	Node *root;
	if(d==-1) {
		return NULL;
	}
	root = new Node(d);
	root->left=buildTree();
	root->right=buildTree();
	return root;
}

int height(Node *root) {
	if(root==nullptr) {
		return 0;
	}
	if(root->left==root->right) {
		return 0;
	}
	return 1+max(height(root->left),height(root->right));
}

void returnNodes(Node *root) {
	if(root==NULL) {
		return;
	}
	nodes.push_back(root);
	returnNodes(root->left);
	returnNodes(root->right);
}

bool isBalanced(Node *root) {
	nodes={};
	returnNodes(root);
	for(auto x:nodes) {
		if(abs(height(x->right)-height(x->left))>1) {
			return false;
		}
	}
	return true;
}




int main() {
	cout<<"Enter the nodes of the tree:\n";
	Node *root=buildTree();
	if(isBalanced(root)) {
		cout<<"The input binary tree is height balanced\n";
	}else {
		cout<<"The input binay tree is not height balanced\n";
	}
	return 0;
}
