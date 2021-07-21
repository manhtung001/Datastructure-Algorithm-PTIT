#include<bits/stdc++.h>
using namespace std;
//2 3
//1 3
//1 2
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n; cin>>n;
	string s;
	cin.ignore();
	vector<int>ke[100];
	for (int i=1;i<=n;i++){
		getline(cin,s);
		s+=" ";
		int num=0,j=0;
		while (j<s.size()){
			if (s[j]>='0'&&s[j]<='9') 
			num=num*10+s[j]-'0';
			else if (num>0){
				ke[i].push_back(num);
				num=0;
			}
			j++;
		}
	}
	for (int i=1;i<=n;i++) sort(ke[i].begin(),ke[i].end());
	for (int i=1;i<=n;i++){
		for (int j=0;j<ke[i].size();j++){
			if (i<ke[i][j])
			cout<<i<<" "<<ke[i][j]<<endl;
		}
	}
}
