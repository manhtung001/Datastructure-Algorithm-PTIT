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
  stack<ll> st;
  for (ll i = s.size() - 1; i >= 0; i--)
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
     st.push(first + second);
    }
    else if (s[i] == '-')
    {
     st.push(first - second);
    }
    else if (s[i] == '*')
    {
     st.push(first * second);
    }
    else if (s[i] == '/')
    {

     st.push(first / second);
    }
   }
  }
  cout << st.top() << endl;
 }
}