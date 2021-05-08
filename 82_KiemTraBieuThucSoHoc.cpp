#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

main()
{
	int t;
	cin >> t;
	cin.ignore();
	while (t--)
	{
		string s;
		getline(cin, s);
		stack<char> st;
		bool check;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == ')')
			{
				check = true; //neu trong ngoac co phep toan th� false
				char top = st.top();
				st.pop();
				while (top != '(')
				{
					if (top == '+' || top == '-' || top == '*' || top == '/')
						check = false;
					top = st.top();
					st.pop();
				}
				if (check)
					break;
			}
			else
				st.push(s[i]);
		}
		if (check)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}
