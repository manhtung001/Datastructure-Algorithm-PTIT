#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, x[10001], y[10001];
void resul(){
	for(int i = n; i > 1; i--){
		y[i] = (x[i] xor x[i-1]);
	}
	y[1] = x[1];
	for(int i = 1; i <= n; i++){
		cout << y[i];
	}
	cout << " ";
}
void Try(int i){
	for(int j = 0; j <= 1; j++){
		x[i] = j;
		if(i == n) resul();
		else Try(i+1);
	}
}
main(){
	ll t;
	cin >> t;
	while(t--){
		cin >> n;
		Try(1);
	    cout << endl;
	}
	
}
