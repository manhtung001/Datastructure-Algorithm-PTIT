#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, k, x[1001];
bool OK = true;
void nhap(){
	cin >> n >> k;
	for(int i = 1; i <= n; i++) x[i] = 0;
}
void in(){
	ll sum = 0;
	for(int i = 1; i <= n; i++) sum += x[i];
	if(sum == k){
		for(int i = 1; i <= n; i++) cout << x[i];
		cout << " ";
	}
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

