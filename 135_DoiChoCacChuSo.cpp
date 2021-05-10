#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

main()
{
 ll t;
 cin >> t;
 while (t--)
 {
		int k, vt;
		string s;
		cin >> k >> s;
		for (int i = 0; i < s.size() && k > 0; i++)
		{
			char max = s[s.size() - 1];
			vt = s.size() - 1;
			for (int j = s.size() - 1; j > i; j--)
			{
				if (s[j] > max)
				{
					max = s[j];
					vt = j;
				}
			}
			if (max > s[i])
			{
				swap(s[i], s[vt]);
				k--;
			}
		}
		cout << s << endl;
 }
}
