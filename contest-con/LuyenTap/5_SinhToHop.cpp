#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, k;
ll x[10000001];
bool OK;
void nhap(){
	cin >> n >> k;
	for(int i = 1; i <= k; i++) x[i] = i;
}
void in(){
	for(int i = 1; i <= k; i++) cout << x[i];
	cout << " ";
}
void Next_Combination(){
	ll i = k;
	while(i > 0 && x[i] == n - k + i) i--;
	if(i > 0){
		x[i] = x[i] + 1;
	    for(int j = i+1; j <= n; j++){
	    	x[j] = x[j-1] + 1;
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
			in();
			Next_Combination();
		}
		cout << endl;
	}
}

