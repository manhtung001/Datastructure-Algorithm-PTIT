#include<bits/stdc++.h>
#define max 1001
using namespace std;
vector<int> ke[max];
int v,e,u,chuaxet[max];
void DFS(int i){
	chuaxet[i]=0;
	cout<<i<<" ";
	for (int j=0;j<ke[i].size();j++){
		if (chuaxet[ke[i][j]]){
			DFS(ke[i][j]);
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;cin>>t;
	while (t--){
		cin>>v>>e>>u;
		for (int i=1;i<=v;i++) ke[i].clear();
		while (e--){
			int a,b;
			cin>>a>>b;
			ke[a].push_back(b);
		}
		memset(chuaxet,1,sizeof(chuaxet));
		DFS(u);
		cout<<endl;
	}
}
