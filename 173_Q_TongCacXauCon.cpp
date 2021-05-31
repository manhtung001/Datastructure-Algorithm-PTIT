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
		ll n = s.size();
		ll f[n + 1];
		f[0] = s[0] - '0';
		ll res = f[0];
		for (int i = 1; i < n; i++)
		{
			f[i] = (s[i] - '0') * (i + 1) + f[i - 1] * 10;
			res += f[i];
		}
		cout << res << endl;
 }
}
