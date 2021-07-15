#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	ll Q; cin >> Q;
	deque<ll> q;
	while(Q--){
		string s; cin >> s;
		if(s == "PUSHFRONT"){
			int x; cin >> x;
			q.push_front(x);
		}
		if(s == "PRINTFRONT"){
			if(!q.empty()) cout << q.front() << endl;
			else cout << "NONE\n";
		}
		if(s == "POPFRONT"){
			if(!q.empty()) q.pop_front();
		}
		if(s == "PUSHBACK"){
			int x; cin >> x;
			q.push_back(x);
		}
		if(s == "PRINTBACK"){
			if(!q.empty()) cout << q.back() << endl;
			else cout << "NONE\n";
		}
		if(s == "POPBACK"){
			if(!q.empty()) q.pop_back();
		}
	}
}

