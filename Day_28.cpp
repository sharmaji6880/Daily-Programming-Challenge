#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool isBipartite(vector<vector<bool>> graph,int src) {
	int v = graph.size();
	src-=1;
	vector<int> color(v);
	for(int i=0;i<v;i++) {
		color[i]=-1;
	}
	queue<int> q;
	color[src]=1;
	q.push(src);
	while(!q.empty()) {
		int x=q.front();
		q.pop();
		if(graph[x][x]) {
			return false;
		}
		for(int y=0;y<v;y++) {
			if(graph[x][y] && color[y]==-1) {
				color[y]=1-color[x];
				q.push(y);
			}else if(graph[x][y] && color[x]==color[y]) {
				return false;
			}
		}
	}
	return true;
	
}

int main() {
	int v,e;
	cout<<"Enter no. of vertices in the graph:\n";
	cin>>v;
	cout<<"Enter no. of edges in the graph\n";
	cin>>e;
	vector<vector<bool>> graph(v,vector<bool>(v,false));
	for(int i=0;i<e;i++) {
		int left,right;
		cout<<"\nEnter left vertex:";
		cin>>left;
		cout<<"Enter right vertex:";
		cin>>right;
		graph[left-1][right-1]=true;
		graph[right-1][left-1]=true;
	}
	int src;
	cout<<"\nEnter source vertex to check for bipartite graph:\n";
	cin>>src;
	if(isBipartite(graph,src)) {
		cout<<"The given graph is bipartite\n";
	}else {
		cout<<"The given graph is not bipartite\n";
	}
	return 0;
}
