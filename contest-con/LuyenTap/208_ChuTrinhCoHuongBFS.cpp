#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> ke[1001];
ll V, E, vs[1001], x[1001];
int DFS(int u){
	if(vs[u] == 0){
		vs[u] = 1;
		x[u] = 1;
		for(int i = 0; i < ke[u].size(); i++){
			if(vs[ke[u][i]] == 0){
				if(DFS(ke[u][i])) return 1;
			}
			else{
				if(x[ke[u][i]] == 1) return 1;
			}
		}
	}
	x[u] = 0;
	return 0;
}
int chutrinh(){
	memset(vs,0,sizeof(vs));
	memset(x,0,sizeof(x));
	for(int i = 1; i <= V; i++){
		if(DFS(i)) return 1;
	}
	return 0;
}
main(){
	int t;
	cin >> t;
	while(t--){
		memset(ke,0,sizeof(ke));
		ll u, v;
		cin >> V >> E;
		for(int i = 1; i <= E; i++){
			cin >> u >> v;
			ke[u].push_back(v);
		}
		int res = chutrinh();
		if(res == 1) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}

