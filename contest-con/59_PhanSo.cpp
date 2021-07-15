#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void xuli(ll tu, ll mau){
//	if(tu == 0 || mau == 0) return;
	if(tu == 1){
		cout << "1/" << mau;
		return;
	} 
	if(mau % tu == 0){
		cout << "1/" << mau/tu;
		return;
	} 
	while(mau%tu != 0){
		int n = mau/tu + 1;
		cout << "1/" << n << " + ";
		tu = tu*n - mau;
		mau = mau*n;
	}
	cout << "1/" << mau/tu;
}
main(){
	int t;
	cin >> t;
	while(t--){
		ll tu, mau;
		cin >> tu >> mau;
		xuli(tu,mau);
		cout << endl;
	}
}

