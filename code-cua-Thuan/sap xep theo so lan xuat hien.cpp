#include <bits/stdc++.h>
using namespace std;
using ll=long long;
struct data{
	int value,appear,key;
};
bool cmp(data x,data y){
	if(x.appear>y.appear) return true;
	if(x.appear==y.appear and x.value<y.value) return true;
	return false;
}
int solan(data a[], int n, int x){
	int d=0;
	for(int i=0; i<n; i++){
		if(x==a[i].value) d++;
	}
	return d;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int t; cin>>t;
	while(t--){
		int n; cin>>n ; data a[n];
		for(int i=0; i<n; i++) {
			cin>>a[i].value;
			a[i].appear=0;
		}
		sort(a,a+n,cmp);
		for(int i=0; i<n ;i++){
			if(a[i].appear==0){
				a[i].appear=solan(a,n,a[i].value);
			}
		}
		
		sort(a,a+n,cmp);
		for(int i=0; i<n; i++) cout<<a[i].value<<" ";
		cout<<endl;
	}
	return 0;
}
