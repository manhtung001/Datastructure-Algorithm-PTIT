#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void in(ll a[], ll n){
	cout << "[";
	for(int i = 1; i < n; i++) cout << a[i] << " ";
	cout << a[n] << "]";
	cout << endl;
}
void xuli(ll a[], ll n){
	ll b[101];
	if(n > 1){
		for(int i = 1; i < n; i++){
		    int x = a[i] + a[i+1];
		    b[i] = x;
	    }
	    in(b,n-1);
	    xuli(b, n-1);
	}
}
main(){
	int t;
	cin >> t;
	while(t--){
		ll a[101], b[101], n;
		cin >> n;
		for(int i = 1; i <= n; i++) cin >> a[i];
		in(a,n);
		xuli(a,n);
	}
}

