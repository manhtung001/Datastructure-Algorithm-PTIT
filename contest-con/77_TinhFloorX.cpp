#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll binary_search(ll dau, ll cuoi, ll k, ll a[]){
	ll giua = (dau+cuoi)/2;
	if(a[giua] <= k && a[giua+1] > k) return giua+1;
	else if(a[giua] > k) return binary_search(dau, giua-1, k, a);
	else return binary_search(giua+1, cuoi, k, a);
	return -1;
}
main(){
	int t;
	cin >> t;
	while(t--){
		ll n, k;
		cin >> n >> k;
		ll a[n+1];
		for(int i = 0; i < n; i++) cin >> a[i];
	    if(k < a[0]) cout << -1;
	    else if(k >= a[n-1]) cout << n;
	    else{
	    	cout << binary_search(0,n-1,k,a);
		}
		cout << endl;
	}
}

