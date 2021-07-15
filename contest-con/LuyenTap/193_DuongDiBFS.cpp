#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll vs[1001], e[1001];
vector<ll> ke[1001];
void BFS(int u){
	vs[u] = 1;
	queue<ll> q;
	q.push(u);
	while(!q.empty()){
		int v = q.front(); q.pop();
		vs[v] = 1;
		for(int i = 0; i < ke[v].size(); i++){
			if(vs[ke[v][i]] == 0){
				vs[ke[v][i]] = 1;
				e[ke[v][i]] = v;
				q.push(ke[v][i]);
			}
		}
	}
}
main(){
	int t;
	cin >> t;
	while(t--){
		memset(ke,0,sizeof(ke));
		ll V, E, u, v, s, t;
		cin >> V >> E >> s >> t;
		for(int i = 1; i <= E; i++){
			cin >> u >> v;
			ke[u].push_back(v);
			ke[v].push_back(u);
		}
		memset(vs,0,sizeof(vs));
		memset(e,0,sizeof(e));
		BFS(s);
		if(vs[t] == 0) cout << -1;
		else{
			vector<ll> res;
			while(t > 0){
				res.push_back(t);
				t = e[t];
			}
			for(int i = res.size()-1; i >= 0; i--){
				cout << res[i] << " ";
			}
		}
		cout << endl;
	}
}

