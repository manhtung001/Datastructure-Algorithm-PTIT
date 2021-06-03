#include <bits/stdc++.h>
using namespace std;
int st[205], top = -1;
main()
{
 string s;
 while (cin >> s)
 {
  if (s == "push")
  {
   int n;
   cin >> n;
   top++;
   st[top] = n;
  }
  else if (s == "pop")
  {
   if (top >= 0)
    top--;
  }
  else
  {
   if (top >= 0)
   {
    for (int i = 0; i <= top; i++)
     cout << st[i] << " ";
   }
   else
    cout << "empty";
   cout << endl;
  }
 }
}