#include <bits/stdc++.h>
using namespace std;

int main()
{
 int t;
 cin >> t;
 while (t--)
 {
  string s;
  cin >> s;
  string res = "";
  stack<int> st;
  for (int i = 0; i <= s.size(); i++)
  {
   st.push(i + 1);
   if (s[i] == 'I' || i = s.size())
   {
    while (!st.empty())
    {
     res += string(1, st.top() + '0');
     st.pop();
    }
   }
  }
  cout << res << endl;
 }
}