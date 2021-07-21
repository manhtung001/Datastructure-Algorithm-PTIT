#include<bits/stdc++.h>
#define max 1001
using namespace std;
int truoc[max],chuaxet[max];
vector<int> ke[max];
void BFS(int u,int v){
	queue<int> q;
	q.push(u);chuaxet[u]=0;
	while (!q.empty()){
		int s=q.front();
		q.pop();
//		if (!chuaxet[v]) return;
		for (int i=0;i<ke[s].size();i++){
			if (chuaxet[ke[s][i]]){
				q.push(ke[s][i]);
				chuaxet[ke[s][i]]=0;
				truoc[ke[s][i]]=s;
			}
		}
	}
}
void Trace(int v,int u){
	if (truoc[v]==0) {
		cout<<-1;
		return;
	}
	vector<int> res;
	while (v!=u){
		res.push_back(v);
		v = truoc[v];
	}
	res.push_back(u);
	reverse(res.begin(),res.end());
	for (int i=0;i<res.size();i++) cout<<res[i]<<" ";
	cout<<endl;
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t;cin>>t;
	while (t--){
		int v,e,d,c;
		cin>>v>>e>>d>>c;
		for (int i=0;i<max;i++){
			ke[i].clear();
		}
		while (e--){
			int a,b;cin>>a>>b;
			ke[a].push_back(b);
			ke[b].push_back(a);
		}
	    memset(chuaxet,1,sizeof(chuaxet));
		memset(truoc,0,sizeof(truoc));
		BFS(d,c);
		Trace(c,d);
		cout<<endl;
	}
}
