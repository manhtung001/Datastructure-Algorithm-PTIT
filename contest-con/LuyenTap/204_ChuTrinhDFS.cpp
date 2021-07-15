#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll vs[1001];
vector<ll> ke[1001];
int DFS(int u, int p){
	vs[u] = 1;
	for(int i = 0; i < ke[u].size(); i++){
		if(vs[ke[u][i]] == 0){
			if(DFS(ke[u][i], u)) return 1;
		}
		else{
			if(ke[u][i] != p) return 1;
		}
	}
	return 0;
}
int chutrinh(ll V){
	memset(vs,0,sizeof(vs));
	for(int i = 1; i <= V; i++){
		if(vs[i] == 0){
			if (DFS(i,-1)) return 1;
		}
	}
	return 0;
}
main(){
	int t;
	cin >> t;
	while(t--){
		memset(ke,0,sizeof(ke));
		ll u, v, V, E;
		cin >> V >> E;
		for(int i = 0; i < E; i++){
			cin >> u >> v;
			ke[u].push_back(v);
//			ke[v].push_back(u);
		}
		int res = chutrinh(V);
		if(res == 0) cout << "NO\n";
		else cout << "YES\n";
	}
}

