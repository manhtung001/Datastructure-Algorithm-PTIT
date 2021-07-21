#include<bits/stdc++.h>
#define max 1001 
using namespace std;
int v,e, x[max][max], d1[max],d2[max];
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t;cin>>t;
	while (t--){
		cin >> v >> e;
		for (int i=1;i<=v;i++){
		    for (int j=1;j<=v;j++) x[i][j]=0;
		}
		while (e--){
			int a, b;
			cin >> a >> b;
			x[a][b]=1;
		}
		int d=0;
		memset(d1,0,sizeof(d1));
		memset(d2,0,sizeof(d2));
		for (int i=1;i<=v;i++){
			for (int j=1;j<=v;j++) {
				if (x[i][j]) d1[i]++;
				if (x[j][i]) d2[i]++;
			}
			if (d1[i]==d2[i]) d++;
		}
		if (d==v) cout<<1<<endl;
		else cout<<0<<endl;
	}
}
