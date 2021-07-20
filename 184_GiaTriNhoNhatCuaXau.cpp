#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

main()
{
	int t;
	cin >> t;
	while (t--)
	{
		priority_queue<ll> q; //giam dan
		ll d[27] = {0};
		string s;
		ll k;
		cin >> k;
		cin >> s;
		for (int i = 0; i < s.size(); i++)
		{
			d[s[i] - 'A']++;
		}
		for (int i = 0; i <= 26; i++)
		{
			if (d[i] > 0)
				q.push(d[i]);
		}
		while (!q.empty() && k > 0)
		{
			ll top = q.top();
			q.pop();
			top = top - 1;
			q.push(top);
			k--;
		}
		ll res = 0;
		while (!q.empty())
		{
			ll x = q.top();
			res += x * x;
			q.pop();
		}
		cout << res << endl;
	}
}
