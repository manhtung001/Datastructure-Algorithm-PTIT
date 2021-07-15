#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	ll Q;
	cin >> Q;
	queue<int> q;
	while(Q--){
		string s;
		cin >> s;
		if(s == "PUSH"){
			int x; cin >> x;
			q.push(x);
		}
		if(s == "PRINTFRONT"){
			if(q.empty()) cout << "NONE\n";
			else cout << q.front() << endl;
		}
		if(s == "POP"){
			if(!q.empty()) q.pop();
		}
	}
}

