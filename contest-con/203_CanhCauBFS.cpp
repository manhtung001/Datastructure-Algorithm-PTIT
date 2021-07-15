#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll V, E, vs[1001];
vector<ll> ke[1001];
vector<pair<ll,ll> > res;
vector<pair<ll,ll> > canh;
void reset(){
	memset(vs,0,sizeof(vs));
	memset(ke,0,sizeof(ke));
}
void BFS(int u){
	vs[u] = 1;
	queue<ll> q;
	q.push(u);
	while(!q.empty()){
		ll v = q.front(); q.pop();
		vs[v] = 1;
		for(int i = 0; i < ke[v].size(); i++){
			if(vs[ke[v][i]] == 0){
				vs[ke[v][i]] = 1;
				q.push(ke[v][i]);
			}
		}
	}
}
int tplt(){
	memset(vs,0,sizeof(vs));
	int k = 0;
	for(int i = 1; i <= V; i++){
		if(vs[i] == 0){
			k++;
			BFS(i);
		}
	}
	return k;
}
void CanhCau(int i, int k, vector<pair<ll,ll> > canh){
	for(int j = 0; j < E; j++){
		if(j != i){
			ke[canh[j].first].push_back(canh[j].second);
			ke[canh[j].second].push_back(canh[j].first);
		}
	}
	int l = tplt();
	if(l > k){
		if(canh[i].first < canh[i].second){
			res.push_back({canh[i].first, canh[i].second});
		}
	}
}
main(){
	int t;
	cin >> t;
	while(t--){
		reset();
		res.clear();
		canh.clear();
		ll u, v;
		cin >> V >> E;
		for(int i = 0; i < E; i++){
			cin >> u >> v;
			ke[u].push_back(v);
			ke[v].push_back(u);
			canh.push_back({u,v});
		}
		int k = tplt();
		for(int i = 0; i < E; i++){
			reset();
			CanhCau(i, k, canh);
		}
		for(int i = 0; i < res.size(); i++){
			cout << res[i].first << " " << res[i].second << " ";
		}
		cout << endl;
	}
}

