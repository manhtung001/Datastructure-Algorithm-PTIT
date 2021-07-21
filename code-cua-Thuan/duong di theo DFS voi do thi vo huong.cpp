#include<bits/stdc++.h>
#define max 1001
using namespace std;
int truoc[max],chuaxet[max]; 
vector <int> ke[max];
void DFS(int u,int v){
	stack<int> stk;
	stk.push(u);
	chuaxet[u]=0;
	while (!stk.empty()){
		int s=stk.top();
		stk.pop();
		for (int i=0;i<ke[s].size();i++){
			if (chuaxet[ke[s][i]]){
				stk.push(s);
				stk.push(ke[s][i]);
				truoc[ke[s][i]]=s;
				chuaxet[ke[s][i]]=0;
				break;
			}
		}
	}
}
void Trace(int u,int v){
	if (!truoc[v]){
		cout<<-1<<endl;
		return;
	}
	else {
		vector<int> res;
		res.push_back(v);
		v=truoc[v];
		while (v!=u){
			res.push_back(v);
			v=truoc[v];
		}
		res.push_back(u);
		reverse(res.begin(),res.end());
		for (int i = 0; i < res.size(); i++) cout<<res[i]<<" ";
		cout<<endl;
	}
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
		DFS(d,c);
		Trace(d,c);
	}
}
