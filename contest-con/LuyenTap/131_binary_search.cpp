#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll x, n;
int binary_search(ll dau, ll cuoi, ll a[]){
	if(dau <= cuoi){
		ll giua = (dau+cuoi)/2;
		if(x == a[giua]) return 1;
		else if(x > a[giua]) return binary_search(giua+1, cuoi, a);
		else return binary_search(dau, giua-1, a);
	}
	return -1;
}
main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> x;
		ll a[n+1];
		for(int i = 0; i < n; i++) cin >> a[i];
		int res = binary_search(0,n-1,a);
		cout << res << endl;
	}
}

