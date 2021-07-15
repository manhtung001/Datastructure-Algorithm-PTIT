#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll vs[1001], e[1001];
vector<ll> ke[1001];
void DFS(int u){
	vs[u] = 1;
	for(int i = 0; i < ke[u].size(); i++){
		if(vs[ke[u][i]] == 0){
			e[ke[u][i]] = u;
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
        cin >> V >> E >> s >> t;
        for(int i = 1; i <= E; i++){
        	cin >> u >> v;
        	ke[u].push_back(v);
        	ke[v].push_back(u);
		}
		for(int i = 1; i <= V; i++){
			sort(ke[i].begin(), ke[i].end());
		}
		memset(e,0,sizeof(e));
		memset(vs,0,sizeof(vs));
		DFS(s);
		vector<ll> res;
		if(vs[t] == 0) cout << -1 << endl;
		else{
			while(t > 0){
				res.push_back(t);
				t = e[t];
			}
			for(int i = res.size() - 1; i >= 0; i--){
		     	cout << res[i] << " ";
		    }
		     cout << endl;
		}
		
	}
}
