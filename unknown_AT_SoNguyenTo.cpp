#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check[1001];
vector<int> a;
vector<vector<int>> res;
int n, p, s, sum, vt;
void NgTo()
{
 for (int i = 2; i <= 200; i++)
 {
		if (check[i] == true)
		{
			a.push_back(i);
			for (int j = i * i; j <= 200; j = j + i)
			{
				check[j] = false;
			}
		}
 }
}
void nhap()
{
 cin >> s >> p >> n;
 //	for(int i = 0; i < a.size(); i++){
 //		if(a[i] == p){
 //			vt = i;
 //			break;
 //		}
 //	}
 vt = lower_bound(a.begin(), a.end(), p) - a.begin();
 for (int i = 0; i <= 300; i++)
 {
		check[i] = true;
 }
 res.clear();
}
void Try(int i, int sum, vector<int> v)
{

 if (sum > s)
		return;
 if (sum == s & v.size() == n)
 {
		res.push_back(v);
		return;
 }
 for (int j = i; j <= a.size(); j++)
 {
		if (check[j] == true && sum + a[j] <= s && v.size() < n)
		{
			v.push_back(a[j]);
			check[j] = false;
			Try(j + 1, sum + a[j], v);
			v.pop_back();
			check[j] = true;
		}
 }
}
main()
{
 NgTo();
 int t;
 cin >> t;
 while (t--)
 {
		nhap();
		vector<int> v;
		v.clear();
		Try(vt, 0, v);
		cout << res.size() << endl;
		for (int i = 0; i < res.size(); i++)
		{
			for (int j = 0; j < res[i].size(); j++)
			{
				cout << res[i][j] << " ";
			}
			cout << endl;
		}
 }
}
