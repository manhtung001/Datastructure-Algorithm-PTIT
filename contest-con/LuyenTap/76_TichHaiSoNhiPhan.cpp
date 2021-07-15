#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		int n = s1.size(), m = s2.size();
		ll a1 = 0, a2 = 0;
		for(int i = 0; i < n; i++){
			if(s1[i] == '1') a1 += pow(2, n-1-i);
		}
		for(int i = 0; i < m; i++){
			if(s2[i] == '1') a2 += pow(2, m-1-i);
		}
//		cout << a1 << " " << a2 << " ";
		ll res = a1 * a2;
		cout << res << endl;
	}
}

