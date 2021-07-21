#include <bits/stdc++.h>
using namespace std;
vector<int> ke[1001];
bool tham[1001];
void BFS(int u){
	queue<int> q;
	q.push(u);
	tham[u]=true;
	while(!q.empty()){
		int s=q.front(); 
		q.pop();
		cout<<s<<" ";
		tham[s]=true;
		for(int i=0; i<ke[s].size(); i++){
		if(!tham[ke[s][i]]){
			
			tham[ke[s][i]]=true;
			q.push(ke[s][i]);
		}
	}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		for(int i=0; i<1001; i++) ke[i].clear();
		memset(tham,false,sizeof(tham));
		int v,e,k;
		cin>>v>>e>>k;
		for(int i=0; i<e; i++){
			int x,y;
			cin>>x>>y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		BFS(k);
		cout<<endl;
	}
}
