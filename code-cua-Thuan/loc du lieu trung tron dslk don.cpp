#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int n;
	cin>>n;
	int a[n],d[10000];
	for (int i=0;i<n;i++) {
		cin>>a[i];
		d[a[i]]=1;
	}
	for (int i=0;i<n;i++){
		if (d[a[i]]) {
			cout<<a[i]<<" ";
			d[a[i]]=0;
		}
	} 
	cout<<endl;
}
