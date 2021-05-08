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
		stack<ll> st;
		ll res = 0;
		for (ll i = 0; i < n; i++)
		{
			if (s[i] == '(')
			{
				st.push(i);
			}
			else if (s[i] == ')' && st.size() == 0)
			{
				res = 0;
			}
			else if (s[i] == ')' && st.size() > 0)
			{
				st.pop();
				res += 2;
			}
		}
		cout << res << endl;
	}
}
