#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll vs[1001], e[1001];
vector<ll> ke[1001];
void BFS(int u){
	vs[u] = 0;
	queue<ll> q;
	q.push(u);
	while(!q.empty()){
		int v = q.front(); q.pop();
		cout << v << " ";
		vs[v] = 1;
		for(int i = 0; i < ke[v].size(); i++){
			if(vs[ke[v][i]] == 0){
				vs[ke[v][i]] = 1;
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
		ll V, E, u, v, x;
        cin >> V >> E >> x;
        for(int i = 1; i <= E; i++){
        	cin >> u >> v;
        	ke[u].push_back(v);
        	ke[v].push_back(u);
		}
		for(int i = 1; i <= V; i++){
			sort(ke[i].begin(), ke[i].end());
		}
		memset(vs,0,sizeof(vs));
		BFS(x);
		cout << endl;
	}
}


