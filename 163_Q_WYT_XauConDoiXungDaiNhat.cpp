#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool f[1001][1001];
main()
{
 int t;
 cin >> t;
 while (t--)
 {
		string s;
		cin >> s;
		s = '1' + s; //day xau s bd tu vi tri 1
		ll n = s.size() - 1;
		int res = 1; //do dai xau con dai nhat
		for (int i = 1; i <= n; i++)
			f[i][i] = 1;
		for (int k = 1; k <= n - 1; k++)
		{
			for (int i = 1; i <= n - k; i++)
			{
				int j = k + i;
				f[i][j] = (f[i + 1][j - 1] && s[i] == s[j]);
				if (j - i == 1 && s[i] == s[j])
					f[i][j] = 1;
				if (f[i][j])
					res = max(res, j - i + 1);
			}
		}
		cout << res << endl;
 }
}
