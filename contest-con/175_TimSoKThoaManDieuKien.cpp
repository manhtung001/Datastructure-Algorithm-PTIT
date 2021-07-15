#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll F[100001];
int check(ll n){
	priority_queue<ll> q;
	while(n>0){
		q.push(n%10);
		n /= 10;
	}
	if(q.top() > 5) return 0;
	else{
		while(!q.empty()){
			int top = q.top(); q.pop();
			if(top == q.top() && !q.empty()) return 0;
		}
	}
	return 1;
}

main(){
	for(int i = 1; i <= 100000; i++) F[i] = check(i);
	int t;
	cin >> t;
	while(t--){
		int l, r;
		cin >> l >> r;
		ll dem = 0;
		for(int i = l; i <= r; i++){
			if(F[i] == 1) dem++;
		} 
		cout << dem << endl;
	}
}

