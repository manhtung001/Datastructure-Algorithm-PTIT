#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> ke[1001];
ll vs[1001], e[1001];
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
		ll V, E, u, v;
		cin >> V >> E;
		for(int i = 1; i <= E; i++){
			cin >> u >> v;
			ke[u].push_back(v);
			ke[v].push_back(u);
		}
		memset(vs,0,sizeof(vs));
		int k = 0;
		for(int i = 1; i <= V; i++){
			if(vs[i] == 0){
				k++;
				BFS(i);
			}
		}
		for(int i = 1; i <= V; i++){
			memset(vs,0,sizeof(vs));
			vs[i] = 1;
			ll l = 0;
			for(int j = 1; j <= V; j++){
				if(vs[j] == 0){
					l++;
					BFS(j);
				}
			}
			if(l > k) cout << i << " ";
		}
		cout << endl;
	}
}

