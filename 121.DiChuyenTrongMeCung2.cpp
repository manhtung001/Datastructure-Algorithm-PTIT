#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string s;
ll a[101][101], n;
ll check[101][101]; // kiem tra xem vtri do da di chua(f: chua di, t: di roi)
vector<string> kq;
void nhap()
{
 cin >> n;
 for (int i = 1; i <= n; i++)
 {
		for (int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
			check[i][j] = false;
		}
 }
}
void Try(int i, int j, string s)
{
 if (a[1][1] == 0 || a[n][n] == 0)
		return;
 if (i == n && j == n && a[n][n] == 1)
 {
		kq.push_back(s);
		return;
 }
 if (a[i + 1][j] == 1 && i < n && check[i + 1][j] == false)
 {
		check[i][j] = true; // danh dau vi tri truoc do da di roi
		Try(i + 1, j, s + "D");
		check[i][j] = false; // neu ham Try k thuc hien duoc thi gan f
 }
 if (a[i][j + 1] == 1 && j < n && check[i][j + 1] == false)
 {
		check[i][j] = true;
		Try(i, j + 1, s + "R");
		check[i][j] = false;
 }
 if (a[i][j - 1] == 1 && j > 1 && check[i][j - 1] == false)
 {
		check[i][j] = true;
		Try(i, j - 1, s + "L");
		check[i][j] = false;
 }
 if (a[i - 1][j] == 1 && i > 1 && check[i - 1][j] == false)
 {
		check[i][j] = true;
		Try(i - 1, j, s + "U");
		check[i][j] = false;
 }
}
main()
{
 int t;
 cin >> t;
 while (t--)
 {
		nhap();
		kq.clear();
		Try(1, 1, "");
		if (kq.size() == 0)
			cout << "-1";
		else
		{
			sort(kq.begin(), kq.end());
			for (int i = 0; i < kq.size(); i++)
			{
				cout << kq[i] << " ";
			}
		}
		cout << endl;
 }
}
