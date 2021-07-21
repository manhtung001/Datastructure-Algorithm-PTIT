#include<bits/stdc++.h>
#define max 1001
using namespace std;
int v,e,chuaxet[max];
vector<int>ke[max];
void DFS(int s){
	chuaxet[s]=0;
	for (int i=0;i<ke[s].size();i++){
		if (chuaxet[ke[s][i]]){
			DFS(ke[s][i]);
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;cin>>t;
	while (t--){
		cin>>v>>e;
		for (int i=1;i<=v;i++) ke[i].clear();
		while (e--){
			int a,b;
			cin>>a>>b;
			ke[a].push_back(b);
			ke[b].push_back(a);
		}
		
		int q;cin>>q;
		while (q--){
			int d,c;
			cin>>d>>c;
			memset(chuaxet,1,sizeof(chuaxet));
			DFS(d);
			if (chuaxet[c]) cout<<"NO"<<endl;
			else cout<<"YES"<<endl;
		}
	} 
}
