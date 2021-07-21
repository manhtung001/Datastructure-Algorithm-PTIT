#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    cin.ignore();
    while(t--)
    {
        /* code */
        string s; getline(cin,s);
        stack<string>stk; s+=" ";
        string str="";
        for(int i=0; i<s.length(); i++){
        	str+=s[i];
            if(s[i]==' '){
                
                stk.push(str);
                str="";
            }
        }
        while(!stk.empty()){
            cout<<stk.top();
            stk.pop();
        }
        cout<<endl;
    }
    
}
