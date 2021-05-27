#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[101][101], n;
vector<string> res;
string s;
void nhap()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
		}
	}
	res.clear(); // NOTE.......................
}
void Try(int i, int j, string s)
{
	if (a[1][1] == 0 || a[n][n] == 0)
		return;
	if (i == n && j == n && a[i][j] == 1)
	{
		res.push_back(s);
		return;
	}
	if (a[i + 1][j] == 1 && i < n)
	{
		Try(i + 1, j, s + "D");
	}
	if (a[i][j + 1] == 1 && j < n)
	{
		Try(i, j + 1, s + "R");
	}
	if (i > n || j > n || (i < n && j < n && a[i + 1][j] == 0 && a[i][j + 1] == 0))
	{
		return;
	}
}
main()
{
	int t;
	cin >> t;
	while (t--)
	{
		nhap();
		s = "";
		Try(1, 1, s);
		if (res.size() == 0)
			cout << -1;
		else
		{
			sort(res.begin(), res.end());
			for (int i = 0; i < res.size(); i++)
			{
				cout << res[i] << " ";
			}
		}
		cout << endl;
	}
}
