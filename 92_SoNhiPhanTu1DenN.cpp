#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

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
		while (n--)
		{
			ll temp = q.front();
			cout << temp << " ";
			q.pop();
			q.push(10 * temp);
			q.push(10 * temp + 1);
		}
		cout << endl;
 }
}
