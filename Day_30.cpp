#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Node {
	int val;
	Node *left;
	Node *right;
	Node():val(0),left(nullptr),right(nullptr){}
	Node(int x):val(x),left(nullptr),right(nullptr){}
};

Node *createTree() {
	int d;
	cin>>d;
	if(d==-1) {
		return NULL;
	}
	Node *root=new Node(d);
	root->left=createTree();
	root->right=createTree();
	return root;
}
int getLevel(Node *root,int key) {
	queue<Node*> q;
	int level=0;
	q.push(root);
	while(!q.empty()) {
		int size=q.size();
		for(int i=0;i<size;i++) {
			Node *ptr=q.front();
			if(ptr->val==key) {
				return level;
			}
			if(ptr->left) {
				q.push(ptr->left);
			}
			if(ptr->right) {
				q.push(ptr->right);
			}
			q.pop();
		}
		level++;
	}
	return -1;
}

int main() {
	cout<<"Enter the nodes of the tree:\n";
	Node *root=createTree();
	int key;
	cout<<"Enter key:\n";
	cin>>key;
	int ans=getLevel(root,key);
	
	if(ans==-1) {
		cout<<"Key not found in the tree\n";
	}else {
		cout<<"Level of "<<key<<" is:"<<ans;
	}
    return 0;
}
