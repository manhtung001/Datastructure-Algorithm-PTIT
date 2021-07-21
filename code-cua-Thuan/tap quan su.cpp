#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, k;
ll a[101], c[101];
bool OK = true;
void nhap(){
	cin >> n >> k;
	for(int i = 1; i <= k; i++){
		cin >> a[i];
		c[i] = a[i];
	}
}
void Sinh(){
	int i = k;
	while(i > 0 && a[i] == n-k+i) i--;
	if(i > 0){
		a[i] = a[i] + 1;
		for(int j = i; j <= n; j++){
			a[j] = a[i] + j - i;
		}
	}
	else OK = false;
}
main(){
	int t;
	cin >> t;
	while(t--){
		nhap();
	    Sinh();
	    int dem = 0;
	    for(int i = 1; i <= k; i++){
		    for(int j = 1; j <= k; j++){
		    	if(a[j] == c[i]){
		    		dem++;
				}
			}
	    }
	    if(dem == k) cout << k << endl;
	    else cout << k-dem << endl;
	}	
}
