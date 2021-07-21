#include <bits/stdc++.h>
using namespace std;
int n,k, a[100];
vector <vector<int>> res;
int v[100];
void init(){
	res.clear();
	cin>>n>>k;
	for (int i=1; i<=n; i++) cin>>v[i];
	sort(v+1,v+n+1);
}

void Try(int i){
	for (int j=0; j<=1; j++){
		a[i]=j;
		if(i==n){
			int s=0;
			for (int l=1; l<=n; l++){
				if (a[l]) s+=v[l];
			}
			
			if(s==k){
				vector<int> x;
				for (int l=1; l<=n;l++)
					if(a[l]) x.push_back(v[l]);
			
				res.push_back(x);
			}
			
		}
		else Try(i+1);
	}
	
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
		init();
		Try(1);
		if(res.size()==0) cout<<-1;
		else{
			sort(res.begin(),res.end(), greater<vector<int>>());
			for(int i=0; i<res.size(); i++){
				for(int j=0; j<res[i].size(); j++)
					cout<<res[i][j]<<" ";
				cout<<endl;	
			}
			cout<<res.size();
		}

}
