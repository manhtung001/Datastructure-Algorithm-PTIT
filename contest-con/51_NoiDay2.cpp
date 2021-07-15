#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
main(){
//	int t;
//	cin >> t;
	priority_queue<ll, vector<ll>, greater<ll> > q;
//	while(t--){
		ll n, x; 
		cin >> n;	    
		for(int i = 0; i < n; i++){
			cin >> x;
			q.push(x);
		}
		ll sum = 0;
		while(q.size() > 1){
			ll first = q.top(); q.pop();
			ll second = q.top(); q.pop();
			sum += (first + second)%mod;
			sum = sum % mod;
			q.push((first+second)%mod);
		}
		while(!q.empty()) q.pop();
		cout << sum //<< endl;
//	}
}

