#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// n = a*4 + b*7
main()
{
 ll t;
 cin >> t;
 while (t--)
 {
		ll n, dem4 = 0, dem7 = 0;
		//dem4 la dem so luong 4
		//dem7 la dem so luong 7
		cin >> n;
		while (n > 0)
		{
			if (n % 7 == 0)
			{
				dem7++;
				n -= 7;
			}
			else
			{
				dem4++;
				n -= 4;
			}
		}
		if (n < 0) // neu n != dem4*4 + dem7*7 ( dem4, dem7 la cac so nguyen)
			cout << -1;
		else
		{
			for (int i = 1; i <= dem4; i++)
			{
				cout << 4;
			}
			for (int i = 1; i <= dem7; i++)
			{
				cout << 7;
			}
		}
		cout << endl;
 }
}
