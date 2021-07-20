#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

main()
{
	queue<ll> q;
	ll t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		if (s == "PUSH")
		{
			ll x;
			cin >> x;
			q.push(x);
		}
		else if (s == "PRINTFRONT")
		{
			if (!q.empty())
				cout << q.front() << endl;
			else
				cout << "NONE\n";
		}
		else
		{
			if (!q.empty())
				q.pop();
		}
	}
}
