#include <bits/stdc++.h>
using namespace std;
int n,s,a[100];
vector<vector<int>> res;
void Try(int i,int sum,vector<int> v){
	if(sum>s) return;
	if(sum==s){
		 res.push_back(v);
		 return;
	}
	for(int j=i ;j<=n ;j++){
		if(sum+a[j]<=s){
			v.push_back(a[j]);
			Try(j,sum+a[j],v);
			v.pop_back();
		}
	}
}
int main (){
	int t; cin>>t;
	while(t--){
		cin>>n>>s;
		for(int i=1; i<=n ;i++) cin>>a[i];
		sort(a+1,a+n+1);
		vector<int> v; v.clear();
		res.clear();
		Try(1,0,v);
		if(res.size()==0) cout<<-1;
		else{
			for(int i=0; i<res.size(); i++){
				for(int j=0; j<res[i].size(); j++){
					if(j==0) cout<<"[";
					if(j==res[i].size()-1) cout<<res[i][j]<<"]";
					else
					cout<<res[i][j]<<" ";
				}
			}
		}
		cout<<endl;
	}
}
