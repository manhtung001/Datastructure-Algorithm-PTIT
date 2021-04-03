#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void xuli(string s, int d)
{
 ll dem[26] = {};
 ll n = s.size();
 for (int i = 0; i < n; i++)
 {
		dem[s[i] - 'A']++;
 }
 priority_queue<ll> q;
 for (int i = 0; i < 26; i++)
 {
		q.push(dem[i]);
 }
 ll i = 0;
 ll k = q.size();
 int kt = 0;
 while (i < k)
 {
		ll t = q.top();
		for (int j = 0; j < t; j++)
		{
			if ((i + j * d) > n)
			{
				kt = 1;
				break;
			}
		}
		q.pop();
		i++;
 }
 if (kt == 1)
		cout << -1;
 else
		cout << 1;
}
main()
{
 int t;
 cin >> t;
 while (t--)
 {
		int d;
		string s;
		cin >> d >> s;
		xuli(s, d);
		cout << endl;
 }
}
