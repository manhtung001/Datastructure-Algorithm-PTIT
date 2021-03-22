#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll SO(string s)
{
 ll so = 0;
 for (int i = 0; i < s.size(); i++)
 {
		so = so * 10 + s[i] - '0';
 }
 return so;
}
main()
{
 string a, b;
 cin >> a >> b;
 for (int i = 0; i < a.size(); i++)
 {
		if (a[i] == '6')
			a[i] = '5';
 }
 for (int i = 0; i < b.size(); i++)
 {
		if (b[i] == '6')
			b[i] = '5';
 }
 cout << SO(a) + SO(b) << " ";
 for (int i = 0; i < a.size(); i++)
 {
		if (a[i] == '5')
			a[i] = '6';
 }
 for (int i = 0; i < b.size(); i++)
 {
		if (b[i] == '5')
			b[i] = '6';
 }
 cout << SO(a) + SO(b);
}
