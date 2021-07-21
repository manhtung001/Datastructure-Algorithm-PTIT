C?U TR�C D? LI?U H�NG ??I 1
B�i l�m t?t nh?t
Ban ??u cho m?t queue r?ng. B?n c?n th?c hi?n c�c truy v?n sau:
Tr? v? k�ch th??c c?a queue
Ki?m tra xem queue c� r?ng kh�ng, n?u c� in ra �YES�, n?u kh�ng in ra �NO�.
Cho m?t s? nguy�n v� ??y s? nguy�n n�y v�o cu?i queue.
Lo?i b? ph?n t? ? ??u queue n?u queue kh�ng r?ng, n?u r?ng kh�ng c?n th?c hi?n.
Tr? v? ph?n t? ? ??u queue, n?u queue r?ng in ra -1.
Tr? v? ph?n t? ? cu?i queue, n?u queue r?ng in ra -1.
D? li?u v�o
D�ng ??u ti�n ch?a s? nguy�n T l� s? b? d? li?u, m?i b? d? theo d?ng sau.
D�ng ??u ti�n ch?a s? nguy�n n - l??ng truy v?n (1 ? n ? 1000)
N d�ng ti?p theo, m?i d�ng s? ghi lo?i truy v?n nh? tr�n, v?i truy v?n lo?i 3 s? c� th�m m?t s? nguy�n, kh�ng qu� 106.
K?t qu?:�In ra k?t qu? c?a c�c truy v?n..
V� d?:
Input	Output
1
14
3 1
3 2
3 3
5
6
4
4
4
4
4
3 5
3 6
5
1	1
3
5
2
�


#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		queue<int> q;
		while (n--){
			int k; cin >> k;
			if (k == 1)
				cout << q.size() << endl;
			if (k == 2){
				if (q.empty()) cout << "YES" << endl;
				else cout << "NO" << endl;
			}
			if (k == 3){
				int x; cin >> x;
				q.push(x);
			}
			if (k == 4){
				if (!q.empty())
					q.pop();
			}
			if (k == 5){
				if (q.empty()) cout << "-1" << endl;
				else cout << q.front() << endl;
			}
			if (k == 6){
				if (q.empty()) cout << "-1" << endl;
				else cout << q.back() << endl;
			}
		}
	}
}

C?U TR�C D? LI?U H�NG ??I 2
B�i l�m t?t nh?t
Y�u c?u b?n x�y d?ng m?t queue v?i c�c truy v?n sau ?�y:
�PUSH x�: Th�m ph?n t? x v�o cu?i c?a queue (0 ? x ? 1000).
�PRINTFRONT�: In ra ph?n t? ??u ti�n c?a queue. N?u queue r?ng, in ra �NONE�.
�POP�: X�a ph?n t? ? ??u c?a queue. N?u queue r?ng, kh�ng l�m g� c?.
D? li?u v�o:
D�ng ??u ti�n l� s? l??ng truy v?n Q (Q ? 100000).
M?i truy v?n c� d?ng nh? tr�n.
K?t qu?:
�
V?i m?i truy v?n �PRINT�, h�y in ra ph?n t? ??u ti�n c?a queue. N?u queue r?ng, in ra �NONE�.
V� d?:
�
�
Input	Output
9
PUSH 1
PUSH 2
POP
PRINTFRONT
PUSH 3
PRINTFRONT
POP
POP
PRINTFRONT	2
2
NONE

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	queue<int> q;
	while (n--){
		string str; cin >> str;
		if (str == "PUSH"){
			int x; cin >> x;
			q.push(x);
		}
		if (str == "POP"){
			if (!q.empty())
				q.pop();
		}
		if (str == "PRINTFRONT")
			if (!q.empty())
				cout << q.front() << endl;
			else cout << "NONE" << endl;
	}
}

H�NG ??I HAI ??U (DEQUEUE)
B�i l�m t?t nh?t
Y�u c?u b?n x�y d?ng m?t h�ng ??i hai ??u v?i c�c truy v?n sau ?�y:
�PUSHFRONT x�: Th�m ph?n t? x v�o ??u c?a dequeue (0 ? x ? 1000).
�PRINTFRONT�: In ra ph?n t? ??u ti�n c?a dequeue. N?u dequeue r?ng, in ra �NONE�.
�POPFRONT�: X�a ph?n t? ??u c?a dequeue. N?u dequeue r?ng, kh�ng l�m g� c?.
�PUSHBACK x�: Th�m ph?n t? x v�o cu?i c?a dequeue (0 ? x ? 1000).
�PRINTBACK�: In ra ph?n t? cu?i c?a dequeue. N?u dequeue r?ng, in ra �NONE�.
�POPBACK�: X�a ph?n t? cu?i c?a dequeue. N?u dequeue r?ng, kh�ng l�m g� c?.
D? li?u v�o:
D�ng ??u ti�n l� s? l??ng truy v?n Q (Q ? 100000).
M?i truy v?n c� d?ng nh? tr�n.
K?t qu?:�
V?i m?i truy v?n �PRINTFRONT� v� �PRINTBACK�, h�y in ra k?t qu? tr�n m?t d�ng.
V� d?:
Input	Output
10
PUSHBACK 1
PUSHFRONT 2
PUSHBACK 3
PRINTFRONT
POPFRONT
PRINTFRONT
POPFRONT
PRINTBACK
POPFRONT
PRINTBACK
�	2
1
3
NONE


#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	deque<int> q;
	while (n--){
		string str; cin >> str;
		if (str == "PUSHFRONT"){
			int x; cin >> x;
			q.push_front(x);
		}
		if (str == "POPFRONT"){
			if (!q.empty())
				q.pop_front();
		}
		if (str == "PRINTFRONT")
			if (!q.empty())
				cout << q.front() << endl;
			else cout << "NONE" << endl;
		if (str == "PUSHBACK"){
			int x; cin >> x;
			q.push_back(x);
		}
		if (str == "PRINTBACK"){
			if (!q.empty())
				cout << q.back() << endl;
			else cout << "NONE" << endl;
		}
		if (str == "POPBACK"){
			if (!q.empty())
				q.pop_back();
		}
	}
}


S? NH? PH�N T? 1 ??N N
B�i l�m t?t nh?t
Cho s? t? nhi�n n. H�y in ra t?t c? c�c s? nh? ph�n t? 1 ??n n.
Input:
D�ng ??u ti�n ghi l?i s? l??ng test T (T?100).
M?i test l� m?t s? t? nhi�n n ???c ghi tr�n m?t d�ng (n?10000).
Output:
??a ra k?t qu? m?i test tr�n m?t d�ng.
V� d?:
Input	Output
2
2
5	1 10
1 10 11 100 101


#include<bits/stdc++.h>
using namespace std;
void solve(int n){
	queue<string> q;
	q.push("1");
	while (n--){
		string s1 = q.front();
		q.pop();
		cout << s1 << " ";
		string s2 = s1;
		q.push(s1.append("0"));
		q.push(s2.append("1"));
	}
	cout << endl;
}
int main(){
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		solve(n);
	}
}

S? 0 V� S? 9
B�i l�m t?t nh?t
Cho s? t? nhi�n N. H�y t�m s? nguy�n d??ng X nh? nh?t ???c t?o b?i s? 9 v� s? 0 chia h?t cho N. V� d? v?i N = 5 ta s? t�m ra� X = 90.
Input:
D�ng ??u ti�n ghi l?i s? l??ng test T (T?100).
Nh?ng d�ng k? ti?p m?i d�ng ghi l?i m?t test. M?i test l� m?t s? t? nhi�n N ???c ghi tr�n m?t d�ng (N?100).
Output:
??a ra theo t?ng d�ng s? X nh? nh?t chia h?t cho N t�m ???c .
V� d?:
Input	Output
2
5
7	90
9009


#include<bits/stdc++.h>
using namespace std;
void solve(int n){
	queue<long long> q;
	q.push(9);
	while (!q.empty()){
		long long x = q.front();
		q.pop();
		if (x%n == 0){
			cout << x << endl;
			break;
		}
		q.push(x*10);
		q.push(x*10+9);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		solve(n);
	}
}

S? BDN 1
B�i l�m t?t nh?t
Ta g?i s? nguy�n d??ng K l� m?t s? BDN n?u c�c ch? s? trong K ch? bao g?m c�c 0 ho?c 1 c� ngh?a. V� d? s? K = 1, 10, 101. Cho s? t? nhi�n N (N<263). H�y cho bi?t c� bao nhi�u s? BDN nh? h?n N. V� d? N=100 ta c� 4 s? BDN bao g?m c�c s?: 1, 10, 11, 100.
Input:
D�ng ??u ti�n ghi l?i s? t? nhi�n T l� s? l??ng Test;
T d�ng k? ti?p m?i d�ng ghi l?i m?t b? Test. M?i test l� m?t s? t? nhi�n N.
������������Output:
??a ra k?t qu? m?i test theo t?ng d�ng.
����������� V� d?:
Input	Output
3
10
100
200	2
4
7


#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;
void solve(long long n){
	queue<long long> q;
	q.push(1);
	long long res = 0;
	while (!q.empty()){
		long long x = q.front();
		q.pop();
		if (x <= n){
			res++;
			q.push(x*10);
			q.push(x*10+1);
		}
	}
	cout << res << endl;
}
int main(){
	int t; cin >> t;
	while (t--){
		long long n; cin >> n;
		solve(n);
	}
}

S? BDN 2
B�i l�m t?t nh?t
Ta g?i s? nguy�n d??ng K l� m?t s? BDN n?u c�c ch? s? trong K ch? bao g?m c�c 0 ho?c 1 c� ngh?a. V� d? s? K =� 101 l� s? BDN, k=102 kh�ng ph?i l� s? BDN.
S? BDN c?a N l� s? P =M*N sao cho P l� s? BDN. Cho s? t? nhi�n N (N<1000), h�y t�m s? BDN nh? nh?t c?a N.
V� d?. V?i N=2, ta t�m ???c s? BDN c?a N l� P = 5*2=10. N = 17 ta t�m ???c s? BDN c?a 17 l� P = 653*17=11101.
Input:
D�ng ??u ti�n ghi l?i s? t? nhi�n T l� s? l??ng Test;
T d�ng k? ti?p m?i d�ng ghi l?i m?t b? Test. M?i test l� m?t s? t? nhi�n N.
����������Output:
����������������������� ??a ra k?t qu? m?i test theo t?ng d�ng.
��������� V� d?:
�
Input	Output
3
2
12
17	10
11100
11101
�
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll mod(string str, ll n){
	ll r = 0;
	for (ll i = 0; i < str.length(); i++){
		r = r*10 + (str[i]-'0');
		r %= n;
	}
	return r;
}
void solve(long long n){
	queue<string> q;
	q.push("1");
	while (!q.empty()){
		string str = q.front();
		q.pop();
		long long r = mod(str, n);
		if (r == 0){
			cout << str << endl;
			break;
		}
		q.push(str+"0");
		q.push(str+"1");
	}
}
int main(){
	int t; cin >> t;
	while (t--){
		long long n; cin >> n;
		solve(n);
	}
}

S? L?C PH�T 1
B�i l�m t?t nh?t
M?t s? ???c g?i l� l?c ph�t n?u ch? c� 2 ch? s? 6 v� 8. Cho s? t? nhi�n N. H�y li?t k� c�c s? l?c ph�t c� kh�ng qu� N ch? s?.
Input:
D�ng ??u ti�n ghi l?i s? t? nhi�n T l� s? l??ng b? test (T<10);
T d�ng k? ti?p m?i d�ng ghi s? N (1<N<15).
������������Output:
In ra ?�p �n theo th? t? gi?m d?n.
����������� V� d?:
Input	Output
2
2
3	88 86 68 66 8 6
888 886 868 866 688 686 668 666 88 86 68 66 8 6

#include<bits/stdc++.h>

using namespace std;
bool cmp(string s,string s1){
	if(s>s1) return true;
	return false;
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		priority_queue<string, vector<string> , greater<string>> res;
		vector<string> ans;
		queue<string> pq;
		pq.push("6");
		pq.push("8");
		while(pq.size()>0){
			string s= pq.front(); 
			pq.pop();
			ans.push_back(s);
			if(s.size()>n) break;
			pq.push(s+ "6");
			pq.push(s +"8");
		}
		reverse(ans.begin(),ans.end());
		for(auto &i: ans){
			if(i.size()<=n) cout<<i<<" ";
		}
		
		cout<<endl;
	}
	
}

GI� TR? NH? NH?T C?A X�U
B�i l�m t?t nh?t
Cho x�u k� t? S[] bao g?m c�c k� t? in hoa [A, B, �,Z]. Ta ??nh ngh?a gi� tr? c?a x�u S[] l� t?ng b�nh ph??ng s? l?n xu?t hi?n m?i k� t? trong x�u. V� d? v?i x�u S[] = �AAABBCD� ta c� F(S) = 32�+ 22�+ 12�+ 12�= 15. H�y t�m gi� tr? nh? nh?t c?a x�u S[] sau khi lo?i b? K k� t? trong x�u.
Input:
D�ng ??u ti�n ??a v�o s? l??ng test T (T?100).
M?i test ???c t? ch?c th�nh 2 d�ng. D�ng th? nh?t ghi l?i s? K. D�ng th? 2 ghi l?i x�u k� t? S[] c� ?? d�i kh�ng v??t qu� 10^6.
Output:
??a ra gi� tr? nh? nh?t c?a m?i test theo t?ng d�ng.
Input	Output
2
0
ABCC
1
ABCC	6
3

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
long long solve(string str, ll k){
	ll l = str.length();
	if (k >= l)
		return 0;
	ll freq[26] = {0};
	for (ll i = 0; i < l; i++)
		freq[str[i]-'A']++;
	priority_queue<int> q;
	for (ll i = 0; i < 26; i++)
		q.push(freq[i]);
	while (k--){
		ll tmp = q.top();
		q.pop();
		tmp = tmp - 1;
		q.push(tmp);
	}
	ll res = 0;
	while (!q.empty()){
		ll tmp = q.top();
		q.pop();
		res = res + tmp*tmp;
	}
	return res;
}
int main(){
	int t; cin >> t;
	while (t--){
		ll k; cin >> k;
		string str; cin >> str;
		cout << solve(str, k) << endl;
	}
}

BI?N ??I S � T
B�i l�m t?t nh?t
Cho hai s? nguy�n d??ng S v� T (S, T<10000) v� hai thao t�c (a), (b) d??i ?�y:
Thao t�c (a): Tr? S ?i 1� (S = S-1) ;
Thao t�c (b): Nh�n S v?i 2 ( S = S*2);
H�y d?ch chuy?n S th�nh T sao cho s? l?n th?c hi?n c�c thao t�c (a), (b) l� �t nh?t. V� d? v?i��� S =2, T=5 th� s? c�c b??c �t nh?t ?? d?ch chuy?n S th�nh T th�ng qua 4 thao t�c sau:
Thao t�c (a): 2*2 = 4;
Thao t�c (b): 4-1 = 3;
Thao t�c (a): 3*2 = 6;
Thao t�c (b): 6-1 = 5;
Input:
D�ng ??u ti�n ghi l?i s? t? nhi�n T l� s? l??ng Test;
T d�ng k? ti?p m?i d�ng ghi l?i m?t b? Test. M?i test l� m?t b? ?�i S v� T.
����������Output:�??a ra k?t qu? m?i test theo t?ng d�ng.
���������
��������� V� d?:
Input	Output
3
2 5
3 7
7 4	4
4
3


#include<bits/stdc++.h>
using namespace std;
struct node{
	int val;
	int level;
};
int solve(int x, int y){
	queue<node> q;
	node n = {x, 0};
	q.push(n);
	set<int> visited;
	visited.insert(x);
	while (!q.empty()){
		node t = q.front();
		q.pop();
		if (t.val == y)
			return t.level;
		if (t.val*2==y || t.val-1==y)
			return t.level+1;
		if (visited.find(t.val*2)==visited.end() && t.val<y){
			n.val = t.val*2;
			n.level = t.level+1;
			q.push(n);
			visited.insert(t.val*2);
		}
		if (visited.find(t.val-1)==visited.end() && (t.val-1)>0){
			n.val = t.val-1;
			n.level = t.level+1;
			q.push(n);
			visited.insert(t.val-1);
		}
	}
}
int main(){
	int t; cin >> t;
	while (t--){
		int x, y; cin >> x >> y;
		cout << solve(x, y) <<endl;
	}
}

BI?N ??I S? NGUY�N T?
B�i l�m t?t nh?t
Cho c?p s? S v� T l� c�c s? nguy�n t? c� 4 ch? s? (V� d? S = 1033, T = 8197 l� c�c s? nguy�n t? c� 4 ch? s?). H�y vi?t ch??ng tr�nh t�m c�ch d?ch chuy?n S th�nh T th?a m�n ??ng th?i nh?ng ?i?u ki?n d??i ?�y:
M?i ph�p d?ch chuy?n ch? ???c ph�p thay ??i m?t ch? s? c?a s? ? b??c tr??c ?� (v� d? n?u S=1033 th� ph�p d?ch chuy?n S th�nh 1733 l� h?p l?);
S? nh?n ???c c?ng l� m?t s? nguy�n t? c� 4 ch? s? (v� d? n?u S=1033 th� ph�p d?ch chuy?n S th�nh 1833 l� kh�ng h?p l?, v� S d?ch chuy?n th�nh 1733 l� h?p l?);
S? c�c b??c d?ch chuy?n l� �t nh?t.
V� d? s? c�c ph�p d?ch chuy?n �t nh?t ?? S = 1033 th�nh� T = 8179 l� 6 bao g?m c�c ph�p d?ch chuy?n nh? sau:�������
8179�ߠ8779ߠ3779ߠ3739ߠ3733ߠ1733ߠ1033.
Input:
D�ng ??u ti�n ??a v�o s? l??ng test T (T?100)
Nh?ng d�ng k? ti?p m?i d�ng ??a v�o m?t test. M?i test l� m?t b? ?�i S, T.
Output:
??a ra k?t qu? m?i test theo t?ng d�ng.
V� d?:
Input	Output
2
1033 8179
1033 8779	6
5


#include<bits/stdc++.h>
using namespace std;
const long limit = 2e5+5;
long long x, y, t;
int d[limit] = {0};
vector<long long> a;
bool ok[limit];
int dem[limit];
vector<long long> ke[limit];
queue<long long> q;
void sieve(){
	for (int i = 2; i <= 9999; i++){
		if (d[i] == 0){
			for (int j = i*i; j <= 9999; j += i)
				d[j] = 1;
		}
	}
	for (int i = 1000; i <= 9999; i++)
		if (d[i] == 0)
			a.push_back(i);
}
bool check(long long x, long long y){
	int d = 0;
	while (x && y){
		if (x%10 != y %10) d++;
		x /= 10; y /= 10;
	}
	return d == 1;
}
void init(){
	for (int i = 0; i < a.size()-1; i++){
		for (int j = i+1; j < a.size(); j++){
			if (check(a[i], a[j])){
				ke[a[i]].push_back(a[j]);
				ke[a[j]].push_back(a[i]);
			}
		}
	}
}
int BFS(long long u, long long d){
	q.push(u);
	dem[u] = 0;
	while (q.size() > 0){
		u = q.front();
		q.pop();
		ok[u] = true;
		if (u == d) return dem[d];
		for (int i = 0; i < ke[u].size(); i++){
			long long v = ke[u][i];
			if (ok[v]) continue;
			ok[v] = true;
			dem[v] = dem[u] + 1;
			q.push(v);
		}
	}
}
int main(){
	sieve();
	init();
	cin >> t;
	while (t--){
		for (int i = 0; i < limit; i++){
			ok[i] = false;
			dem[i] = 0;
		}
		while (q.size()) q.pop();
		cin >> x >> y;
		cout << BFS(x, y) << endl;
	}
	return 0;
}
