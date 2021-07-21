#include<bits/stdc++.h>
using namespace std;
int n,s,a[100];
vector< vector<int> > res;
vector<int>v;
void Try(int i,int sum ,vector<int>v){	
	if(sum==s){
		res.push_back(v);
		return;
	}
	for(int j=i;j<n;j++ ){
		if(sum+a[j]<=s){
			v.push_back(a[j]);
			Try(j,sum+a[j],v);
			v.pop_back();
		}
	}
}
int main (){
	ios_base::sync_with_stdio(false);
	   cin.tie(0);
	int t;cin>>t;
	while(t--){
		cin>>n>>s;
		for(int i=0;i<n;i++)cin>>a[i];
		v.clear();
		res.clear();
		Try(0,0,v);
		if(res.size()==0){
			cout<<-1;
		}
		else{
			cout<<res.size()<<" ";
			for(int i=0;i<res.size();i++){
				cout<<"{";
				for(int j=0;j<res[i].size()-1;j++){
					cout<<res[i][j]<<" ";
				}
				cout<<res[i][res[i].size()-1]<<"} ";
			}
		}
		cout<<endl;
	}
}
