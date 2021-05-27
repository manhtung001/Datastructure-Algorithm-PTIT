#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//so nn <=> cs dau tien nho nhat <=> cac cs cang lon
void xuli(ll s, ll d)
{
 ll a[1001];
 if (s > 9 * d)
 {
		cout << -1;
		return;
 }
 s = s - 1; //de danh cs 1 cho a[1]
 for (int i = d; i > 1; i--)
 { //xet tu cuoi len(cs cuoi cang lon thi cs dau cang nho)
		if (s > 9)
		{
			a[i] = 9;
			s -= 9;
		}
		else
		{
			a[i] = s;
			s = 0;
		}
 }
 a[1] = s + 1;
 for (int i = 1; i <= d; i++)
 {
		cout << a[i];
 }
}
main()
{
 int t;
 cin >> t;
 while (t--)
 {
		ll s, d; // s la tong, d la chu so
		cin >> s >> d;
		xuli(s, d);
		cout << endl;
 }
}
