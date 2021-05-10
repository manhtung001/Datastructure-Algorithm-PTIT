#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

main()
{
 int t, n, m;
 cin >> t;
 while (t--)
 {
		queue<int> q;
		cin >> n;
		while (n--)
		{
			cin >> m;
			if (m == 1)
				cout << q.size() << endl;
			if (m == 2)
			{
				if (!q.empty())
					cout << "NO\n";
				else
					cout << "YES\n";
			}
			if (m == 3)
			{
				ll x;
				cin >> x;
				q.push(x);
			}
			if (m == 4)
			{
				if (!q.empty())
					q.pop();
			}
			if (m == 5)
			{
				if (!q.empty())
				{
					cout << q.front() << endl;
				}
				else
					cout << -1 << endl;
			}
			if (m == 6)
			{
				if (!q.empty())
				{
					cout << q.back() << endl;
				}
				else
					cout << -1 << endl;
			}
		}
 }
}
