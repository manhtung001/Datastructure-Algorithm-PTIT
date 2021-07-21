#include<bits/stdc++.h>
using namespace std;
long long ngto[10001],s,t; 
int nt(long long n){
	for (int i=2;i<=sqrt(n);i++) if (n%i==0) return 0;
	return 1;
}
void sang(){
	for (long long i=1000;i<10001;i++)
		if (nt(i)) ngto[i]=1;
		else ngto[i]=0;
}
void Solu(){
	long long chuaxet[10001], prev[10001], queue[10001];
	long long in=-1, out= 0;
	memset(chuaxet,1,sizeof(chuaxet));
	memset(prev,0,sizeof(prev));
	queue[++in]=s;
	chuaxet[s]=0;
	prev[s]=0;
	while (in>=out){
		long long ss=queue[out];
		out++;
		if (ss==t) break;
		int s0=ss%10;ss/=10;
		int s1=ss%10;ss/=10;
		int s2=ss%10;ss/=10;
		int s3=ss;
		long long ts=s0+10*s1+100*s2;
		for (int i=1;i<10;i++)
			if (i!=s3&&ngto[ts+1000*i]&&chuaxet[ts+1000*i]){
				queue[++in]=ts+1000*i;
				chuaxet[ts+1000*i]=0;
				prev[ts+1000*i]=ts+1000*s3;
			}
		
		ts=s0+10*s1+1000*s3;
		for (int i=0;i<10;i++)
			if (i!=s2&&ngto[ts+100*i]&&chuaxet[ts+100*i]){
				queue[++in]=ts+100*i;
				chuaxet[ts+100*i]=0;
				prev[ts+100*i]=ts+100*s2;
			}	
		ts=s0+100*s2+1000*s3;
		for (int i=0;i<10;i++)
			if (i!=s1&&ngto[ts+10*i]&&chuaxet[ts+10*i]){
				queue[++in]=ts+10*i;
				chuaxet[ts+10*i]=0;
				prev[ts+10*i]=ts+10*s1;
			}
		ts=10*s1+100*s2+1000*s3;
		for (int i=0;i<10;i++)
			if (i!=s0&&ngto[ts+i]&&chuaxet[ts+i]){
				queue[++in]=ts+i;
				chuaxet[ts+i]=0;
				prev[ts+i]=ts+s0;
			}
	}
	vector<int>res;
	while (prev[t]>0){
		res.push_back(t);
		t=prev[t];
	}
	cout<<res.size()<<endl;
}
int main(){
	int test;
	cin>>test;
	sang();
	while (test--){
		cin>>s>>t;
		Solu();
	}
}
