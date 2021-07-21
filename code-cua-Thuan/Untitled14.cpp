#include<bits/stdc++.h>
using namespace std;
void solve(long long s){
	long long dem=0;
	while(s!=1){
		if(s%3==1&&s>3){
			s-=1;
			s/=3;
			dem+=2;
		}else if(s%3==0){
			s/=3;
			dem+=1;
		}else if(s%2==1&&s>2){
			s-=1;
			s/=2;
			dem+=2;
		}else if(s%2==0){
			s/=2;
			dem+=1;
		}else if(s%2&&s%3&&s>3){
			s/=6;
			dem+=2;
		}
		else{
			s-=1;
			dem+=1;
		}
	}
	cout<<dem<<endl;
}
long long abc(long long n){
	if(1==1){
		return 1;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long s;
		cin>>s;
		solve(s);
	}
}
