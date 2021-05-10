#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void xuli(string s, ll k)
{
 ll len = s.size();
 ll dem[26] = {0};
 for (int i = 0; i < len; i++)
 {																			// dem so lan sh cua ki tu
		dem[s[i] - 'A']++; // s[i]-'a' : giam chi so
 }
 priority_queue<ll> q;
 for (int i = 0; i < 26; i++)
 { // tao hang doi q (giam dan) chua so lan sh cua ki tu
		q.push(dem[i]);
 }
 while (k--)
 {
		ll first = q.top(); //lay phan tu dau tien
		q.pop();
		first -= 1;				// xoa di 1 ki tu
		q.push(first); // nhet lai vao q
 }
 ll sum = 0;
 while (!q.empty())
 {
		ll x = q.top();
		sum += x * x;
		q.pop();
 }
 cout << sum << endl;
}
main()
{
 int t;
 cin >> t;
 while (t--)
 {
		ll k;
		string s;
		cin >> k >> s;
		xuli(s, k);
 }
}
