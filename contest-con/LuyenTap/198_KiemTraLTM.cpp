#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll vs[1001], e[1001];
vector<ll> ke[1001];
void DFS(int u){
	vs[u] = 1;
	for(int i = 0; i < ke[u].size(); i++){
		if(vs[ke[u][i]] == 0){
			DFS(ke[u][i]);
		}
	}
}
main(){
	int t;
	cin >> t;
	while(t--){
		memset(ke,0,sizeof(ke));
		ll V, E, u, v, s, t;
		cin >> V >> E;
		for(int i = 1; i <= E; i++){
			cin >> u >> v;
			ke[u].push_back(v);
		}
		memset(vs,0,sizeof(vs));
		DFS(1);
		ll k = 0;
		for(int i = 1; i <= V; i++){
			if(vs[i] == 1) k++;
			else break;
		}
		if(k == V) cout << "YES\n";
		else cout << "NO\n";
	}
}

