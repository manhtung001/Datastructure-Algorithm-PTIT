#include <bits/stdc++.h>
using namespace std;
int a[100][100], t, n;
bool c[100][100];
vector <string> s;
string luu;
void start(){
	luu= "";
	s.clear();
	cin>>n;
	for(int i=0; i<n; i++) 
		for(int j=0; j<n; j++) {
			cin>>a[i][j];
			c[i][j]= true;
		}
}

void Try(int i, int j){
	if(a[0][0]==0 || a[n-1][n-1]==0) return ;
	if (i == n-1 && j == n-1){
		s.push_back(luu);
	}
	if(i!= n-1 && a[i+1][j]==1 && c[i+1][j]){
		c[i][j] = false;
		luu+='D';
		Try(i+1, j);
		c[i][j] = true;
		luu.erase(luu.size()-1);
	}
	if(j!= n-1 && a[i][j+1]==1 && c[i][j+1]){
		c[i][j] = false;
		luu+='R';
		Try(i, j+1);
		c[i][j] = true;
		luu.erase(luu.size()-1);
	}
	if(j!= 0 && j<n && a[i][j-1]==1 && c[i][j-1]){
		c[i][j] = false;
		luu+='L';
		Try(i, j-1);
		c[i][j]= true;
		luu.erase(luu.size()-1);
	}
	if(i!= 0 && a[i-1][j]==1 && c[i-1][j]){
		c[i][j] = false;
		luu+='U';
		Try(i-1, j);
		c[i][j]= true;
		luu.erase(luu.size()-1);
	}
}
void in(){
	Try(0, 0);
	sort(s.begin(), s.end());
	if(s.empty()) cout<<"-1";
	else {
		for(int i=0; i<s.size(); i++) cout<<s[i]<<" ";
	}
}
main(){
	cin>>t;
	while(t--){
		start();
		in();
		cout<<endl;
	}
}
