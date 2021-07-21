#include <bits/stdc++.h>
using namespace std;

void Try(string s, int k, string &max){
	if(k==0) return;
	int n=s.size()-1;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<=n; j++){
			if(s[i]<s[j]){
				swap(s[i], s[j]);
				if(s.compare(max)> 0) max= s;
				Try(s, k-1, max);
				swap(s[i], s[j]);
			}
		}
	}
}

main(){
	int t;
	cin>>t;
	while(t--){
		int k;
		cin>>k;
		string s;
		cin>>s;
		string max=s;
		Try(s, k, max);
		cout<<max<<endl;
	}
}
