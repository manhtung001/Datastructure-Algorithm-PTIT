D�y Ngo ? c ?�ng d�i nh ? t
							  Cho m
	? t x�u ch
	? g
	? m c�c k� t
	? �(� v� �)�.M
	? t d�y ngo
	? c
	?�ng
	? ?															  ? c
	?															  ? nh ngh
	? a nh ? sau : -���� X�u r ? ng l� 1 d�y ngo ? c ?�ng.-���� N ? u A l� 1 d�y ngo ? c ?�ng th� (A)l� 1 d�y ngo ? c ?�ng.-���� N ? u A v� B l� 2 d�y ngo ? c ?�ng th� AB l� 1 d�y ngo ? c ?�ng.Cho m ? t x�u S.Nhi ? m v ? c ? a b ? n l� h�y t�m d�y ngo ? c ?�ng d�i nh ? t xu ? t hi ? n trong x�u ?� cho.Input :�D�ng ? ? u ti�n l� s ? l ? ? ng b ? test T(T ? 20).M ? i test g ? m m ? t x�u S c� ? ? d�i kh�ng v ? ? t qu� 105�k� t ?.Output :��V ? i m ? i test in ra m ? t s ? nguy�n l� ? ? d�i d�y ngo ? c ?�ng d�i nh ? t t�m ? ? ? c.V� d ?: Input : Output 3((())()())()(()))))
� 2 4 6

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
		st.push(-1);
		int res = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '(')
				st.push(i);
			else
			{
				st.pop();
				if (st.empty())
					st.push(i);
				else
				{
					res = max(res, i - st.top());
				}
			}
		}
		cout << res << endl;
	}
}
NG ? N X ? P 1 B�i l�m t ? t nh ? t
									  Cho m
	? t ng
	? n x
	? p c�c s
	? nguy�n.C�c thao t�c g
	? m 3 l ? nh : push,
	pop v� show.Trong ?� thao t�c push k�m theo m ? t gi� tr ? c ? n th�m(kh�ng qu� 1000).H�y vi ? t ch ? ? ng tr�nh ghi ra k ? t qu ? c ? a c�c l ? nh show.Input :�G ? m nhi ? u d�ng, m ? i d�ng ch ? a m ? t l ? nh push, pop ho ? c show.Input ? ? m b ? o s ? l ? ? ng ph ? n t ? trong stack khi nhi ? u nh ? t c ? ng kh�ng v ? ? t qu� 200. Output :�Ghi ra m�n h�nh c�c ph ? n t ? ? ang c� trong stack theo th ? t ? l ? u tr ? m ? i khi g ? p l ? nh show.C�c s ? vi ? t c�ch nhau ?�ng m ? t kho ? ng tr ? ng.N ? u trong stack kh�ng c�n g� th� in ra d�ng �empty� V� d ?: Input Output push 3 push 5 show push 7 show pop pop show 3 5 3 5 7 3

#include <bits/stdc++.h>
																																																																																																																																	using namespace std;
int a[205], top = -1;
void push(int n)
{
	top++;
	a[top] = n;
}
void pop()
{
	top--;
}
void show()
{
	if (top >= 0)
	{
		for (int i = 0; i <= top; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
	else
	{
		cout << "empty" << endl;
	}
}
int main()
{
	string s;
	int n;
	while (cin >> s)
	{
		if (s == "push")
		{
			cin >> n;
			push(n);
		}
		else if (s == "pop")
		{
			pop();
		}
		else if (s == "show")
		{
			show();
		}
	}
}
NG ? N X ? P 2 B�i l�m t ? t nh ? t
									  Y�u c
	? u b
	? n x�y d
	? ng m
	? t stack v
	? i c�c truy v ? n sau ?�y :
�PUSH x�: Th�m ph ? n t ? x v�o stack(0 ? x ? 1000).
�PRINT�: In ra ph ? n t ? ? ? u ti�n c ? a stack.N ? u stack r ? ng, in ra �NONE�.
�POP�: X�a ph ? n t ? ? ? u ti�n c ? a stack.N ? u stack r ? ng, kh�ng l�m g� c ?.Input : D�ng ? ? u ti�n l� s ? l ? ? ng truy v ? n Q(Q ? 100000).M ? i truy v ? n c� d ? ng nh ? tr�n.Output :� V ? i m ? i truy v ? n �PRINT�, h�y in ra ph ? n t ? ? ? u ti�n c ? a stack.N ? u stack r ? ng, in ra �NONE�.V� d ?: Input : Output 9 PUSH 1 PUSH 2 POP PRINT PUSH 3 PRINT POP POP PRINT
� 1 3 NONE
�
#include <bits/stdc++.h>
																																		using namespace std;
int main()
{
	int T;
	cin >> T;
	stack<int> S;
	string str;
	int n;
	while (T--)
	{
		cin >> str;
		if (str == "PUSH")
		{
			cin >> n;
			S.push(n);
		}
		else if (str == "PRINT")
		{
			if (S.empty())
				cout << "NONE" << endl;
			else
				cout << S.top() << endl;
		}
		else if (str == "POP")
		{
			if (!S.empty())
				S.pop();
		}
	}
}
�KI						 ? M TRA BI ? U TH ? C S ? H ? C
									  B�i l�m t
	? t nh
	? t
		  Cho bi
	? u th
	? c s
	? h
	? c,
	h�y cho bi			 ? t bi ? u th ? c s ? h ? c c� d ? th ? a c�c c ? p k� hi ? u �(�,�) � hay kh�ng ? Input :
																										  ? D�ng
																						 ? ? u ti�n
																						 ? ? a v�o s
																						 ? l
																						 ? ? ng b
																						 ? test T;
? Nh					 ? ng d�ng ti ? p theo m ? i d�ng ? ? a v�o m ? t b ? test.M ? i b ? test l� m ? t bi ? u th ? c ti ? n t ? exp.Output :
																																  ? ? ? a ra k
																																  ? t qu
																																  ? m
																																  ? i test theo t
																																  ? ng d�ng.R�ng bu ? c :
																																					? T,
	exp th				 ? a m�n r�ng bu ? c : 1 ? T ? 100;
2						 ? length(exp) ? 20. V� d ?:
� Input Output
						 3((a + b))(a + (b) / c)(a + b * (c - d)) Yes
						 Yes
						 No

#include <bits/stdc++.h>
						 using namespace std;
bool solve(string &str)
{
	   stack<char> s;
	   for (int i = 0; i < str.length(); i++)
	   {
		   if (str[i] == ')')
		   {
			   char top = s.top();
			   s.pop();
			   bool flag = true;
			   while (top != '(')
			   {
				   if (top == '+' || top == '-' || top == '*' || top == '/')
					   flag = false;
				   top = s.top();
				   s.pop();
			   }
			   if (flag == true)
				   return true;
		   }
		   else
			   s.push(str[i]);
	   }
	   return false;
}
int main()
{
	   int T;
	   cin >> T;
	   while (T--)
	   {
		   string s;
		   cin >> s;
		   bool ans = solve(s);
		   if (ans == true)
			   cout << "Yes" << endl;
		   else
			   cout << "No" << endl;
	   }
}
�? ? M S ? D ? U NGO ? C ? ? I CHI ? U
											B�i l�m t
						   ? t nh
						   ? t
			 Cho m
						   ? t x�u ch
						   ? g
						   ? m c�c k� t
						   ? �(�, �)v� c�
						   ? ? d�i ch
						   ? n.H�y
						   ? ? m s
						   ? l
						   ? ? ng d
						   ? u ngo
						   ? c c
						   ? n ph
						   ? i
						   ? ? i chi
						   ? u �t nh
						   ? t,
	   sao cho x�u m ? i thu ? ? ? c l� m ? t d�y ngo ? c ?�ng.Input : D�ng ? ? u ti�n l� s ? l ? ? ng b ? test T(T ? 20).M ? i test g ? m 1 x�u S c� ? ? d�i kh�ng v ? ? t qu� 100 000, ch ? g ? m d ? u(v� ).Output :� V ? i m ? i test, in ra ?�p �n t�m ? ? ? c tr�n m ? t d�ng.V� d ?: Input : Output 4))(((((((((()))(())(((
																											   2 2 1 3

#include <bits/stdc++.h>
																											   using namespace std;
																											   void solve(string str)
																											   {
																												   stack<char> s;
																												   for (int i = 0; i < str.length(); i++)
																												   {
																													   if (str[i] == ')' && !s.empty())
																													   {
																														   if (s.top() == '(')
																															   s.pop();
																														   else
																															   s.push(str[i]);
																													   }
																													   else
																														   s.push(str[i]);
																												   }
																												   int m = s.size();
																												   int n = 0;
																												   while (!s.empty() && s.top() == '(')
																												   {
																													   s.pop();
																													   n++;
																												   }
																												   int res = m / 2 + n % 2;
																												   cout << res << endl;
																											   } int main()
																											   {
																												   int T;
																												   cin >> T;
																												   while (T--)
																												   {
																													   string str;
																													   cin >> str;
																													   solve(str);
																												   }
																											   } BI
																																   ? N
																																   ? ? I TI
																																   ? N T
																																   ? -TRUNG T
																																   ? B�i l�m t
																																   ? t nh
																																   ? t H�y vi
																																   ? t ch
																																   ? ? ng tr�nh chuy
																																   ? n
																																   ? ? i bi
																																   ? u th
																																   ? c bi
																																   ? u di
																																   ? n d
																																   ? ? i d
																																   ? ng ti
																																   ? n t
																																   ? v
																																   ? d
																																   ? ng trung t ?.Input : ? D�ng ? ? u ti�n ? ? a v�o s ? l ? ? ng b ? test T;
																																   ? Nh ? ng d�ng ti ? p theo m ? i d�ng ? ? a v�o m ? t b ? test.M ? i b ? test l� m ? t bi ? u th ? c ti ? n t ? exp.Output : ? ? ? a ra k ? t qu ? m ? i test theo t ? ng d�ng.R�ng bu ? c : ? T, exp th ? a m�n r�ng bu ? c : 1 ? T ? 100;
																											   2 ? length(exp) ? 106. V� d ?: Input Output 2 * +AB - CD * -A / BC - / AKL((A + B) * (C - D))((A - (B / C)) * ((A / K) - L)

#include <bits/stdc++.h>
																																																								 using namespace std;
																																																			 bool isOperator(char c)
																																																			 {
																																																				 if (c == '*' || c == '/' || c == '+' || c == '-')
																																																					 return true;
																																																				 return false;
																																																			 } void solve(string str)
																																																			 {
																																																				 stack<string> s;
																																																				 for (int i = str.length() - 1; i >= 0; i--)
																																																				 {
																																																					 if (isOperator(str[i]))
																																																					 {
																																																						 string str1 = s.top();
																																																						 s.pop();
																																																						 string str2 = s.top();
																																																						 s.pop();
																																																						 string tmp = "(" + str1 + str[i] + str2 + ")";
																																																						 s.push(tmp);
																																																					 }
																																																					 else
																																																						 s.push(string(1, str[i]));
																																																				 }
																																																				 cout << s.top() << endl;
																																																			 } int main()
																																																			 {
																																																				 int t;
																																																				 cin >> t;
																																																				 while (t--)
																																																				 {
																																																					 string s;
																																																					 cin >> s;
																																																					 solve(s);
																																																				 }
																																																			 }
�BI
																																																								 ? N
																																																								 ? ? I TI
																																																								 ? N T
																																																								 ? -H
																																																								 ? U T
																																																								 ? B�i l�m t
																																																								 ? t nh
																																																								 ? t
�� H�y vi
																																																								 ? t ch
																																																								 ? ? ng tr�nh chuy
																																																								 ? n
																																																								 ? ? i bi
																																																								 ? u th
																																																								 ? c bi
																																																								 ? u di
																																																								 ? n d
																																																								 ? ? i d
																																																								 ? ng ti
																																																								 ? n t
																																																								 ? v
																																																								 ? d
																																																								 ? ng h
																																																								 ? u t ?.Input : ? D�ng ? ? u ti�n ? ? a v�o s ? l ? ? ng b ? test T;
																																																								 ? Nh ? ng d�ng ti ? p theo m ? i d�ng ? ? a v�o m ? t b ? test.M ? i b ? test l� m ? t bi ? u th ? c ti ? n t ? exp.Output : ? ? ? a ra k ? t qu ? m ? i test theo t ? ng d�ng.R�ng bu ? c : ? T, exp th ? a m�n r�ng bu ? c : 1 ? T ? 100;
																																																			 2 ? length(exp) ? 106. V� d ?: Input Output 2 * +AB - CD * -A / BC - / AKL AB + CD - *ABC / -AK / L - *
�
#include <bits/stdc++.h>
																																																																												   using namespace std;
																																																			 bool isOperator(char c)
																																																			 {
																																																				 if (c == '*' || c == '/' || c == '+' || c == '-')
																																																					 return true;
																																																				 return false;
																																																			 } void solve(string str)
																																																			 {
																																																				 stack<string> s;
																																																				 int length = str.size();
																																																				 for (int i = length - 1; i >= 0; i--)
																																																				 {
																																																					 if (isOperator(str[i]))
																																																					 {
																																																						 string op1 = s.top();
																																																						 s.pop();
																																																						 string op2 = s.top();
																																																						 s.pop();
																																																						 string temp = op1 + op2 + str[i];
																																																						 s.push(temp);
																																																					 }
																																																					 else
																																																					 {
																																																						 s.push(string(1, str[i]));
																																																					 }
																																																				 }
																																																				 cout << s.top() << endl;
																																																			 } int main()
																																																			 {
																																																				 int t;
																																																				 cin >> t;
																																																				 cin.ignore();
																																																				 while (t--)
																																																				 {
																																																					 string s;
																																																					 getline(cin, s);
																																																					 solve(s);
																																																				 }
																																																			 } H�y vi
																																																								 ? t ch
																																																								 ? ? ng tr�nh chuy
																																																								 ? n t�nh to�n gi� tr
																																																								 ? c
																																																								 ? a bi
																																																								 ? u th
																																																								 ? c h
																																																								 ? u t ?.Input : ? D�ng ? ? u ti�n ? ? a v�o s ? l ? ? ng b ? test T;
																																																								 ? Nh ? ng d�ng ti ? p theo m ? i d�ng ? ? a v�o m ? t b ? test.M ? i b ? test l� m ? t bi ? u th ? c h ? u t ? exp.C�c s ? xu ? t hi ? n trong bi ? u th ? c l� c�c s ? ? ? n c� 1 ch ? s ?.Output : ? ? ? a ra k ? t qu ? m ? i test theo t ? ng d�ng, ch ? l ? y gi� tr ? ph ? n nguy�n.R�ng bu ? c : ? T, exp th ? a m�n r�ng bu ? c : 1 ? T ? 100;
																																																			 2 ? length(exp) ? 20. V� d ?: Input Output 2 231 * +9� 875 * +9 - -4 34
�
#include <bits/stdc++.h>
																																																																			   using namespace std;
																																																			 bool isOperator(char c)
																																																			 {
																																																				 if (c == '*' || c == '/' || c == '+' || c == '-')
																																																					 return true;
																																																				 return false;
																																																			 } void solve(string str)
																																																			 {
																																																				 stack<int> s;
																																																				 for (int i = 0; i < str.length(); i++)
																																																				 {
																																																					 if (isOperator(str[i]))
																																																					 {
																																																						 int x1 = s.top();
																																																						 s.pop();
																																																						 int x2 = s.top();
																																																						 s.pop();
																																																						 switch (str[i])
																																																						 {
																																																						 case '+':
																																																							 s.push(x2 + x1);
																																																							 break;
																																																						 case '-':
																																																							 s.push(x2 - x1);
																																																							 break;
																																																						 case '*':
																																																							 s.push(x2 * x1);
																																																							 break;
																																																						 case '/':
																																																							 s.push(x2 / x1);
																																																							 break;
																																																						 }
																																																					 }
																																																					 else
																																																					 {
																																																						 s.push(str[i] - '0');
																																																					 }
																																																				 }
																																																				 cout << s.top() << endl;
																																																			 } int main()
																																																			 {
																																																				 int t;
																																																				 cin >> t;
																																																				 cin.ignore();
																																																				 while (t--)
																																																				 {
																																																					 string s;
																																																					 getline(cin, s);
																																																					 solve(s);
																																																				 }
																																																			 }
�T�NH GI� TR
																																																								 ? BI
																																																								 ? U TH
																																																								 ? C TI
																																																								 ? N T
																																																								 ? B�i l�m t
																																																								 ? t nh
																																																								 ? t H�y vi
																																																								 ? t ch
																																																								 ? ? ng tr�nh t�nh to�n gi� tr
																																																								 ? c
																																																								 ? a bi
																																																								 ? u th
																																																								 ? c ti
																																																								 ? n t ?.Input : ? D�ng ? ? u ti�n ? ? a v�o s ? l ? ? ng b ? test T;
																																																								 ? Nh ? ng d�ng ti ? p theo m ? i d�ng ? ? a v�o m ? t b ? test.M ? i b ? test l� m ? t bi ? u th ? c ti ? n t ? exp.C�c s ? xu ? t hi ? n trong bi ? u th ? c l� c�c s ? ? ? n c� 1 ch ? s ?.Output : ? ? ? a ra k ? t qu ? m ? i test theo t ? ng d�ng, ch ? l ? y gi� tr ? ph ? n nguy�n.R�ng bu ? c : ? T, exp th ? a m�n r�ng bu ? c : 1 ? T ? 100;
																																																			 2 ? length(exp) ? 20. V� d ?: Input Output 2 - +8 / 632 - +7 * 45 + 20 8 25
�
#include <bits/stdc++.h>
																																																											   using namespace std;
																																																			 bool isOperator(char c)
																																																			 {
																																																				 if (c == '*' || c == '/' || c == '+' || c == '-')
																																																					 return true;
																																																				 return false;
																																																			 } void solve(string str)
																																																			 {
																																																				 stack<int> s;
																																																				 for (int i = str.length() - 1; i >= 0; i--)
																																																				 {
																																																					 if (isOperator(str[i]))
																																																					 {
																																																						 int x1 = s.top();
																																																						 s.pop();
																																																						 int x2 = s.top();
																																																						 s.pop();
																																																						 switch (str[i])
																																																						 {
																																																						 case '+':
																																																							 s.push(x1 + x2);
																																																							 break;
																																																						 case '-':
																																																							 s.push(x1 - x2);
																																																							 break;
																																																						 case '*':
																																																							 s.push(x1 * x2);
																																																							 break;
																																																						 case '/':
																																																							 s.push(x1 / x2);
																																																							 break;
																																																						 }
																																																					 }
																																																					 else
																																																					 {
																																																						 s.push(str[i] - '0');
																																																					 }
																																																				 }
																																																				 cout << s.top() << endl;
																																																			 } int main()
																																																			 {
																																																				 int t;
																																																				 cin >> t;
																																																				 cin.ignore();
																																																				 while (t--)
																																																				 {
																																																					 string s;
																																																					 getline(cin, s);
																																																					 solve(s);
																																																				 }
																																																			 } PH
																																																								 ? N T
																																																								 ? B�N PH
																																																								 ? I
																																																								 ? ? U TI�N L
																																																								 ? N H
																																																								 ? N B�i l�m t
																																																								 ? t nh
																																																								 ? t Cho d�y s
																																																								 ? A[] g
																																																								 ? m N ph
																																																								 ? n t
																																																								 ?.V
																																																								 ? i m
																																																								 ? i A[i],
																																																			 b ? n c ? n t�m ph ? n t ? b�n ph ? i ? ? u ti�n l ? n h ? n n�.N ? u kh�ng t ? n t ? i, in ra - 1. Input : D�ng ? ? u ti�n l� s ? l ? ? ng b ? test T(T ? 20).M ? i test b ? t ? ? u b ? i s ? nguy�n N(1 ? N ? 100000).D�ng ti ? p theo g ? m N s ? nguy�n A[i](0 ? A[i] ? 109).Output :� V ? i m ? i test, in ra tr�n m ? t d�ng N s ? R[i], v ? i R[i] l� gi� tr ? ph ? n t ? ? ? u ti�n l ? n h ? n A[i].V� d ? Input Output 3 4 4 5 2 25 3 2 2 2 4 4 4 5 5 5 25 25 - 1 - 1 - 1 - 1 5 5 - 1 - 1
�
#include <bits/stdc++.h>
																																																																																																																																																									  typedef long long ll;
																																																			 using namespace std; void solve(ll arr[], int n)
																																																			 {
																																																				 stack<ll> s;
																																																				 ll ans[n];
																																																				 for (int i = n - 1; i >= 0; i--)
																																																				 {
																																																					 while (!s.empty() && arr[i] >= s.top())
																																																						 s.pop();
																																																					 if (s.empty())
																																																						 ans[i] = -1;
																																																					 else
																																																						 ans[i] = s.top();
																																																					 s.push(arr[i]);
																																																				 }
																																																				 for (int i = 0; i < n; i++)
																																																					 cout << ans[i] << " ";
																																																				 cout << endl;
																																																			 } int main()
																																																			 {
																																																				 int t;
																																																				 cin >> t;
																																																				 while (t--)
																																																				 {
																																																					 int n;
																																																					 cin >> n;
																																																					 ll *arr = new ll[n];
																																																					 for (int i = 0; i < n; i++)
																																																						 cin >> arr[i];
																																																					 solve(arr, n);
																																																					 delete arr;
																																																				 }
																																																			 }

// ĐẢO TỪ
// Bài làm tốt nhất
// Cho xâu ký tự S. Nhiệm vụ của bạn là đảo ngược các từ trong S. Ví dụ S =  “I like this program very much”, ta nhận được kết quả là “much very program this like I”.
// Input:
// •	Dòng đầu tiên đưa vào số lượng bộ test T.
// •	Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test là một xâu ký tự S.
// •	T, S thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ Length(S)≤103.
// Output:
// •	Đưa ra kết quả mỗi test theo từng dòng.
// Ví dụ:
// Input:	Output:
// 2
// I like this program very much
// much very program this like I	much very program this like I
// I like this program very much

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


�H�NH CH
																																																								 ? NH
																																																								 ? T L
																																																								 ? N NH
																																																								 ? T B�i l�m t
																																																								 ? t nh
																																																								 ? t Cho N c
																																																								 ? t,
																																																			 m ? i c ? t c� chi ? u cao b ? ng H[i].B ? n h�y t�m h�nh ch ? nh ? t l ? n nh ? t b ? che ph ? b ? i c�c c ? t ?

																																																																																				 Input
																																																																																					 : D�ng
																																																																																				   ? ? u ti�n l� s
																																																																																				   ? l
																																																																																				   ? ? ng b
																																																																																				   ? test T(T ? 20).M
																																																																																				   ? i test b
																																																																																				   ? t
																																																																																				   ? ? u b
																																																																																				   ? i s
																																																																																				   ? nguy�n N(N ? 100 000).D�ng ti
																																																																																				   ? p theo g
																																																																																				   ? m N s
																																																																																				   ? nguy�n H[i](1 ? H[i] ? 109).Output :� V ? i m ? i test, in ra di ? n t�ch h�nh ch ? nh ? t l ? n nh ? t t�m ? ? ? c.V� d ?: Input Output 2 7 6 2 5 4 5 1 6 3 2 2 2
� 12 6
#include <bits/stdc++.h>
																																																																																																													   typedef long long ll;
																																																																															   using namespace std; void solve(ll arr[], int n)
																																																																															   {
																																																																																   stack<int> s;
																																																																																   ll res = 0, tp, area;
																																																																																   int i = 0;
																																																																																   while (i < n)
																																																																																   {
																																																																																	   if (s.empty() || arr[s.top()] < arr[i])
																																																																																		   s.push(i++);
																																																																																	   else
																																																																																	   {
																																																																																		   tp = s.top();
																																																																																		   s.pop();
																																																																																		   area = arr[tp] * (s.empty() ? i : i - s.top() - 1);
																																																																																		   if (area > res)
																																																																																			   res = area;
																																																																																	   }
																																																																																   }
																																																																																   while (!s.empty())
																																																																																   {
																																																																																	   tp = s.top();
																																																																																	   s.pop();
																																																																																	   area = arr[tp] * (s.empty() ? i : i - s.top() - 1);
																																																																																	   if (area > res)
																																																																																		   res = area;
																																																																																   }
																																																																																   cout << res << endl;
																																																																															   } int main()
																																																																															   {
																																																																																   int t;
																																																																																   cin >> t;
																																																																																   while (t--)
																																																																																   {
																																																																																	   int n;
																																																																																	   cin >> n;
																																																																																	   ll *arr = new ll[n];
																																																																																	   for (int i = 0; i < n; i++)
																																																																																		   cin >> arr[i];
																																																																																	   solve(arr, n);
																																																																																	   delete arr;
																																																																																   }
																																																																															   }

																																																																															   BI
																																																																																				   ? N
																																																																																				   ? ? I TRUNG T
																																																																																				   ? -H
																																																																																				   ? U T
																																																																																				   ? B�i l�m t
																																																																																				   ? t nh
																																																																																				   ? t H�y vi
																																																																																				   ? t ch
																																																																																				   ? ? ng tr�nh chuy
																																																																																				   ? n
																																																																																				   ? ? i bi
																																																																																				   ? u th
																																																																																				   ? c bi
																																																																																				   ? u di
																																																																																				   ? n d
																																																																																				   ? ? i d
																																																																																				   ? ng trung t
																																																																																				   ? v
																																																																																				   ? d
																																																																																				   ? ng h
																																																																																				   ? u t ?.Input : ? D�ng ? ? u ti�n ? ? a v�o s ? l ? ? ng b ? test T;
																																																																																				   ? Nh ? ng d�ng ti ? p theo m ? i d�ng ? ? a v�o m ? t b ? test.M ? i b ? test l� m ? t bi ? u th ? c ti ? n t ? exp.Output : ? ? ? a ra k ? t qu ? m ? i test theo t ? ng d�ng.R�ng bu ? c : ? T, exp th ? a m�n r�ng bu ? c : 1 ? T ? 100;
																																																																															   2 ? length(exp) ? 10. V� d ?: Input Output 2(
																																																																																								 A + (B + C)((A * B) + C) ABC++ AB * C +
�
#include <bits/stdc++.h>
																																																																																								 using namespace std;
																																																																																								 int prec(char c)
																																																																																								 {
																																																																																									 if (c == '^')
																																																																																										 return 3;
																																																																																									 else if (c == '*' || c == '/')
																																																																																										 return 2;
																																																																																									 else if (c == '+' || c == '-')
																																																																																										 return 1;
																																																																																									 else
																																																																																										 return -1;
																																																																																								 } void solve(string s)
																																																																																								 {
																																																																																									 stack<char> st;
																																																																																									 int l = s.length();
																																																																																									 string ns;
																																																																																									 for (int i = 0; i < l; i++)
																																																																																									 {
																																																																																										 if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
																																																																																											 ns += s[i];
																																																																																										 else if (s[i] == '(')
																																																																																											 st.push('(');
																																																																																										 else if (s[i] == ')')
																																																																																										 {
																																																																																											 while (!st.empty() && st.top() != '(')
																																																																																											 {
																																																																																												 char c = st.top();
																																																																																												 st.pop();
																																																																																												 ns += c;
																																																																																											 }
																																																																																											 if (st.top() == '(')
																																																																																												 st.pop();
																																																																																										 }
																																																																																										 else
																																																																																										 {
																																																																																											 while (!st.empty() && prec(s[i]) <= prec(st.top()))
																																																																																											 {
																																																																																												 char c = st.top();
																																																																																												 st.pop();
																																																																																												 ns += c;
																																																																																											 }
																																																																																											 st.push(s[i]);
																																																																																										 }
																																																																																									 }
																																																																																									 while (!st.empty())
																																																																																									 {
																																																																																										 char c = st.top();
																																																																																										 st.pop();
																																																																																										 if (c != '(')
																																																																																											 ns += c;
																																																																																									 }
																																																																																									 cout << ns << endl;
																																																																																								 } int main()
																																																																																								 {
																																																																																									 int t;
																																																																																									 cin >> t;
																																																																																									 cin.ignore();
																																																																																									 while (t--)
																																																																																									 {
																																																																																										 string s;
																																																																																										 cin >> s;
																																																																																										 solve(s);
																																																																																									 }
																																																																																									 return 0;
																																																																																								 }

																																																																																								 BI
																																																																																													 ? N
																																																																																													 ? ? I H
																																																																																													 ? U T
																																																																																													 ? -TI
																																																																																													 ? N T
																																																																																													 ? B�i l�m t
																																																																																													 ? t nh
																																																																																													 ? t H�y vi
																																																																																													 ? t ch
																																																																																													 ? ? ng tr�nh chuy
																																																																																													 ? n
																																																																																													 ? ? i bi
																																																																																													 ? u th
																																																																																													 ? c bi
																																																																																													 ? u di
																																																																																													 ? n d
																																																																																													 ? ? i d
																																																																																													 ? ng h
																																																																																													 ? u t
																																																																																													 ? v
																																																																																													 ? d
																																																																																													 ? ng ti
																																																																																													 ? n t ?.Input : ? D�ng ? ? u ti�n ? ? a v�o s ? l ? ? ng b ? test T;
																																																																																													 ? Nh ? ng d�ng ti ? p theo m ? i d�ng ? ? a v�o m ? t b ? test.M ? i b ? test l� m ? t bi ? u th ? c ti ? n t ? exp.Output : ? ? ? a ra k ? t qu ? m ? i test theo t ? ng d�ng.R�ng bu ? c : ? T, exp th ? a m�n r�ng bu ? c : 1 ? T ? 100;
																																																																																								 2 ? length(exp) ? 106. V�� d ?: Input Output 2 AB + CD - *ABC / -AK / L - **+AB - CD * -A / BC - / AKL

#include <bits/stdc++.h>
																																																																																																																	  using namespace std;
																																																																																								 bool isOperator(char c)
																																																																																								 {
																																																																																									 if (c == '*' || c == '/' || c == '+' || c == '-')
																																																																																										 return true;
																																																																																									 return false;
																																																																																								 } void solve(string str)
																																																																																								 {
																																																																																									 stack<string> s;
																																																																																									 for (int i = 0; i < str.length(); i++)
																																																																																									 {
																																																																																										 if (isOperator(str[i]))
																																																																																										 {
																																																																																											 string str1 = s.top();
																																																																																											 s.pop();
																																																																																											 string str2 = s.top();
																																																																																											 s.pop();
																																																																																											 string tmp = str[i] + str2 + str1;
																																																																																											 s.push(tmp);
																																																																																										 }
																																																																																										 else
																																																																																											 s.push(string(1, str[i]));
																																																																																									 }
																																																																																									 cout << s.top() << endl;
																																																																																								 } int main()
																																																																																								 {
																																																																																									 int t;
																																																																																									 cin >> t;
																																																																																									 cin.ignore();
																																																																																									 while (t--)
																																																																																									 {
																																																																																										 string s;
																																																																																										 getline(cin, s);
																																																																																										 solve(s);
																																																																																									 }
																																																																																								 }

�BI
																																																																																													 ? N
																																																																																													 ? ? I H
																																																																																													 ? U T
																																																																																													 ? -TI
																																																																																													 ? N T
																																																																																													 ? B�i l�m t
																																																																																													 ? t nh
																																																																																													 ? t H�y vi
																																																																																													 ? t ch
																																																																																													 ? ? ng tr�nh chuy
																																																																																													 ? n
																																																																																													 ? ? i bi
																																																																																													 ? u th
																																																																																													 ? c bi
																																																																																													 ? u di
																																																																																													 ? n d
																																																																																													 ? ? i d
																																																																																													 ? ng h
																																																																																													 ? u t
																																																																																													 ? v
																																																																																													 ? d
																																																																																													 ? ng ti
																																																																																													 ? n t ?.Input : ? D�ng ? ? u ti�n ? ? a v�o s ? l ? ? ng b ? test T;
																																																																																													 ? Nh ? ng d�ng ti ? p theo m ? i d�ng ? ? a v�o m ? t b ? test.M ? i b ? test l� m ? t bi ? u th ? c ti ? n t ? exp.Output : ? ? ? a ra k ? t qu ? m ? i test theo t ? ng d�ng.R�ng bu ? c : ? T, exp th ? a m�n r�ng bu ? c : 1 ? T ? 100;
																																																																																								 2 ? length(exp) ? 106. V�� d ?: Input Output 2 AB + CD - *ABC / -AK / L - **+AB - CD * -A / BC - / AKL

#include <bits/stdc++.h>
																																																																																																																	  using namespace std;
																																																																																								 bool isOperator(char c)
																																																																																								 {
																																																																																									 if (c == '*' || c == '/' || c == '+' || c == '-')
																																																																																										 return true;
																																																																																									 return false;
																																																																																								 } void solve(string str)
																																																																																								 {
																																																																																									 stack<string> s;
																																																																																									 for (int i = 0; i < str.length(); i++)
																																																																																									 {
																																																																																										 if (isOperator(str[i]))
																																																																																										 {
																																																																																											 string str1 = s.top();
																																																																																											 s.pop();
																																																																																											 string str2 = s.top();
																																																																																											 s.pop();
																																																																																											 string tmp = str[i] + str2 + str1;
																																																																																											 s.push(tmp);
																																																																																										 }
																																																																																										 else
																																																																																											 s.push(string(1, str[i]));
																																																																																									 }
																																																																																									 cout << s.top() << endl;
																																																																																								 } int main()
																																																																																								 {
																																																																																									 int t;
																																																																																									 cin >> t;
																																																																																									 cin.ignore();
																																																																																									 while (t--)
																																																																																									 {
																																																																																										 string s;
																																																																																										 getline(cin, s);
																																																																																										 solve(s);
																																																																																									 }
																																																																																								 }

																																																																																								 BI
																																																																																													 ? N
																																																																																													 ? ? I H
																																																																																													 ? U T
																																																																																													 ? -TRUNG T
																																																																																													 ? B�i l�m t
																																																																																													 ? t nh
																																																																																													 ? t H�y vi
																																																																																													 ? t ch
																																																																																													 ? ? ng tr�nh chuy
																																																																																													 ? n
																																																																																													 ? ? i bi
																																																																																													 ? u th
																																																																																													 ? c bi
																																																																																													 ? u di
																																																																																													 ? n d
																																																																																													 ? ? i d
																																																																																													 ? ng h
																																																																																													 ? u t
																																																																																													 ? v
																																																																																													 ? d
																																																																																													 ? ng trung t ?.Input : ? D�ng ? ? u ti�n ? ? a v�o s ? l ? ? ng b ? test T;
																																																																																													 ? Nh ? ng d�ng ti ? p theo m ? i d�ng ? ? a v�o m ? t b ? test.M ? i b ? test l� m ? t bi ? u th ? c ti ? n t ? exp.? T, exp th ? a m�ng r�ng bu ? c : 1 ? T ? 100;
																																																																																								 2 ? length(exp) ? 106. Output : ? ? ? a ra k ? t qu ? m ? i test theo t ? ng d�ng.R�ng bu ? c : ? T, exp th ? a m�n r�ng bu ? c : 1 ? T ? 100; 2 ? length(exp) ? 106. V� d ?: Input Output 2 ABC++ AB * C + (
																																																																																																																																												 A + (B + C)((A * B) + C)

#include <bits/stdc++.h>
																																																																																																																																														 using namespace std;
																																																																																																																																												 bool isOperator(char c)
																																																																																																																																												 {
																																																																																																																																													 if (c == '*' || c == '/' || c == '+' || c == '-')
																																																																																																																																														 return true;
																																																																																																																																													 return false;
																																																																																																																																												 } void solve(string str)
																																																																																																																																												 {
																																																																																																																																													 stack<string> s;
																																																																																																																																													 for (int i = 0; i < str.length(); i++)
																																																																																																																																													 {
																																																																																																																																														 if (isOperator(str[i]))
																																																																																																																																														 {
																																																																																																																																															 string str1 = s.top();
																																																																																																																																															 s.pop();
																																																																																																																																															 string str2 = s.top();
																																																																																																																																															 s.pop();
																																																																																																																																															 string tmp = "(" + str2 + str[i] + str1 + ")";
																																																																																																																																															 s.push(tmp);
																																																																																																																																														 }
																																																																																																																																														 else
																																																																																																																																															 s.push(string(1, str[i]));
																																																																																																																																													 }
																																																																																																																																													 cout << s.top() << endl;
																																																																																																																																												 } int main()
																																																																																																																																												 {
																																																																																																																																													 int t;
																																																																																																																																													 cin >> t;
																																																																																																																																													 cin.ignore();
																																																																																																																																													 while (t--)
																																																																																																																																													 {
																																																																																																																																														 string s;
																																																																																																																																														 getline(cin, s);
																																																																																																																																														 solve(s);
																																																																																																																																													 }
																																																																																																																																												 }

																																																																																																																																												 BI
																																																																																																																																																	 ? U TH
																																																																																																																																																	 ? C T
																																																																																																																																																	 ? NG GI
																																																																																																																																																	 ? M B�i l�m t
																																																																																																																																																	 ? t nh
																																																																																																																																																	 ? t Cho d�y k� t
																																																																																																																																																	 ? S ch
																																																																																																																																																	 ? bao g
																																																																																																																																																	 ? m c�c k� t
																																																																																																																																																	 ? I ho
																																																																																																																																																	 ? c D.K� t
																																																																																																																																																	 ? I
																																																																																																																																																	 ? ? ? c hi
																																																																																																																																																	 ? u l� t
																																																																																																																																																	 ? ng(Increasing) k� t
																																																																																																																																																	 ? D
																																																																																																																																																	 ? ? ? c hi
																																																																																																																																																	 ? u l� gi
																																																																																																																																																	 ? m(Decreasing).S
																																																																																																																																																	 ? d
																																																																																																																																																	 ? ng c�c s
																																																																																																																																																	 ? t
																																																																																																																																																	 ? 1
																																																																																																																																																	 ?	 ? n 9,
																																																																																																																																												 h�y ? ? a ra s ? nh ? nh ? t ? ? ? c ? o�n nh ? n t ? S.Ch� �, c�c s ? kh�ng ? ? ? c ph�p l ? p l ? i.D ? ? i ?�y l� m ? t s ? v� d ? m ? u : ? A[] = �I� ������������
																																																																																																																																																																																				   : s
																																																																																																																																																																																				   ? t
																																																																																																																																																																																				   ? ng nh
																																																																																																																																																																																				   ? nh
																																																																																																																																																																																				   ? t l� 12. ? A[] = �D������������ : s ? gi ? m nh ? nh ? t l� 21 ? A[] =�DD����������� : s ? gi ? m nh ? nh ? t l� 321 ? A[] = �DDIDDIID�: s ? th ? a m�n 321654798 Input : ? D�ng ? ? u ti�n ? ? a v�o s ? l ? ? ng b ? test T.? Nh ? ng d�ng k ? ti ? p ? ? a v�o T b ? test.M ? i b ? test l� m ? t x�u S ? T,
																																																																																																																																												 S th ? a m�n r�ng bu ? c : 1 ? T ? 100;
																																																																																																																																												 1 ? length(S) ? 8;.Output : ? ? ? a ra k ? t qu ? m ? i test theo t ? ng d�ng.V� d ?: Input : Output : 4 I D DD DDIDDIID 12 21 321 321654798

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

																																																																																																																																												 PH
																																																																																																																																																	 ? N T
																																																																																																																																																	 ? B�N PH
																																																																																																																																																	 ? I NH
																																																																																																																																																	 ? H
																																																																																																																																																	 ? N B�i l�m t
																																																																																																																																																	 ? t nh
																																																																																																																																																	 ? t Cho m
																																																																																																																																																	 ? ng A[] g
																																																																																																																																																	 ? m n ph
																																																																																																																																																	 ? n t
																																																																																																																																																	 ?.H�y
																																																																																																																																																	 ? ? a ra c�c ph
																																																																																																																																																	 ? n t
																																																																																																																																																	 ? nh
																																																																																																																																																	 ? h
																																																																																																																																																	 ? n ti
																																																																																																																																																	 ? p theo c
																																																																																																																																																	 ? a ph
																																																																																																																																																	 ? n t
																																																																																																																																																	 ? l
																																																																																																																																																	 ? n h
																																																																																																																																																	 ? n
																																																																																																																																																	 ? ? u ti�n ph
																																																																																																																																																	 ? n t
																																																																																																																																																	 ? hi
																																																																																																																																																	 ? n t
																																																																																																																																																	 ? i.N
																																																																																																																																																	 ? u ph
																																																																																																																																																	 ? n t
																																																																																																																																																	 ? hi
																																																																																																																																																	 ? n t
																																																																																																																																																	 ? i kh�ng c� ph
																																																																																																																																																	 ? n t
																																																																																																																																																	 ? l
																																																																																																																																																	 ? n h
																																																																																																																																																	 ? n ti
																																																																																																																																																	 ? p theo ta xem l� - 1. N
																																																																																																																																																	 ? u ph
																																																																																																																																																	 ? n t
																																																																																																																																																	 ? kh�ng c� ph
																																																																																																																																																	 ? n t
																																																																																																																																																	 ? nh
																																																																																																																																																	 ? h
																																																																																																																																																	 ? n ti
																																																																																																																																																	 ? p theo ta c
																																																																																																																																																	 ? ng xem l� - 1. V� d
																																																																																																																																																	 ? v
																																																																																																																																																	 ? i m
																																																																																																																																																	 ? ng A[] = {5, 1, 9, 2, 5, 1, 7} ta c� k ? t qu ? l� ans = {2, 2, -1, 1, -1, -1, -1} v�: Next Greater������������������������ Right Smaller 5��������� ->� 9��������������������������������������� 9� ->� 2 1��������� ->� 9��������������������������������������� 9� ->� 2 9��������� ->- 1�������������������������������������� - 1->- 1 2��������� ->5���������������������������������������� 5�� ->1 5��������� ->7���������������������������������������� 7� ->- 1 1��������� ->� 7��������������������������������������� 7->- 1 7��������� ->- 1�������������������������������������� 7->- 1 Input : ? D�ng ? ? u ti�n ? ? a v�o s ? l ? ? ng b ? test T;
																																																																																																																																																	 ? Nh ? ng d�ng ti ? p theo m ? i d�ng ? ? a v�o m ? t b ? test.M ? i b ? test g ? m hai d�ng : d�ng th ? nh ? t ? ? a v�o n l� s ? ph ? n t ? c ? a m ? ng A[], d�ng ti ? p theo ? ? a v�o n s ? A[i].Output : ? ? ? a ra k ? t qu ? m ? i test theo t ? ng d�ng.R�ng bu ? c : ? T, n, A[i] th ? a m�n r�ng bu ? c : 1 ? T ? 100;
																																																																																																																																												 1 ? n, A[i] ? 106. V� d ?: Input Output 2 7 5 1 9 2 5 1 7 8 4 8 2 1 9 5 6 3 2 2 1 1 - 1 - 1 - 1 2 5 5 5 - 1 3 - 1 - 1
�

#include <bits/stdc++.h>
																																																																																																																																																				using namespace std;
																																																																																																																																												 void nextGreater(int arr[], int n, int next[], char order)
																																																																																																																																												 {
																																																																																																																																													 stack<int> S;
																																																																																																																																													 for (int i = n - 1; i >= 0; i--)
																																																																																																																																													 {
																																																																																																																																														 while (!S.empty() && ((order == 'G') ? arr[S.top()] <= arr[i] : arr[S.top()] >= arr[i]))
																																																																																																																																															 S.pop();
																																																																																																																																														 if (S.empty())
																																																																																																																																															 next[i] = -1;
																																																																																																																																														 else
																																																																																																																																															 next[i] = S.top();
																																																																																																																																														 S.push(i);
																																																																																																																																													 }
																																																																																																																																												 } void solve(int arr[], int n)
																																																																																																																																												 {
																																																																																																																																													 int NG[n];
																																																																																																																																													 int RS[n];
																																																																																																																																													 nextGreater(arr, n, NG, 'G');
																																																																																																																																													 nextGreater(arr, n, RS, 'S');
																																																																																																																																													 for (int i = 0; i < n; i++)
																																																																																																																																													 {
																																																																																																																																														 if (NG[i] != -1 && RS[NG[i]] != -1)
																																																																																																																																															 cout << arr[RS[NG[i]]] << " ";
																																																																																																																																														 else
																																																																																																																																															 cout << "-1"
																																																																																																																																																  << " ";
																																																																																																																																													 }
																																																																																																																																													 cout << endl;
																																																																																																																																												 } int main()
																																																																																																																																												 {
																																																																																																																																													 int t;
																																																																																																																																													 cin >> t;
																																																																																																																																													 while (t--)
																																																																																																																																													 {
																																																																																																																																														 int n;
																																																																																																																																														 cin >> n;
																																																																																																																																														 int *arr = new int[n];
																																																																																																																																														 for (int i = 0; i < n; i++)
																																																																																																																																															 cin >> arr[i];
																																																																																																																																														 solve(arr, n);
																																																																																																																																														 delete arr;
																																																																																																																																													 }
																																																																																																																																												 }

																																																																																																																																												 GI
																																																																																																																																																	 ? I M� X�U K� T
																																																																																																																																																	 ? B�i l�m t
																																																																																																																																																	 ? t nh
																																																																																																																																																	 ? t Cho x�u k� t
																																																																																																																																																	 ? m� h�a str.H�y vi
																																																																																																																																																	 ? t ch
																																																																																																																																																	 ? ? ng tr�nh gi
																																																																																																																																																	 ? i m� x�u k� t
																																																																																																																																																	 ? str.X�u k� t
																																																																																																																																																	 ? m� h�a
																																																																																																																																																	 ? ? ? c th
																																																																																																																																																	 ? c hi
																																																																																																																																																	 ? n theo s
																																																																																																																																																	 ? l
																																																																																																																																																	 ? n l
																																																																																																																																																	 ? p c�c x�u con c ? a str nh ? sau : X�u	? ? u v�o : �abbbababbbababbbab�� X�u m� h�a
																																																																																																																																																												: "3[a3[b]1[ab]]" Input
																																																																																																																																																					   :
																																																																																																																																																					   ? D�ng
																																																																																																																																																		   ? ? u ti�n
																																																																																																																																																		   ? ? a v�o s
																																																																																																																																																		   ? l
																																																																																																																																																		   ? ? ng b
																																																																																																																																																		   ? test T;
																																																																																																																																																	 ? Nh ? ng d�ng ti ? p theo m ? i d�ng ? ? a v�o m ? t b ? test.M ? i b ? test l� m ? t x�u m� h�a str ? ? ? c vi ? t tr�n m ? t d�ng.Output : ? ? ? a ra k ? t qu ? m ? i test theo t ? ng d�ng.R�ng bu ? c : ? T, str th ? a m�n r�ng bu ? c : 1 ? T ? 100;
																																																																																																																																												 1 ? length(str) ? 100. V� d ?: Input Output 2 1 [b] 3 [b2[ca]] b bcacabcacabcaca

#include <bits/stdc++.h>
																																																																																																																																																	   using namespace std;
																																																																																																																																												 void solve(string str)
																																																																																																																																												 {
																																																																																																																																													 stack<int> ig;
																																																																																																																																													 stack<char> sg;
																																																																																																																																													 string tmp = "", res = "";
																																																																																																																																													 for (int i = 0; i < str.length(); i++)
																																																																																																																																													 {
																																																																																																																																														 int num = 0;
																																																																																																																																														 if (str[i] >= '0' && str[i] <= '9')
																																																																																																																																														 {
																																																																																																																																															 while (str[i] >= '0' && str[i] <= '9')
																																																																																																																																															 {
																																																																																																																																																 num = num * 10 + str[i] - '0';
																																																																																																																																																 i++;
																																																																																																																																															 }
																																																																																																																																															 i--;
																																																																																																																																															 ig.push(num);
																																																																																																																																														 }
																																																																																																																																														 else if (str[i] == ']')
																																																																																																																																														 {
																																																																																																																																															 tmp = "";
																																																																																																																																															 num = 0;
																																																																																																																																															 if (!ig.empty())
																																																																																																																																															 {
																																																																																																																																																 num = ig.top();
																																																																																																																																																 ig.pop();
																																																																																																																																															 }
																																																																																																																																															 while (!sg.empty() && sg.top() != '[')
																																																																																																																																															 {
																																																																																																																																																 tmp = sg.top() + tmp;
																																																																																																																																																 sg.pop();
																																																																																																																																															 }
																																																																																																																																															 if (!sg.empty() && sg.top() == '[')
																																																																																																																																																 sg.pop();
																																																																																																																																															 for (int j = 0; j < num; j++)
																																																																																																																																																 res = res + tmp;
																																																																																																																																															 for (int j = 0; j < res.length(); j++)
																																																																																																																																																 sg.push(res[j]);
																																																																																																																																															 res = "";
																																																																																																																																														 }
																																																																																																																																														 else if (str[i] == '[')
																																																																																																																																														 {
																																																																																																																																															 if (str[i - 1] >= '0' && str[i - 1] <= '9')
																																																																																																																																																 sg.push(str[i]);
																																																																																																																																															 else
																																																																																																																																															 {
																																																																																																																																																 sg.push(str[i]);
																																																																																																																																																 ig.push(1);
																																																																																																																																															 }
																																																																																																																																														 }
																																																																																																																																														 else
																																																																																																																																															 sg.push(str[i]);
																																																																																																																																													 }
																																																																																																																																													 while (!sg.empty())
																																																																																																																																													 {
																																																																																																																																														 res = sg.top() + res;
																																																																																																																																														 sg.pop();
																																																																																																																																													 }
																																																																																																																																													 cout << res << endl;
																																																																																																																																												 } int main()
																																																																																																																																												 {
																																																																																																																																													 int t;
																																																																																																																																													 cin >> t;
																																																																																																																																													 while (t--)
																																																																																																																																													 {
																																																																																																																																														 string str;
																																																																																																																																														 cin >> str;
																																																																																																																																														 solve(str);
																																																																																																																																													 }
																																																																																																																																												 }
