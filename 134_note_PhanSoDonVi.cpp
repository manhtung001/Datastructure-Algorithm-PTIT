#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void xuli(ll tu, ll mau)
{
 ll res;
 while (1)
 {
		if (mau % tu == 0)
		{
			cout << "1/" << mau / tu << "\n"; // TH cuoi cung
			break;
		}
		else
		{
			res = mau / tu + 1;
			cout << "1/" << res << " + ";
			tu = tu * res - mau;
			mau = mau * res;
		}
 }
}
main()
{
 int t;
 cin >> t;
 while (t--)
 {
		ll tu, mau;
		cin >> tu >> mau;
		xuli(tu, mau);
		cout << endl;
 }
}
