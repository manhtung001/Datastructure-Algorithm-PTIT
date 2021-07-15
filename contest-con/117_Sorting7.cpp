#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll a[n+1], b[n+1];
		memset(b,0,sizeof(b));
		for(int i = 0; i < n; i++){
			cin >> a[i];
			b[i] = a[i];
		} 
		sort(b,b+n);
		ll dau = 0, cuoi = n-1;
		while(dau < n && a[dau] == b[dau]) dau++;
		while(cuoi >= 0 && a[cuoi] == b[cuoi]) cuoi--;
		if(dau < cuoi) cout << dau+1 << " " << cuoi+1;
		else cout << cuoi + 1 << " " << dau+1;
		cout << endl;
	}
}

