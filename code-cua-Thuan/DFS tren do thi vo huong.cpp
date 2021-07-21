#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll vs[1001], e[1001];
vector<int> ke[1001];
void DFS(int u){
	cout << u << " ";
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
		DFS(x);
		cout << endl;
	}
}
