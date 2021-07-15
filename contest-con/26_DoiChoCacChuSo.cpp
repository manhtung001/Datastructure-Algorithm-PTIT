#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		int k; cin >> k;
		string s; cin >> s;
		for(int i = 0; i < s.size()-1; i++){
			if(k == 0) break;
			char max = s[s.size()-1];
			int vt = s.size()-1;
			for(int j = s.size()-1; j > i; j--){
				if(s[j] > max){
					max = s[j];
					vt = j;
				}
			}
			if(max > s[i]){
				swap(s[i],s[vt]);
				k--;
			}
		}
		cout << s << endl;
	}
}

