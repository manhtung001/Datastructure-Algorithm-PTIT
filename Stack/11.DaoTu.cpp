#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
 int t;
 cin >> t;
 cin.ignore();
 while (t--)
 {
  string s;
  getline(cin, s);
  stack<string> st;
  string tmp = "";
  for (ll i = 0; i < s.size(); i++)
  {
   if (s[i] == ' ')
   {
    tmp += " ";
    st.push(tmp);
    tmp = "";
   }
   else
   {
    tmp += s[i];
   }
  }
  tmp += " ";
  st.push(tmp);
  while (!st.empty())
  {
   cout << st.top();
   st.pop();
  }
  cout << endl;
 }
}