#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll *a = new ll[n+1];
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a, a+n);
	    if(a[0] == a[n-1]) cout << -1;
	    else{
	    	cout << a[0] << " ";
	    	for(int i = 1; i < n; i++){
	    		if(a[i] != a[0]){
	    			cout << a[i];
	    			break;
				}
			}
		}
		cout << endl;
	}
}

