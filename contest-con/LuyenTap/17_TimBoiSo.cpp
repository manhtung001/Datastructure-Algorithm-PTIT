#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
/*
ll chuyen_co_so(ll n){
	if(n == 1) return 1;
	else if(n % 2 == 0) return 10 * chuyen_co_so(n/2);
	else (10 * chuyen_co_so(n/2) + 1);
}
main(){
	int t;
	cin >> t;
	while(t--){
		ll n; cin >> n;
		ll a = 1, d = 9;
		while(d % n != 0){
			a++;
			d = 9 * chuyen_co_so(a);
		}
		cout << d << endl;
	}
}*/
main(){
	ll t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		queue<ll> q;
		q.push(9);
		ll top = 0;
		while(!q.empty()){
			top = q.front();
			q.pop();
			if(top % n == 0) break;
			q.push(top*10);
			q.push(top*10+9);
		}
		cout << top << endl;	
	}
}

