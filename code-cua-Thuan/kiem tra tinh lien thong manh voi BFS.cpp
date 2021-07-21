#include <bits/stdc++.h>
using namespace std;
vector<int> ke[1001];
int visited[1001];
int v,e;
void DFS(int u){
	visited[u]=1;
	for(int i=0; i<ke[u].size(); i++){
		if(!visited[ke[u][i]])
			DFS(ke[u][i]);
	}
}
int result(){
	int res=0;
	for(int i=1; i<=v; i++){
		if(!visited[i]) {
			res++;
			DFS(i);
		}
	}
	return res;
}
int main(){
	int t; cin>>t;
	while(t--){
		for(int i=1; i<1001; i++) ke[i].clear();
		memset(visited,0,sizeof(visited));
		cin>>v>>e;
		int x,y;
		for(int i=1; i<=e; i++){
			cin>>x>>y;
			ke[x].push_back(y);
		}
		if(result()==1) cout<<"YES"; else cout<<"NO";
		cout<<endl;
	}
}
