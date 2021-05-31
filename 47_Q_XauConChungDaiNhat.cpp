#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f[1001][1001];
main()
{
 int t;
 cin >> t;
 while (t--)
 {
		string s1, s2;
		cin >> s1 >> s2;
		ll n = s1.size(), m = s2.size();
		memset(f, 0, sizeof(f));
		for (int i = 0; i <= n; i++)
			f[i][0] = 0;
		for (int j = 0; j <= m; j++)
			f[0][j] = 0;
		ll res = 0;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				if (s1[i - 1] == s2[j - 1])
					f[i][j] = f[i - 1][j - 1] + 1;
				else
					f[i][j] = max(f[i][j - 1], f[i - 1][j]);
				res = max(res, f[i][j]);
			}
		}
		cout << res << endl;
 }
}
