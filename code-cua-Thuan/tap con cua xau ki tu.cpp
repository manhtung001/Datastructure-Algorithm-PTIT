#include<bits/stdc++.h>
using namespace std;
int a[17],n;
string s;
vector<string> res;
void Try(int i){
	for (int j=0;j<=1;j++){
		a[i]=j;
		if (i==n-1){
			string tmp="";
			for (int l=0;l<n;l++){
				if (a[l]){tmp+=s[l]; 
				}
			}
			res.push_back(tmp);
		}
		else Try(i+1);
	}
} 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;cin>>t;
	while (t--){
		cin>>n>>s;
		res.clear();
		Try(0);
		sort(res.begin(),res.end());
		for (int i=0;i<res.size();i++){
			cout<<res[i]<<" ";
		}
		cout<<endl;
	}
}
