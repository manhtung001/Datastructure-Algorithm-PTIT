#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		ll V, E;
		cin >> V >> E;
		ll vao[1001]={}, ra[1001]={};
		for(int i = 1; i <= E; i++){
			ll u, v;
			cin >> u >> v;
			vao[u]++;
			ra[v]++;
		}
		ll dem1 = 0, dem2 = 0;
		for(int i = 1; i <= V; i++){
			if(vao[i] == ra[i]) dem1++;
			else dem2++;
		}
		if(dem1 == V) cout << 1;
		else cout << 0;
		cout << endl;
	}
}

