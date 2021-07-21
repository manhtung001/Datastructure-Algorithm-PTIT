#include<bits/stdc++.h>
#define max 1001
using namespace std;
int v,e;
vector<int>ke[max];
int duongdi_euler(){
	int d=0;
	for (int i=1;i<=v;i++)
		if (ke[i].size()%2!=0) d++;
	if (d==2) return 1;
	else return 0;
} 
int chutrinh_euler(){
	for (int i=1;i<=v;i++){
		if (ke[i].size()%2!=0) return 0;
	}
	return 1;
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t;cin>>t;
	while (t--){
		cin >> v >> e;
		for (int i = 1; i <= v; i++) ke[i].clear();
		while (e--){
			int a,b;cin >> a >> b;
			ke[a].push_back(b);
			ke[b].push_back(a);
		}
		if (chutrinh_euler()) cout << 2 << endl;
		else if (duongdi_euler()) cout << 1 << endl;
		else cout << 0 << endl;
	}
}
