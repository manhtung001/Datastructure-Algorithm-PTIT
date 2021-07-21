#include<bits/stdc++.h>
using namespace std;

main(){
	int n, a[10000], MAX[10000];
	cin>>n;
	for(int i=0; i<n; i++) cin>>a[i];
	int ans=1;
	for(int i=0; i<n; i++){
		MAX[i] = 0;
		for(int j=i-1; j>=0; j--){
			if(a[j] < a[i]){
				MAX[i] = max(MAX[i], MAX[j]);
			}
		}
		MAX[i]++;
		ans = max(MAX[i], ans);
	}
	cout<<ans;
}
