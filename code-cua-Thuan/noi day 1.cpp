#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	priority_queue<ll, vector<ll>, greater<ll> > q;
	while(t--){
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
			sum += first + second;
			q.push(first+second);
		}
		while(!q.empty()) q.pop();
		cout << sum << endl;
	}
}
