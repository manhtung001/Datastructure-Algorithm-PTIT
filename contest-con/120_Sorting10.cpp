#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check[10];
vector<ll> v;
void tong(ll a){
	while(a > 0){
		int t = a % 10; a /= 10;
		if(check[t]){
			v.push_back(t);
			check[t] = false;
		} 
	}
}
main(){
	int t;
	cin >> t;
	while(t--){
		v.clear();
		ll n;
		cin >> n;
		ll a[n+1];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i <= 9; i++) check[i] = true;
		for(int i = 0; i < n; i++) tong(a[i]);
		sort(v.begin(), v.end());
		for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
		cout << endl;
	}
}

