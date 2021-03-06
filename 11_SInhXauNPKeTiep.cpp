#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		ll i = s.size();
		while (i > 0 && s[i] != '0')
		{
			s[i] = '0';
			i--;
		}
		if (i > 0)
			s[i] = '1';
		else
		{
			for (int j = 0; j < s.size(); j++)
				s[j] = '0';
		}
		cout << s;
		cout << endl;
	}
}
