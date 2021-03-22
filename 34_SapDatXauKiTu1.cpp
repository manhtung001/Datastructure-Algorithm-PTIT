#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

main()
{
 int t;
 cin >> t;
 while (t--)
 {
		ll d[26] = {};
		string s;
		cin >> s;
		ll kc = 0;
		for (int i = 0; i < s.size(); i++)
		{
			d[s[i] - 'a']++; // s[i]-'a' : giam chi so cua s[i]
			if (d[s[i] - 'a'] > kc)
				kc = d[s[i] - 'a'];
		}
		if (kc <= s.size() - kc + 1)
			cout << 1;
		else
			cout << -1;
		cout << endl;
 }
}
