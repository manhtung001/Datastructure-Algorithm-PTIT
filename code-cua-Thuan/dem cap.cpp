#include <bits/stdc++.h>
using namespace std;
long tinh(int b[], int m, int d[],int x){
    if (x==0) return 0;
    if (x==1) return d[0];  
    int tmp=upper_bound(b,b+m,x)-b;
    long ans=m-tmp;  ans=ans+d[0]+d[1];
    if(x==2) ans=ans-(d[3]+d[4]);
    if (x==3) ans+=d[2];
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m; int a[n],b[m],d[10]={0};
        for (int i=0; i<n ;i++){
            cin>>a[i];
        }
        for (int j=0; j<m;j++){
            cin>>b[j];
            if(b[j]<=4) d[b[j]]++;
        }
        sort(b,b+m);
        long res=0;
        for (int i=0; i<n ;i++){
            res+=tinh(b,m,d,a[i]);
        }
        cout<<res<<endl;
    }
}
