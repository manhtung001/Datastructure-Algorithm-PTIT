#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string s;
ll y[10001], x[10001]; // x la binary, y la gray
void nhap(){
	cin >> s;
	for(int i = 0; i < s.length(); i++){
		x[i] = s[i] - '0';
	}
}
void resul(){
	for(int i = s.length() - 1; i > 0; i--){
		y[i] = (x[i] xor x[i-1]);
	}
	y[0] = x[0] ;
	for(int i = 0; i < s.length(); i++){
		cout << y[i];
	}
	cout << " ";
}
main(){
	ll t;
	cin >> t;
	while(t--){
		nhap();
		resul();
		cout << endl;
	}
}
