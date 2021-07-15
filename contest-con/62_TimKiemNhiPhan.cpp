#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[1000001];
ll Binary_Search(ll dau, ll cuoi, ll k){
	if(dau <= cuoi){
		ll giua = (dau+cuoi)/2;
		if(k == a[giua]) return giua;
		else if(k < a[giua]) return Binary_Search(dau, giua-1, k);
		else return Binary_Search(giua+1, cuoi, k);
	}
	return -1;
}
main(){
	int t;
	cin >> t;
	while(t--){
		ll n, k;
		cin >> n >> k;
		for(int i = 1; i <= n; i++) cin >> a[i];
		int res = Binary_Search(1,n,k);
		if(res == -1) cout << "NO";
		else cout << res;
		cout << endl;
	}
}

