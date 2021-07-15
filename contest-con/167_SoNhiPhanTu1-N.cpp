#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t; 
	cin >> t;
	while(t--){
		ll n; cin >> n;
		queue<ll> q;
		q.push(1);
		while(n--){
			ll top = q.front(); q.pop();
			cout << top << " ";
			q.push(top*10);
			q.push(top*10 + 1);
		}
		cout << endl;
	}
}

