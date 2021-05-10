#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int b[1001];
		b[0] = s[0] -'0';
		for(int i = 1; i < s.size(); i++){
			if((s[i]-'0') == 0) b[i] = b[i-1];
			else{
				if(b[i-1] == 1) b[i] = 0;
				else b[i] = 1;
			}
		}
		for(int i = 0; i < s.size(); i++) cout << b[i];
		cout << endl;
	}
}

