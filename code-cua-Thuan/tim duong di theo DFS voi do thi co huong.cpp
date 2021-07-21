#include<bits/stdc++.h>
#define max 1001
using namespace std;
int v,e,s,d,chuaxet[max],truoc[max];
vector<int> ke[max];
void DFS(int s){
	stack<int> stk;
	stk.push(s);
	chuaxet[s]=0;
	while (!stk.empty()){
		int u=stk.top();
		stk.pop();
		for (int i=0;i<ke[u].size();i++){
			if (chuaxet[ke[u][i]]){
				stk.push(u);
				truoc[ke[u][i]]=u;
				stk.push(ke[u][i]);
				chuaxet[ke[u][i]]=0;
				break;
			}
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;cin>>t;
	while (t--){
		cin>>v>>e>>s>>d;
		for (int i=1;i<=v;i++) ke[i].clear();
		memset(chuaxet,1,sizeof(chuaxet));
		memset(truoc,0,sizeof(truoc));
		while (e--){
			int a,b;
			cin>>a>>b;
			ke[a].push_back(b);
		}
		DFS(s);
		if (truoc[d]==0) cout<<-1<<endl;
		else {
			vector<int>res;
			int tmp=d;
			while (tmp!=s){
				res.push_back(tmp);
				tmp=truoc[tmp];
			}
			res.push_back(s);
			for (int i=res.size()-1;i>=0;i--) cout<<res[i]<<" ";
			cout<<endl;
		}
	}
}
