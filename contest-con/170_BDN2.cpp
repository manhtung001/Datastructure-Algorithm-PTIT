#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		queue<ll> q;
		q.push(1);
		while(1){
			ll top = q.front(); q.pop();
			if(top % n == 0){
				cout << top << endl;
				break;
			}
			else{
				q.push(top*10);
				q.push(top*10 + 1);
			}
		}
	}
}

