#include<bits/stdc++.h>
using namespace std;
string s;
long long a[1001];
void ingray2(){
	a[0]=s[0]-'0';
	for(int i=1;i<s.size();i++){
		if((s[i]-'0')==0){
			a[i]=a[i-1];
		}else{
			if(a[i-1]==1){
				a[i]=0;
			}else{
				a[i]=1;
			}
		}
	}
	for(int i=0;i<s.size();i++){
		cout<<a[i];
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>s;
		ingray2();
		cout<<endl;
	}
}
