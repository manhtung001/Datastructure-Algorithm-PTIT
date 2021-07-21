#include<bits/stdc++.h>
#define max 1001
using namespace std;
int v,e,d,c,chuaxet[max],truoc[max];
vector<int> ke[max];
void BFS(int s){
	queue<int> q;
	q.push(s);
	chuaxet[s]=0;
	while (!q.empty()){
		int u=q.front();
		q.pop();
		for (int i=0;i<ke[u].size();i++){
			if (chuaxet[ke[u][i]]){
				q.push(ke[u][i]);
				truoc[ke[u][i]]=u;
				chuaxet[ke[u][i]]=0;
			}
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;cin>>t;
	while (t--){
		cin>>v>>e>>d>>c;
		for (int i=1;i<=v;i++) ke[i].clear();
		memset(chuaxet,1,sizeof(chuaxet));
		memset(truoc,0 ,sizeof(truoc));
		while (e--){
			int a,b;
			cin>>a>>b;
			ke[a].push_back(b);
		}
		BFS(d);
		if (truoc[c]==0) cout<<-1<<endl;
		else {
			vector<int>res;
			while (c!=d){
				res.push_back(c);
				c=truoc[c];
			}
			res.push_back(d);
			for (int i=res.size()-1;i>=0;i--) cout<<res[i]<<" ";
			cout<<endl;
		}
	}
}
