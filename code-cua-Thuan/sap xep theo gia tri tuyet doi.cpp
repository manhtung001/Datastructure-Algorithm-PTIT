#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int X;
struct sosanh
{
    int val1,val2,vt;
};

bool cmp(sosanh x,sosanh y){
    if(x.val2<y.val2) return true;
    if (x.val2==y.val2 && x.vt<y.vt) return true;
    return false;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        int n,x; 
        cin>>n>>x; 
        vector <sosanh> a(n),b(n);
        for (int i=0; i<n ;i++){
            cin>>a[i].val1;
            a[i].val2=abs(x-a[i].val1);
            a[i].vt=i;
        }
        sort(a.begin(),a.end(),cmp);
        for (int i=0; i<n ;i++) cout<<a[i].val1<<" ";
        cout<<endl;
    }
    return 0;
}
