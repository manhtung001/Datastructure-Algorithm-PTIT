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
		stack<char> st;
		for (int i = 0; i < s.size(); i++)
		{
			if (st.size() == 0)
				st.push(s[i]);
			else
			{
				if (s[i] == ')')
				{
					if (st.top() == '(')
						st.pop(); //xoa het cac cap ()
					else
						st.push(s[i]);
				}
				else
					st.push(s[i]);
			}
		}
		ll d1 = 0, d2 = 0, res = 0;
		while (st.size() > 0)
		{
			if (st.top() == '(')
				d1++;
			else
				d2++;
			st.pop();
		}
		res = d1 / 2 + d1 % 2 + d2 / 2 + d2 % 2;
		cout << res << endl;
	}
}
