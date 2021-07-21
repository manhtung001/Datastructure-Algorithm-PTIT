#include <bits/stdc++.h>
using namespace std;
vector<int> ke[1001];
int visited[1001];
int v,e;
void BFS(int u){
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int s=q.front(); 
		q.pop();
		visited[s]=true;
		for(int i=0; i<ke[s].size(); i++)
        {
		if(!visited[ke[s][i]]){
			visited[ke[s][i]]=true;
			q.push(ke[s][i]);
		}
    }
}
}
int result(){
	int res=0;
	for(int i=1; i<=v; i++){
		if(!visited[i]) {
			res++;
			BFS(i);
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
			ke[y].push_back(x);
		}
		
		cout<<result()<<endl;
	}
}
