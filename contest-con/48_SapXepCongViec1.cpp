#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct cv{
	int bdau;
	int kthuc;
};
bool compare(cv a, cv b){
	return (a.kthuc < b.kthuc);
}
main(){
	cv a[1001];
	int t;
	cin >> t;
	while(t--){
		ll n; cin >> n;
		for(int i = 0; i < n; i++) cin >> a[i].bdau;
		for(int i = 0; i < n; i++) cin >> a[i].kthuc;
		sort(a,a+n,compare);
		int dem = 1;
		int j = 0;
		for(int i = 1; i < n; i++){
			if(a[i].bdau > a[j].kthuc){
				j = i;
				dem++;
			}
		}
		cout << dem << endl;
	}
}

