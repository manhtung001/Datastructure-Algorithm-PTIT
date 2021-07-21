#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll R(ll a[],int n, int index){
	bool check=false;
	for(int j=index+1; j<n; j++){
		if(a[index]<a[j]) {
			check=true;
			return a[j];
		}
	}
	if(!check) return -1;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n; ll a[n]; for(int i=0; i<n; i++) cin>>a[i];
		for(int i=0; i<n; i++){
			cout<<R(a,n,i)<<" ";
		}
		cout<<endl;
	}
}
