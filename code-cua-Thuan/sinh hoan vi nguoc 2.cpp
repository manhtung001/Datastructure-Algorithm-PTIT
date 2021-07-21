#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
ll x[101];
bool OK = true;
void nhap(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		x[i] = n-i+1;
	}
}
void in(){
	for(int i = 1; i <= n; i++){
		cout << x[i];
	}
	cout << " ";
}
void NextPermutation(){
	int j = n - 1;
	while(j > 0 && x[j] < x[j+1]){
		j--;
	}
	if(j > 0){
		int k = n;
    	while(x[j] < x[k]) k--;
	    int t = x[j]; x[j] = x[k]; x[k] = t;
	    int r = j + 1, s = n;
	    while(r <= s){
		    t = x[r]; x[r] = x[s]; x[s] = t;
		    r++; s--;
	    }
	}
	else OK = false;
}
main(){
	ll t;
	cin >> t;
	while(t--){
		nhap();
		while(OK){
			in();
			NextPermutation();
		}
		cout << endl;
		OK = true;
	}
}
