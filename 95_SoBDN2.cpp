#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//giong bai 6
main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		queue<ll> q;
		q.push(1);
		while (1)
		{
			ll temp = q.front();
			if (temp % n == 0)
			{
				cout << temp << endl;
				break;
			}
			else
			{
				q.pop();
				q.push(temp * 10);
				q.push(temp * 10 + 1);
			}
		}
	}
}
