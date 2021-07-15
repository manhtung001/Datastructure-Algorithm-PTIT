#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, x;
bool compare(ll a, ll b){
	return (abs(a-x) < abs(b-x));
}
main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> x;
		ll a[n+1];
		for(int i = 0; i < n; i++) cin >> a[i];
		stable_sort(a,a+n,compare);
		for(int i = 0; i < n; i++) cout << a[i] << " ";
		cout << endl;
	}
}

