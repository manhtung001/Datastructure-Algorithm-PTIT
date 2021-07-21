#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll sum, n, k, a[101], f[101];
bool check;
void Try(int tong, int dem){
	if(check == true) return;
	if(dem == k){
		check = true;
		return;
	}
	for(int i = 1; i <= n; i++){
		if(f[i] == 0){
			f[i] = 1;
			if(tong == sum) Try(0,dem+1);
			else if(tong > sum) return;
			else{
				Try(tong+a[i],dem);
			}
		}
		f[i] = 0;
	}
}
main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		sum = 0;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
			sum += a[i];
			f[a[i]] = 0;
		}
		if(sum % k != 0) cout << "0";
		else{
			check = false;
			sum /= k;
			Try(0,0);
			if(check == true) cout << "1";
			else cout << "0";
		}
		cout << endl;
	}
}
