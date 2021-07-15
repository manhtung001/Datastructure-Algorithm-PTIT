#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll d[1000001];
struct so{
	ll gtri;
	ll dem;
};
bool cmp(so a, so b){
	if(a.dem > b.dem) return true;
	if(a.dem == b.dem && a.gtri < b.gtri) return true;
	return false;
}
main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		so a[n+1];
		memset(d,0,sizeof(d));
		for(int i = 0; i < n; i++){
			cin >> a[i].gtri;
			d[a[i].gtri]++;
		}
		for(int i = 0; i < n; i++) a[i].dem = d[a[i].gtri];
		sort(a,a+n,cmp);
		for(int i = 0; i < n; i++) cout << a[i].gtri << " ";
		cout << endl;
	}
}

