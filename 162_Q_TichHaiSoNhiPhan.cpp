#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

main()
{
 int t;
 cin >> t;
 while (t--)
 {
		string s1, s2;
		cin >> s1 >> s2;
		ll so1 = 0, so2 = 0;
		ll n1 = s1.size(), n2 = s2.size();
		for (int i = 0; i < n1; i++)
		{
			if (s1[i] == '1')
				so1 += pow(2, n1 - 1 - i);
		}
		for (int i = 0; i < n2; i++)
		{
			if (s2[i] == '1')
				so2 += pow(2, n2 - 1 - i);
		}
		ll sum = so1 * so2;
		cout << sum << endl;
 }
}
