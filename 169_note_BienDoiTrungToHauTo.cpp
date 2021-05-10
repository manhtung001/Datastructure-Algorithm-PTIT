#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int check(char x)
{
 if (x == '^')
		return 3;
 else if (x == '*' || x == '/')
		return 2;
 else if (x == '+' || x == '-')
		return 1;
 else
		return -1;
}
void TrungTo_HauTo(string s)
{
 stack<char> st;
 for (int i = 0; i < s.size(); i++)
 {
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
			cout << s[i];
		else if (s[i] == '(')
			st.push(s[i]);
		else if (s[i] == ')')
		{
			while (!st.empty() && st.top() != '(')
			{
				cout << st.top();
				st.pop();
			}
			if (st.top() == '(')
				st.pop();
		}
		else
		{ // TH la +-*/
			while (!st.empty() && check(s[i]) <= check(st.top()))
			{
				cout << st.top();
				st.pop();
			}
			st.push(s[i]); // 2 TH con lai(stack rong; check(s[i]) > check[y]
		}
 }

 while (!st.empty())
 {
		if (st.top() != '(')
			cout << st.top();
		st.pop();
 }
}
main()
{
 int t;
 cin >> t;
 while (t--)
 {
		string s;
		cin >> s;
		TrungTo_HauTo(s);
		cout << endl;
 }
}
