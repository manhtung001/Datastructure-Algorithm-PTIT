#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void xuli(int k, string a, string b){
	while(a.size() < b.size()) a = '0' + a;
	while(a.size() > b.size()) b = '0' + b;
//	cout << a << " " << b;
	int nho = 0;
	string s = "";
	for(int i = a.size()-1; i >= 0; i--){
		int t = a[i]-'0' + b[i]-'0' + nho;
		nho = t / k;
		t = t % k;
		s = char(t+'0') + s;
	}
	if(nho > 0) s = '1' + s;
	cout << s;
}
main(){
	int t;
	cin >> t;
	while(t--){
		string a, b;
		int k;
		cin >> k >> a >> b;
		xuli(k,a,b);
		cout << endl;
	}
}

