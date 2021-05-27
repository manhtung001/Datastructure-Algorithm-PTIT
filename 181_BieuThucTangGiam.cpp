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
		stack<int> st;
		string res = "";
		for (int i = 0; i <= s.size(); i++)
		{
			st.push(i + 1);
			if (s[i] == 'I' || i == s.size())
			{
				while (!st.empty())
				{
					res += (st.top() + '0');
					st.pop();
				}
			}
		}
		cout << res << endl;
 }
}
