Dãy Ngo?c ?úng dài nh?t
Cho m?t xâu ch? g?m các kí t? ‘(‘ và ‘)’. M?t dãy ngo?c ?úng ???c ??nh ngh?a nh? sau:
-     Xâu r?ng là 1 dãy ngo?c ?úng.
-     N?u A là 1 dãy ngo?c ?úng thì (A) là 1 dãy ngo?c ?úng.
-     N?u A và B là 2 dãy ngo?c ?úng thì AB là 1 dãy ngo?c ?úng.
Cho m?t xâu S. Nhi?m v? c?a b?n là hãy tìm dãy ngo?c ?úng dài nh?t xu?t hi?n trong xâu ?ã cho.
Input: Dòng ??u tiên là s? l??ng b? test T (T ? 20).
M?i test g?m m?t xâu S có ?? dài không v??t quá 105 kí t?.
Output:  V?i m?i test in ra m?t s? nguyên là ?? dài dãy ngo?c ?úng dài nh?t tìm ???c.
Ví d?:
Input:	Output
3
((()
)()())
()(()))))
 	2
4
6


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<int> st;
		st.push(-1);
		int res = 0;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == '(') st.push(i);
			else{
				st.pop();
				if(st.empty()) st.push(i);
				else{
					res = max(res, i-st.top());
				}
			}
		}
		cout << res << endl;
	}
}
NG?N X?P 1
Bài làm t?t nh?t
Cho m?t ng?n x?p các s? nguyên. Các thao tác g?m 3 l?nh: push, pop và show. Trong ?ó thao tác push kèm theo m?t giá tr? c?n thêm (không quá 1000). Hãy vi?t ch??ng trình ghi ra k?t qu? c?a các l?nh show.
Input: G?m nhi?u dòng, m?i dòng ch?a m?t l?nh push, pop ho?c show. Input ??m b?o s? l??ng ph?n t? trong stack khi nhi?u nh?t c?ng không v??t quá 200.
Output: Ghi ra màn hình các ph?n t? ?ang có trong stack theo th? t? l?u tr? m?i khi g?p l?nh show. Các s? vi?t cách nhau ?úng m?t kho?ng tr?ng. N?u trong stack không còn gì thì in ra dòng “empty”
Ví d?:
Input	Output
push 3
push 5
show
push 7
show
pop
pop
show	3 5
3 5 7
3

#include <bits/stdc++.h>
using namespace std;
int a[205], top = -1;
void push(int n) {
	top++;
	a[top] = n;
}
void pop() {
	top--;
}
void show() {
	if(top >= 0) {
		for(int i=0; i<=top; i++){
			cout << a[i] <<" ";
		}
		cout << endl;
	}
	else {
		cout << "empty" << endl;
	}
}
int main() {
	string s;
	int n;
	while(cin >> s){
		if(s == "push"){
			cin >> n;
			push(n);	
		} 
		else if(s == "pop") {
			pop();		
		}
		else if(s == "show") {
			show();
		}
	}
}
NG?N X?P 2
Bài làm t?t nh?t
Yêu c?u b?n xây d?ng m?t stack v?i các truy v?n sau ?ây:
“PUSH x”: Thêm ph?n t? x vào stack (0 ? x ? 1000).
“PRINT”: In ra ph?n t? ??u tiên c?a stack. N?u stack r?ng, in ra “NONE”.
“POP”: Xóa ph?n t? ??u tiên c?a stack. N?u stack r?ng, không làm gì c?.
Input:
Dòng ??u tiên là s? l??ng truy v?n Q (Q ? 100000).
M?i truy v?n có d?ng nh? trên.
Output: 
V?i m?i truy v?n “PRINT”, hãy in ra ph?n t? ??u tiên c?a stack. N?u stack r?ng, in ra “NONE”.
Ví d?:
Input:	Output
9
PUSH 1
PUSH 2
POP
PRINT
PUSH 3
PRINT
POP
POP
PRINT
 	1
3
NONE
 
#include<bits/stdc++.h>
using namespace std;
int main(){
	int T; cin >> T;
	stack<int> S;
	string str; int n;
	while (T--){
		cin >> str;
		if (str == "PUSH"){
			cin >> n;
			S.push(n);
		}
		else if (str == "PRINT"){
			if (S.empty()) cout << "NONE" << endl;
			else cout << S.top() << endl;
		}
		else if (str == "POP"){
			if (!S.empty()) S.pop();
		}
	}
}
 KI?M TRA BI?U TH?C S? H?C
Bài làm t?t nh?t
Cho bi?u th?c s? h?c, hãy cho bi?t bi?u th?c s? h?c có d? th?a các c?p ký hi?u ‘(’,’) ‘ hay không?
Input:
?	Dòng ??u tiên ??a vào s? l??ng b? test T;
?	Nh?ng dòng ti?p theo m?i dòng ??a vào m?t b? test. M?i b? test là m?t bi?u th?c ti?n t? exp.
Output:
?	??a ra k?t qu? m?i test theo t?ng dòng.
Ràng bu?c:
?	T, exp th?a mãn ràng bu?c: 1?T?100; 2?length(exp)?20.
Ví d?:
 
Input	Output
3
((a+b))
(a + (b)/c)
(a + b*(c-d))	Yes
Yes
No

#include<bits/stdc++.h>
using namespace std;
bool solve(string &str){
	stack<char> s;
	for (int i=0; i<str.length(); i++){
		if (str[i] == ')'){
			char top = s.top();
			s.pop();
			bool flag = true;
			while (top != '('){
				if (top=='+' || top=='-' || top=='*' || top=='/')
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
int main(){
	int T; cin >> T;
	while (T--){
		string s; cin >> s;
		bool ans = solve(s);
		if (ans == true) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}
 ??M S? D?U NGO?C ??I CHI?U
Bài làm t?t nh?t
Cho m?t xâu ch? g?m các kí t? ‘(‘, ‘) và có ?? dài ch?n. Hãy ??m s? l??ng d?u ngo?c c?n ph?i ??i chi?u ít nh?t, sao cho xâu m?i thu ???c là m?t dãy ngo?c ?úng.
Input:
Dòng ??u tiên là s? l??ng b? test T (T ? 20).
M?i test g?m 1 xâu S có ?? dài không v??t quá 100 000, ch? g?m d?u ( và ).
Output: 
V?i m?i test, in ra ?áp án tìm ???c trên m?t dòng.
Ví d?:
Input:	Output
4
))((
((((
(((())
)(())(((	2
2
1
3

#include<bits/stdc++.h>
using namespace std;
void solve(string str){
	stack<char> s;
	for (int i=0; i<str.length(); i++){
		if (str[i]==')' && !s.empty()){
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
	while (!s.empty() && s.top() == '('){
		s.pop();
		n++;
	}
	int res = m/2+n%2;
	cout << res << endl;
}
int main(){
	int T; cin >> T;
	while (T--){
		string str; cin >> str;
		solve(str);
	}
}
BI?N ??I TI?N T? - TRUNG T?
Bài làm t?t nh?t
Hãy vi?t ch??ng trình chuy?n ??i bi?u th?c bi?u di?n d??i d?ng ti?n t? v? d?ng trung t?.
Input:
?	Dòng ??u tiên ??a vào s? l??ng b? test T;
?	Nh?ng dòng ti?p theo m?i dòng ??a vào m?t b? test. M?i b? test là m?t bi?u th?c ti?n t? exp.
Output:
?	??a ra k?t qu? m?i test theo t?ng dòng.
Ràng bu?c:
?	T, exp th?a mãn ràng bu?c: 1?T?100; 2?length(exp)?106.
Ví d?:
Input	Output
2
*+AB-CD
*-A/BC-/AKL	((A+B)*(C-D))
((A-(B/C))*((A/K)-L)

#include<bits/stdc++.h>
using namespace std;
bool isOperator(char c){
	if (c == '*' || c == '/' || c == '+' || c == '-')
		return true;
	return false;
}
void solve(string str){
	stack<string> s;
	for (int i = str.length()-1; i >= 0; i--){
		if (isOperator(str[i])){
			string str1 = s.top(); s.pop();
			string str2 = s.top(); s.pop();
			string tmp = "(" + str1 + str[i] + str2 + ")";
			s.push(tmp);
		}
		else
			s.push(string(1, str[i]));
	}
	cout << s.top() << endl;
}
int main() { 
    int t; cin >> t;
    while (t--){
    	string s; cin >> s;
    	solve(s);
	}
}
 BI?N ??I TI?N T? - H?U T?
Bài làm t?t nh?t
   Hãy vi?t ch??ng trình chuy?n ??i bi?u th?c bi?u di?n d??i d?ng ti?n t? v? d?ng h?u t?.
Input:
?	Dòng ??u tiên ??a vào s? l??ng b? test T;
?	Nh?ng dòng ti?p theo m?i dòng ??a vào m?t b? test. M?i b? test là m?t bi?u th?c ti?n t? exp.
Output:
?	??a ra k?t qu? m?i test theo t?ng dòng.
Ràng bu?c:
?	T, exp th?a mãn ràng bu?c: 1?T?100; 2?length(exp)?106.
Ví d?:
Input	Output
2
*+AB-CD
*-A/BC-/AKL	AB+CD-*
ABC/-AK/L-*
 
#include<bits/stdc++.h>
using namespace std; 
bool isOperator(char c){
	if (c == '*' || c == '/' || c == '+' || c == '-')
		return true;
	return false;
}
void solve(string str) { 
  stack<string> s; 
  int length = str.size(); 
  for (int i = length - 1; i >= 0; i--) { 
    if (isOperator(str[i])) { 
      string op1 = s.top(); s.pop(); 
      string op2 = s.top(); s.pop(); 
      string temp = op1 + op2 + str[i];  
      s.push(temp); 
    } 
    else { 
      s.push(string(1, str[i])); 
    } 
  } 
  cout << s.top() << endl; 
} 
int main() { 
    int t; cin >> t;
    cin.ignore();
    while (t--){
    	string s; getline(cin,s);
    	solve(s);
	}
}
Hãy vi?t ch??ng trình chuy?n tính toán giá tr? c?a bi?u th?c h?u t?.
Input:
?	Dòng ??u tiên ??a vào s? l??ng b? test T;
?	Nh?ng dòng ti?p theo m?i dòng ??a vào m?t b? test. M?i b? test là m?t bi?u th?c h?u t? exp. Các s? xu?t hi?n trong bi?u th?c là các s? ??n có 1 ch? s?.
Output:
?	??a ra k?t qu? m?i test theo t?ng dòng, ch? l?y giá tr? ph?n nguyên.
Ràng bu?c:
?	T, exp th?a mãn ràng bu?c: 1?T?100; 2?length(exp)?20.
Ví d?:
Input	Output
2
231*+9–
875*+9-	-4
34
 
#include<bits/stdc++.h>
using namespace std;
bool isOperator(char c){
	if (c == '*' || c == '/' || c == '+' || c == '-')
		return true;
	return false;
}
void solve(string str){
	stack<int> s;
	for (int i = 0; i < str.length(); i++){
		if (isOperator(str[i])){
			int x1 = s.top(); s.pop();
			int x2 = s.top(); s.pop();
			switch (str[i]){
				case '+': s.push(x2 + x1); break;
				case '-': s.push(x2 - x1); break;
				case '*': s.push(x2 * x1); break;
				case '/': s.push(x2 / x1); break;
			}
		}
		else{
			s.push(str[i] - '0');
		}
	}
	cout << s.top() << endl;
}
int main() { 
    int t; cin >> t;
    cin.ignore();
    while (t--){
    	string s; getline(cin,s);
    	solve(s);
	}
}
 TÍNH GIÁ TR? BI?U TH?C TI?N T?
Bài làm t?t nh?t
Hãy vi?t ch??ng trình tính toán giá tr? c?a bi?u th?c ti?n t?.
Input:
?	Dòng ??u tiên ??a vào s? l??ng b? test T;
?	Nh?ng dòng ti?p theo m?i dòng ??a vào m?t b? test. M?i b? test là m?t bi?u th?c ti?n t? exp. Các s? xu?t hi?n trong bi?u th?c là các s? ??n có 1 ch? s?.
Output:
?	??a ra k?t qu? m?i test theo t?ng dòng, ch? l?y giá tr? ph?n nguyên.
Ràng bu?c:
?	T, exp th?a mãn ràng bu?c: 1?T?100; 2?length(exp)?20.
Ví d?:
Input	Output
2
-+8/632
-+7*45+20	8
25
 
#include<bits/stdc++.h>
using namespace std;
bool isOperator(char c){
	if (c == '*' || c == '/' || c == '+' || c == '-')
		return true;
	return false;
}
void solve(string str){
	stack<int> s;
	for (int i = str.length()-1; i >=0; i--){
		if (isOperator(str[i])){
			int x1 = s.top(); s.pop();
			int x2 = s.top(); s.pop();
			switch (str[i]){
				case '+': s.push(x1 + x2); break;
				case '-': s.push(x1 - x2); break;
				case '*': s.push(x1 * x2); break;
				case '/': s.push(x1 / x2); break;
			}
		}
		else{
			s.push(str[i] - '0');
		}
	}
	cout << s.top() << endl;
}
int main(){ 
    int t; cin >> t;
    cin.ignore();
    while (t--){
    	string s; getline(cin,s);
    	solve(s);
	}
}
PH?N T? BÊN PH?I ??U TIÊN L?N H?N
Bài làm t?t nh?t
Cho dãy s? A[] g?m N ph?n t?. V?i m?i A[i], b?n c?n tìm ph?n t? bên ph?i ??u tiên l?n h?n nó. N?u không t?n t?i, in ra -1.
Input:
Dòng ??u tiên là s? l??ng b? test T (T ? 20).
M?i test b?t ??u b?i s? nguyên N (1 ? N ? 100000).
Dòng ti?p theo g?m N s? nguyên A[i] (0 ? A[i] ? 109).
Output: 
V?i m?i test, in ra trên m?t dòng N s? R[i], v?i R[i] là giá tr? ph?n t? ??u tiên l?n h?n A[i].
Ví d?
Input	Output
3
4
4 5 2 25
3
2 2 2
4
4 4 5 5	5 25 25 -1
-1 -1 -1
5 5 -1 -1
 
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve(ll arr[], int n){
	stack<ll> s;
	ll ans[n];
	for (int i = n-1; i >= 0; i--){
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
}
int main(){
	int t; cin >> t ;
	while (t--){
		int n; cin >> n;
		ll *arr = new ll[n];
		for (int i = 0; i < n; i++) cin >> arr[i];
		solve(arr, n);
		delete arr;
	}
}
 HÌNH CH? NH?T L?N NH?T
Bài làm t?t nh?t
Cho N c?t, m?i c?t có chi?u cao b?ng H[i]. B?n hãy tìm hình ch? nh?t l?n nh?t b? che ph? b?i các c?t?
 
Input:
Dòng ??u tiên là s? l??ng b? test T (T ? 20).
M?i test b?t ??u b?i s? nguyên N (N ? 100 000).
Dòng ti?p theo g?m N s? nguyên H[i] (1 ? H[i] ? 109).
Output: 
V?i m?i test, in ra di?n tích hình ch? nh?t l?n nh?t tìm ???c.
Ví d?:
Input	Output
2
7
6 2 5 4 5 1 6
3
2 2 2
 	12
6
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve(ll arr[], int n){
	stack<int> s;
	ll res = 0, tp, area;
	int i = 0;
	while (i < n){
		if (s.empty() || arr[s.top()] < arr[i])
			s.push(i++);
		else{
			tp = s.top(); s.pop();
			area = arr[tp] * (s.empty()? i: i-s.top()-1);
			if (area > res)
				res = area;
		}
	}
	while (!s.empty()){
		tp = s.top(); s.pop();
		area = arr[tp] * (s.empty()? i: i-s.top()-1);
		if (area > res)
			res = area;
	}
	cout << res << endl;
}
int main(){
	int t; cin >> t ;
	while (t--){
		int n; cin >> n;
		ll *arr = new ll[n];
		for (int i = 0; i < n; i++) cin >> arr[i];
		solve(arr, n);
		delete arr;
	}
}

BI?N ??I TRUNG T? - H?U T?
Bài làm t?t nh?t
Hãy vi?t ch??ng trình chuy?n ??i bi?u th?c bi?u di?n d??i d?ng trung t? v? d?ng h?u t?.
Input:
?	Dòng ??u tiên ??a vào s? l??ng b? test T;
?	Nh?ng dòng ti?p theo m?i dòng ??a vào m?t b? test. M?i b? test là m?t bi?u th?c ti?n t? exp.
Output:
?	??a ra k?t qu? m?i test theo t?ng dòng.
Ràng bu?c:
?	T, exp th?a mãn ràng bu?c: 1?T?100; 2?length(exp)?10.
Ví d?:
Input	Output
2
(A+(B+C)
((A*B)+C)	ABC++
AB*C+
 
#include<bits/stdc++.h> 
using namespace std; 
int prec(char c){ 
    if(c == '^') 
    	return 3; 
    else if(c == '*' || c == '/') 
    	return 2; 
    else if(c == '+' || c == '-') 
    	return 1; 
    else
    	return -1; 
} 
void solve(string s){ 
    stack<char> st; 
    int l = s.length(); 
    string ns; 
    for(int i = 0; i < l; i++) 
    { 
        if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z')) 
        	ns+=s[i]; 
        else if(s[i] == '(') 
          st.push('('); 
        else if(s[i] == ')') 
        { 
            while(!st.empty() && st.top() != '(') 
            { 
                char c = st.top(); 
                st.pop(); 
                ns += c; 
            } 
            if(st.top() == '(') 
                st.pop(); 
        } 
        else{ 
            while(!st.empty() && prec(s[i]) <= prec(st.top())) 
            { 
                char c = st.top(); 
                st.pop(); 
                ns += c; 
            } 
            st.push(s[i]); 
        } 
    } 
    while(!st.empty()) 
    { 
        char c = st.top(); 
        st.pop();
		if (c != '(') 
        	ns += c; 
    } 
    cout << ns << endl; 
} 
int main() { 
    int t; cin >> t;
    cin.ignore();
    while (t--){
    	string s; cin >> s;
    	solve(s);
	}
	return 0;
}

BI?N ??I H?U T? - TI?N T?
Bài làm t?t nh?t
Hãy vi?t ch??ng trình chuy?n ??i bi?u th?c bi?u di?n d??i d?ng h?u t? v? d?ng ti?n t?.
Input:
?	Dòng ??u tiên ??a vào s? l??ng b? test T;
?	Nh?ng dòng ti?p theo m?i dòng ??a vào m?t b? test. M?i b? test là m?t bi?u th?c ti?n t? exp.
Output:
?	??a ra k?t qu? m?i test theo t?ng dòng.
Ràng bu?c:
?	T, exp th?a mãn ràng bu?c: 1?T?100; 2?length(exp)?106.
Ví  d?:
Input	Output
2
AB+CD-*
ABC/-AK/L-*	*+AB-CD
*-A/BC-/AKL


#include<bits/stdc++.h>
using namespace std;
bool isOperator(char c){
	if (c == '*' || c == '/' || c == '+' || c == '-')
		return true;
	return false;
}
void solve(string str){
	stack<string> s;
	for (int i = 0; i < str.length(); i++){
		if (isOperator(str[i])){
			string str1 = s.top(); s.pop();
			string str2 = s.top(); s.pop();
			string tmp = str[i] + str2 + str1;
			s.push(tmp);
		}
		else
			s.push(string(1, str[i]));
	}
	cout << s.top() << endl;
}
int main() { 
    int t; cin >> t;
    cin.ignore();
    while (t--){
    	string s; getline(cin,s);
    	solve(s);
	}
}

 BI?N ??I H?U T? - TI?N T?
Bài làm t?t nh?t
Hãy vi?t ch??ng trình chuy?n ??i bi?u th?c bi?u di?n d??i d?ng h?u t? v? d?ng ti?n t?.
Input:
?	Dòng ??u tiên ??a vào s? l??ng b? test T;
?	Nh?ng dòng ti?p theo m?i dòng ??a vào m?t b? test. M?i b? test là m?t bi?u th?c ti?n t? exp.
Output:
?	??a ra k?t qu? m?i test theo t?ng dòng.
Ràng bu?c:
?	T, exp th?a mãn ràng bu?c: 1?T?100; 2?length(exp)?106.
Ví  d?:
Input	Output
2
AB+CD-*
ABC/-AK/L-*	*+AB-CD
*-A/BC-/AKL

#include<bits/stdc++.h>
using namespace std;
bool isOperator(char c){
	if (c == '*' || c == '/' || c == '+' || c == '-')
		return true;
	return false;
}
void solve(string str){
	stack<string> s;
	for (int i = 0; i < str.length(); i++){
		if (isOperator(str[i])){
			string str1 = s.top(); s.pop();
			string str2 = s.top(); s.pop();
			string tmp = str[i] + str2 + str1;
			s.push(tmp);
		}
		else
			s.push(string(1, str[i]));
	}
	cout << s.top() << endl;
}
int main() { 
    int t; cin >> t;
    cin.ignore();
    while (t--){
    	string s; getline(cin,s);
    	solve(s);
	}
}

BI?N ??I H?U T? - TRUNG T?
Bài làm t?t nh?t
Hãy vi?t ch??ng trình chuy?n ??i bi?u th?c bi?u di?n d??i d?ng h?u t? v? d?ng trung t?.
Input:
?	Dòng ??u tiên ??a vào s? l??ng b? test T;
?	Nh?ng dòng ti?p theo m?i dòng ??a vào m?t b? test. M?i b? test là m?t bi?u th?c ti?n t? exp.
?	T, exp th?a màng ràng bu?c: 1?T?100; 2?length(exp)?106.
Output:
?	??a ra k?t qu? m?i test theo t?ng dòng.
Ràng bu?c:
?	T, exp th?a mãn ràng bu?c: 1?T?100; 2?length(exp)?106.
Ví d?:
Input	Output
2
ABC++
AB*C+	(A+(B+C)
((A*B)+C)


#include<bits/stdc++.h>
using namespace std;
bool isOperator(char c){
	if (c == '*' || c == '/' || c == '+' || c == '-')
		return true;
	return false;
}
void solve(string str){
	stack<string> s;
	for (int i = 0; i < str.length(); i++){
		if (isOperator(str[i])){
			string str1 = s.top(); s.pop();
			string str2 = s.top(); s.pop();
			string tmp = "(" + str2 + str[i] + str1 + ")";
			s.push(tmp);
		}
		else
			s.push(string(1, str[i]));
	}
	cout << s.top() << endl;
}
int main() { 
    int t; cin >> t;
    cin.ignore();
    while (t--){
    	string s; getline(cin,s);
    	solve(s);
	}
}

BI?U TH?C T?NG GI?M
Bài làm t?t nh?t
Cho dãy ký t? S ch? bao g?m các ký t? I ho?c D. Ký t? I ???c hi?u là t?ng (Increasing) ký t? D ???c hi?u là gi?m (Decreasing). S? d?ng các s? t? 1 ??n 9, hãy ??a ra s? nh? nh?t ???c ?oán nh?n t? S. Chú ý, các s? không ???c phép l?p l?i. D??i ?ây là m?t s? ví d? m?u:
?	A[] = “I”              : s? t?ng nh? nh?t là 12.
?	A[] = “D”            : s? gi?m nh? nh?t là 21
?	A[] =”DD”           : s? gi?m nh? nh?t là 321
?	A[] = “DDIDDIID”: s? th?a mãn 321654798
Input:
?	Dòng ??u tiên ??a vào s? l??ng b? test T.
?	Nh?ng dòng k? ti?p ??a vào T b? test. M?i b? test là m?t xâu S
?	T, S th?a mãn ràng bu?c: 1? T ?100; 1? length(S) ?8; .
Output:
?	??a ra k?t qu? m?i test theo t?ng dòng.
Ví d?:
Input:	Output:
4
I
D
DD
DDIDDIID	12
21
321
321654798


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<int> st;
		string res = "";
		for(int i = 0; i <= s.size(); i++){
			st.push(i+1);
			if(s[i] == 'I' || i == s.size()){
				while(!st.empty()){
					res += (st.top()+'0');
				    st.pop();
				}
			}
		}
		cout << res << endl;
	}
}

PH?N T? BÊN PH?I NH? H?N
Bài làm t?t nh?t
Cho m?ng A[] g?m n ph?n t?. Hãy ??a ra các ph?n t? nh? h?n ti?p theo c?a ph?n t? l?n h?n ??u tiên ph?n t? hi?n t?i. N?u ph?n t? hi?n t?i không có ph?n t? l?n h?n ti?p theo ta xem là -1. N?u ph?n t? không có ph?n t? nh? h?n ti?p theo ta c?ng xem là -1. Ví d? v?i m?ng A[] = {5, 1, 9, 2, 5, 1, 7} ta có k?t qu? là ans = {2, 2, -1, 1, -1, -1, -1} vì:
Next Greater                         Right Smaller
5          ->  9                                        9  ->  2
1          ->  9                                        9  ->  2
9          -> -1                                       -1 -> -1
2          -> 5                                         5   -> 1
5          -> 7                                         7  -> -1
1          ->  7                                        7 -> -1
7          -> -1                                       7 -> -1
Input:
?	Dòng ??u tiên ??a vào s? l??ng b? test T;
?	Nh?ng dòng ti?p theo m?i dòng ??a vào m?t b? test. M?i b? test g?m hai dòng: dòng th? nh?t ??a vào n là s? ph?n t? c?a m?ng A[], dòng ti?p theo ??a vào n s? A[i].
Output:
?	??a ra k?t qu? m?i test theo t?ng dòng.
Ràng bu?c:
?	T, n, A[i] th?a mãn ràng bu?c: 1?T?100; 1?n, A[i] ?106.
Ví d?:
Input	Output
2
7
5 1 9 2 5 1 7
8
4 8 2 1 9 5 6 3	2 2 1 1 -1 -1 -1
2 5 5 5 -1 3 -1 -1
 

#include<bits/stdc++.h> 
using namespace std; 
void nextGreater(int arr[], int n, int next[], char order){
    stack<int> S; 
    for (int i=n-1; i>=0; i--){ 
        while (!S.empty() && ((order=='G')? arr[S.top()] <= arr[i]: arr[S.top()] >= arr[i])) 
            S.pop(); 
        if (S.empty()) 
            next[i] = -1; 
        else
            next[i] = S.top(); 
        S.push(i); 
    } 
} 
void solve(int arr[], int n) 
{ 
    int NG[n];  
    int RS[n];
    nextGreater(arr, n, NG, 'G'); 
    nextGreater(arr, n, RS, 'S'); 
    for (int i=0; i< n; i++){ 
        if (NG[i] != -1 && RS[NG[i]] != -1) 
            cout << arr[RS[NG[i]]] << " "; 
        else
            cout<<"-1"<<" "; 
    } 
    cout << endl;
} 
int main(){
	int t; cin >> t ;
	while (t--){
		int n; cin >> n;
		int *arr = new int[n];
		for (int i = 0; i < n; i++) cin >> arr[i];
		solve(arr, n);
		delete arr;
	}
}

GI?I MÃ XÂU KÝ T?
Bài làm t?t nh?t
Cho xâu ký t? mã hóa str. Hãy vi?t ch??ng trình gi?i mã xâu ký t? str. Xâu ký t? mã hóa ???c th?c hi?n theo s? l?n l?p các xâu con c?a str nh? sau:
Xâu ??u vào: “abbbababbbababbbab ”
Xâu mã hóa : "3[a3[b]1[ab]]"
Input:
?	Dòng ??u tiên ??a vào s? l??ng b? test T;
?	Nh?ng dòng ti?p theo m?i dòng ??a vào m?t b? test. M?i b? test là m?t xâu mã hóa str ???c vi?t trên m?t dòng.
Output:
?	??a ra k?t qu? m?i test theo t?ng dòng.
Ràng bu?c:
?	T, str th?a mãn ràng bu?c: 1?T?100; 1?length(str)?100.
Ví d?:
Input	Output
2
1[b]
3[b2[ca]]	b
bcacabcacabcaca

#include<bits/stdc++.h>
using namespace std;
void solve(string str){
	stack<int> ig;
	stack<char> sg;
	string tmp = "", res = "";
	for (int i = 0; i < str.length(); i++){
		int num  = 0;
		if (str[i] >= '0' && str[i] <= '9'){
			while (str[i] >= '0' && str[i] <= '9'){
				num  = num*10 + str[i] - '0';
				i++;
			}
			i--;
			ig.push(num);
		}
		else if (str[i] == ']'){
			tmp = "";
			num = 0;
			if (!ig.empty()){
				num = ig.top();
				ig.pop();
			}
			while (!sg.empty() && sg.top() != '['){
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
		else if (str[i] == '['){
			if (str[i-1] >= '0' && str[i-1] <= '9')
				sg.push(str[i]);
			else{
				sg.push(str[i]);
				ig.push(1);
			}
		}
		else
			sg.push(str[i]);
	}
	while (!sg.empty()){
		res = sg.top() + res;
		sg.pop();
	}
	cout << res << endl;
}
int main(){
	int t; cin >> t;
	while (t--){
		string str; cin >> str;
		solve(str);
	}
}
