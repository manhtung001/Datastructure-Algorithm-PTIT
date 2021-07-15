#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		int n, m; cin >> n;
		queue<int> q;
		while(n--){
			cin >> m;
			if(m == 1) cout << q.size() << endl;
			if(m == 2){
				if(q.empty()) cout << "YES\n";
				else cout << "NO\n";
			}
			if(m == 3){
				int x;
				cin >> x;
				q.push(x);
			}
			if(m == 4){
				if(!q.empty()) q.pop();
			}
			if(m == 5){
				if(!q.empty()) cout << q.front();
				else cout << -1;
				cout << endl;
			}
			if(m == 6){
				if(!q.empty()) cout << q.back();
				else cout << -1;
				cout << endl;
			}
		}
	}
}

