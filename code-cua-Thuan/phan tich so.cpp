#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, k, x[100], dem = 0, OK = true;
void nhap(){
	cin >> n;
	k = 1;
	x[k] = n;
}
void result(){
	cout << " (";
	for(int i = 1; i < k; i++) cout << x[i] << " ";
	cout << x[k] << ") ";
}
void xuli(){
	int i = k, j, r, s, d;
	while(i > 0 && x[i] == 1) i--;
	if(i > 0){
		x[i] = x[i] - 1;
		d = k-i+1;
		s = d % x[i];
		r = d / x[i];
		k = i;
		if(r > 0){
			for(int j = i + 1; j <= i + r; j++) x[j] = x[i];
			k = k + r;
		}
		if(s > 0){
			k = k + 1;
			x[k] = s;
		}
	}
	else OK = false;
}
main(){
	int t;
	cin >> t;
	while(t--){
		nhap();
		OK = true;
		while(OK){
			result();
			xuli();
		}
		cout << endl;
	}
}
