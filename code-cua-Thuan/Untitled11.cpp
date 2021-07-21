#include<bits/stdc++.h>
using namespace std;
void solve(int a[],int n){
		for(int i=0;i<n-1;i++){
			int count=0;
			for(int j=i+1;j<n;j++){
				if(a[j]>a[i]){
					count++;
					cout<< a[j]<<" ";break;
				}
			}
			if(count==0){
				cout <<"-1"<<" ";
			}
		}
		cout<<"-1";
		cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		solve(a,n);
	}
}
