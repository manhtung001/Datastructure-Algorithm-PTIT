#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll BinarySearch(ll a[], ll n, ll x){
	ll dau = 0, cuoi = n-1;
	if(a[n-1] <= x) return n;
	while(dau <= cuoi){
		ll giua = (dau+cuoi)/2;
		if(a[giua] <= x && a[giua+1] > x) return giua+1;
		else if(a[giua] > x && a[giua+1] > x){
			cuoi = giua-1;
			giua = (dau+cuoi)/2;
		}
		else{
			dau = giua + 1;
			giua = (dau+cuoi)/2;
		}
	}
	return -1;
}
main(){
	int t;
	cin >> t;
	while(t--){
		ll n, x;
		cin >> n >> x;
		ll *a = new ll[n+1];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		cout << BinarySearch(a,n,x) << endl;
	}
}

