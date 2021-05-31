#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f[101][101];
main()
{
 int t;
 cin >> t;
 while (t--)
 {
		int n;
		string s;
		cin >> n;
		cin >> s;
		memset(f, 0, sizeof(f));
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (s[i] == s[j] && i != j)
					f[i + 1][j + 1] = f[i][j] + 1;
				else
				{
					f[i + 1][j + 1] = max(f[i][j + 1], f[i + 1][j]);
				}
			}
		}
		cout << f[n][n] << endl;
 }
}
