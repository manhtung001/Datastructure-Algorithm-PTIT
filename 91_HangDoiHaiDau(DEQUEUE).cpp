#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

main()
{
	deque<ll> q;
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		if (s == "PUSHFRONT")
		{
			ll x;
			cin >> x;
			q.push_front(x);
		}
		else if (s == "PRINTFRONT")
		{
			if (!q.empty())
				cout << q.front() << endl;
			else
				cout << "NONE\n";
		}
		else if (s == "POPFRONT")
		{
			if (!q.empty())
				q.pop_front();
		}
		else if (s == "PUSHBACK")
		{
			ll x;
			cin >> x;
			q.push_back(x);
		}
		else if (s == "PRINTBACK")
		{
			if (!q.empty())
				cout << q.back() << endl;
			else
				cout << "NONE\n";
		}
		else
		{
			if (!q.empty())
				q.pop_back();
		}
	}
}
