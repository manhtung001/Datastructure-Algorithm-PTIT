#include <bits/stdc++.h>
using namespace std;
int a[20];
bool Ok(int x2,int y2){
    //ki?m tra cách d?t có th?a m?n không
    for(int i = 1; i < x2 ;i++)
        if(a[i] == y2 || abs(i-x2) == abs(a[i] - y2) )
            return false;
    //N?u ki?m tra h?t các tru?ng h?p v?n không sai th? tr? v? true
    return true;
}
int d=0,n;
void Try(int i){
    for(int j = 1;j<=n;j++){
        // th? d?t quân h?u vào các c?t t? 1 d?n n
        if(Ok(i,j)){
            //n?u cách d?t này th?a m?n th? luu l?i v? trí
            a[i] = j;
                        //n?u d?t xong quân h?u th? n th? xu?t ra m?t k?t qu?
            if(i==n) d++;
            Try(i+1);
        }
    }
}
 
int main(){
    int t; cin>>t;
    while(t--){
    		d=0;
    		cin>>n;
    	    Try(1);
    		cout<<d<<endl;
	}

    return 0;
}
