#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll BinarySearch(ll a[], ll b[], ll n){
	ll dau = 0, cuoi = n-2;
	while(dau <= cuoi){
		ll giua = (dau+cuoi)/2;
		if(a[giua] != b[giua] && a[giua-1] == b[giua-1]) return giua+1;
		else if(a[giua] != b[giua] && a[giua-1] != b[giua-1]){
			cuoi = giua-1;
			giua = (dau+cuoi)/2;
		}
		else{
			dau = giua+1;
			giua = (dau+cuoi)/2;
		}
	}
}
main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll *a = new ll[n+1];
		ll *b = new ll[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n-1; i++) cin >> b[i];
		cout << BinarySearch(a,b,n) << endl;
	}
}

