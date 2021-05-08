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
		stack<ll> st;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] >= '0' && s[i] <= '9')
			{
				st.push(s[i] - '0');
			}
			else
			{
				ll first = st.top();
				st.pop();
				ll second = st.top();
				st.pop();
				if (s[i] == '+')
				{
					ll res = second + first;
					st.push(res);
				}
				if (s[i] == '-')
				{
					ll res = second - first;
					st.push(res);
				}
				if (s[i] == '*')
				{
					ll res = second * first;
					st.push(res);
				}
				if (s[i] == '/')
				{
					ll res = second / first;
					st.push(res);
				}
				if (s[i] == '^')
				{
					ll res = second ^ first;
					st.push(res);
				}
			}
		}
		cout << st.top() << endl;
	}
}
