#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, x[1001], g[1001];
bool OK = true;
void nhap(){
	cin >> n;
	for(int i = 1; i <= n; i++) x[i] = 0;
}
void in(){
	g[1] = x[1];
	for(int i = 2; i <= n; i++){
		g[i] = x[i-1] xor x[i];
	}
	for(int i = 1; i <= n; i++) cout << g[i];
	cout << " ";
}
void Next_String(){
	ll i = n;
	while(i > 0 && x[i] != 0){
		x[i] = 0;
		i--;
	}
	if(i == 0) OK = false;
	else x[i] = 1;
}
main(){
	int t;
	cin >> t;
	while(t--){
		nhap();
		while(OK){
			in();
			Next_String();
		}
		cout << endl;
		OK = true;
	}
}

