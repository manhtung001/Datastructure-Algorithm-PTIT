#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> ke[1001];
ll vs[1001], e[1001];
void DFS(int u){
	vs[u] = 1;
	for(int i = 0; i < ke[u].size(); i++){
		if(vs[ke[u][i]] == 0){
			vs[ke[u][i]] = 1;
			DFS(ke[u][i]);
		}
	}
}
main(){
	int t;
	cin >> t;
	while(t--){
		memset(ke,0,sizeof(ke));
		ll N, u, v;
		cin >> N;
		for(int i = 1; i <= N-1; i++){
			cin >> u >> v;
			ke[u].push_back(v);
			ke[v].push_back(u);
		}
		memset(vs,0,sizeof(vs));
		DFS(1);
		bool check = true;
		for(int i = 1; i <= N; i++){
			if(vs[i] == 0){
				check = false;
				break;
			}
		}
		if(check) cout << "YES\n";
		else cout << "NO\n";
	}
}

