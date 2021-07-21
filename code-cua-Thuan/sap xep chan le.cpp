#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;cin>>n;
	int	a[n],b[n],tmp;
		int x=0,y=0;
	for (int i=0;i<n;i++) {
		cin>>tmp;
		if (i%2==0){
			a[x++]=tmp;
		}
		else b[y++]=tmp;;
	}
	sort(a,a+x);
	sort(b,b+y);
		int l=0,k=y-1;
	for (int i=0;i<n;i++){
		if (i%2==0) {
			cout<<a[l++]<<" ";	
		}
		else {
			cout<<b[k--]<<" ";
		}
	}
	cout<<endl;
}
