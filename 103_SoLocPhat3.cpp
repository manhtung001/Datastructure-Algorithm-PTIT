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
		deque<ll> ans;
		q.push(6);
		q.push(8);
		while (1)
		{
			ll temp = q.front();
			if (temp > pow(10, n))
				break;
			else
			{
				dem++;
				ans.push_back(temp);
				q.pop();
				q.push(temp * 10 + 6);
				q.push(temp * 10 + 8);
			}
		}
		cout << dem << endl;
		while (!ans.empty())
		{
			ll tmp = ans.back();
			cout << tmp << " ";
			ans.pop_back();
		}
		cout << endl;
 }
}
