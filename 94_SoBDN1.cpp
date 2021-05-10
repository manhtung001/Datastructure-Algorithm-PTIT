#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

main()
{
 int t;
 cin >> t;
 while (t--)
 {
		ll n, dem = 0;
		cin >> n;
		queue<ll> q;
		q.push(1);
		while (1)
		{
			ll temp = q.front();
			if (temp == n)
			{
				dem++;
				break;
			}
			else if (temp > n)
				break;
			else
			{
				dem++;
				q.pop();
				q.push(temp * 10);
				q.push(temp * 10 + 1);
			}
		}
		cout << dem << endl;
 }
}
