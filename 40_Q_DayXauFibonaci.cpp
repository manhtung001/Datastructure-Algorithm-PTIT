#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll F[100005];
void fibo(){
	F[1] = F[2] = 1;
	for(int i = 3; i < 93; i++){
		F[i] = F[i-2] + F[i-1];
	}
}
char stringFibo(ll n, ll i){
	if(n == 1) return 'A';
	if(n == 2) return 'B';
	if(i > F[n-2]) return stringFibo(n-1, i-F[n-2]);
	else return stringFibo(n-2,i);
}
// nhan thay size cua xau stringFibo(n) = F(n);
main(){
	fibo();
	ll t;
	cin >> t;
	while(t--){
		ll n, i;
		cin >> n >> i;
		cout << stringFibo(n,i) << endl;
	}
}

