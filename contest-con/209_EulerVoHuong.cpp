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
int bac(ll V){
	int dem1 = 0, dem2 = 0;
	for(int i = 1; i <= V; i++){
		if(ke[i].size() % 2 == 0) dem1++;
		else dem2++;
	}
	if(dem1 == V) return 2;
	else if((dem2 == 1 || dem2 == 2)) return 1;
	return 0;
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
			ke[v].push_back(u);
		}
		memset(vs,0,sizeof(vs));
		DFS(1);
		bool check = true;
		for(int i = 1; i <= V; i++){
			if(vs[i] == 0){
				check = false; 
				break;
			}
		}
		int deg = bac(v);
		if(check == true && deg == 2) cout << 2;
		else if(check == true && deg == 1) cout << 1;
		else cout << 0;
		cout << endl;
	}
}

