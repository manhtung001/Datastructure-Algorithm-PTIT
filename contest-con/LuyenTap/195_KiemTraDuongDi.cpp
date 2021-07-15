#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> ke[1001];
ll vs[1001], e[1001];
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
		ll m, n;
		cin >> n >> m;
		for(int i = 1; i <= m; i++){
			ll u, v;
			cin >> u >> v;
			ke[u].push_back(v);
			ke[v].push_back(u);
		}
		ll Q; cin >> Q;
		while(Q--){
			ll x, y;
			cin >> x >> y;
			memset(vs,0,sizeof(vs));
			DFS(x);
			if(vs[y] == 1) cout << "YES\n";
			else cout << "NO\n";
		}
	}
}

