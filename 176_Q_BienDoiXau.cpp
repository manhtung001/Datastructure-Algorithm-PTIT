#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int f[101][101];
main()
{
 int t;
 cin >> t;
 while (t--)
 {
		string s1, s2;
		cin >> s1 >> s2;
		int n = s1.size(), m = s2.size();
		memset(f, 0, sizeof(f));
		for (int i = 1; i <= n; i++)
			f[i][0] = i;
		for (int j = 1; j <= m; j++)
			f[0][j] = j;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				if (s1[i - 1] == s2[j - 1])
					f[i][j] = f[i - 1][j - 1];
				else
					f[i][j] = min(f[i][j - 1], min(f[i - 1][j], f[i - 1][j - 1])) + 1;
			}
		}
		cout << f[n][m] << endl;
 }
}
