#include <bits/stdc++.h>
using namespace std;
int a[20];
bool Ok(int x2,int y2){
    //ki?m tra c�ch d?t c� th?a m?n kh�ng
    for(int i = 1; i < x2 ;i++)
        if(a[i] == y2 || abs(i-x2) == abs(a[i] - y2) )
            return false;
    //N?u ki?m tra h?t c�c tru?ng h?p v?n kh�ng sai th? tr? v? true
    return true;
}
int d=0,n;
void Try(int i){
    for(int j = 1;j<=n;j++){
        // th? d?t qu�n h?u v�o c�c c?t t? 1 d?n n
        if(Ok(i,j)){
            //n?u c�ch d?t n�y th?a m?n th? luu l?i v? tr�
            a[i] = j;
                        //n?u d?t xong qu�n h?u th? n th? xu?t ra m?t k?t qu?
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
