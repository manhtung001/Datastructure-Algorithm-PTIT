#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		int k; cin >> k;
		string s;
		cin >> s;
		int d[27] = {};
		for(int i = 0; i < s.size(); i++) d[s[i]-'A']++;
	    priority_queue<int> q;
	    for(int i = 0; i <= 26; i++){
	    	if(d[i] != 0) q.push(d[i]);
		}
		while(k > 0){
			int top = q.top(); q.pop();
			top = top-1;  q.push(top);
			k--;			
		}
		ll sum = 0;
		while(!q.empty()){
			int top = q.top(); q.pop();
			sum += top*top;
		}
		cout << sum << endl;
	}
}

