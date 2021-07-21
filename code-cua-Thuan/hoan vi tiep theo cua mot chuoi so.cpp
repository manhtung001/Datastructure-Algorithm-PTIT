#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main(){
	ll t, x;
	cin >> t;
	while(t--){
		cin >> x;
		string s;
		cin >> s;
		int n = s.size();
		int i = n-2;
		while(s[i] >= s[i+1]) i--;
		if(i >= 0){
			int k = n-1;
			while(s[k] <= s[i]) k--;
			swap(s[i], s[k]);
			int r = i + 1, l = n-1;
			while(r <= l){
			    swap(s[r],s[l]);
				r++;
				l--;	
			}
			cout << x << " " << s << endl;
		}
		else cout << x << " BIGGEST" << endl;
	}
}
