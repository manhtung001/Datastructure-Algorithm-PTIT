#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		ll k; cin >> k;
		string s; cin >> s;
		priority_queue<ll> q;
		ll d[27] = {0};
 		for(int i = 0; i < s.size(); i++){
			d[s[i]-'A']++;
		}
		for(int i = 0; i < 27; i++){
			if(d[i] > 0) q.push(d[i]);
		}
		while(k > 0 && !q.empty()){
			ll top = q.top(); q.pop();
			top--;
			q.push(top);
			k--;
		}
		ll res = 0;
		while(!q.empty()){
			ll top = q.top(); q.pop();
			res += top*top;
		}
		cout << res << endl;
	}
}

