#include<bits/stdc++.h>
using namespace std;

//breadth first search for directed graph


void BFS(vector<vector<int> > adj, vector<int> &visit, int s){
	queue<int> q;
	visit[s] = 1;
	q.push(s);
	while(!q.empty()){
		int f = q.front();
		cout<<f<<" ";
		q.pop();
		for(int i = 0; i < adj[f].size(); i++){
			if(!visit[adj[f][i]]){
				visit[adj[f][i]] = 1;
				q.push(adj[f][i]);
			}
		}
	}
	cout<<endl;
}


int main(){
	int v, e; //for vertices and edges
	cout<<"Please enter number of vertices and edges"<<endl;
	cin>>v>>e;
	vector<vector<int> > adj(v); //adjancency list
	vector<int> visit(v,0); //marking all vertex as unvisited
	int x, y;
	cout<<"Enter the edges as source and destination"<<endl;
	for(int i = 0; i < e; i++){
		cin>>x>>y;
		adj[x].push_back(y);
	}
	int source;
	cout<<"Enter the starting vertex (source)"<<endl;
	cin>>source;
	BFS(adj, visit, source);

}