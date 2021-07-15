#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[1001][1001];
main(){
	memset(a,0,sizeof(a));
	int n;
	cin >> n;
	cin.ignore();
	for(int t = 1; t <= n; t++){
		string s;
		getline(cin,s);
		for(int i = 0; i < s.size(); i++){
			ll u = 0;
			while(i < s.size() && s[i] != ' '){
				u = u*10 + (s[i]-'0');
				i++;
			}
			a[u][t] = a[t][u] = 1;
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

