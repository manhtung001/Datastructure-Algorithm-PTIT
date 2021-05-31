#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

main()
{
 int t;
 cin >> t;
 while (t--)
 {
		string s;
		cin >> s;
		int n = s.size();
		ll f[41];
		memset(f, 0, sizeof(f));
		if (s[0] == '0')
			cout << 0 << endl;
		else
		{
			f[0] = 1;
			f[1] = 1;
			for (int i = 2; i <= n; i++)
			{
				if (s[i - 1] > '0')
					f[i] = f[i - 1];
				if (s[i - 2] == '1' || s[i - 2] == '2' && s[i - 1] < '7')
					f[i] = f[i] + f[i - 2];
			}
			cout << f[n] << endl;
		}
 }
}
