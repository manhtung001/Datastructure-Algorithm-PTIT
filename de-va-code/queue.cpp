C?U TRÚC D? LI?U HÀNG ??I 1
Bài làm t?t nh?t
Ban ??u cho m?t queue r?ng. B?n c?n th?c hi?n các truy v?n sau:
Tr? v? kích th??c c?a queue
Ki?m tra xem queue có r?ng không, n?u có in ra “YES”, n?u không in ra “NO”.
Cho m?t s? nguyên và ??y s? nguyên này vào cu?i queue.
Lo?i b? ph?n t? ? ??u queue n?u queue không r?ng, n?u r?ng không c?n th?c hi?n.
Tr? v? ph?n t? ? ??u queue, n?u queue r?ng in ra -1.
Tr? v? ph?n t? ? cu?i queue, n?u queue r?ng in ra -1.
D? li?u vào
Dòng ??u tiên ch?a s? nguyên T là s? b? d? li?u, m?i b? d? theo d?ng sau.
Dòng ??u tiên ch?a s? nguyên n - l??ng truy v?n (1 ? n ? 1000)
N dòng ti?p theo, m?i dòng s? ghi lo?i truy v?n nh? trên, v?i truy v?n lo?i 3 s? có thêm m?t s? nguyên, không quá 106.
K?t qu?: In ra k?t qu? c?a các truy v?n..
Ví d?:
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

C?U TRÚC D? LI?U HÀNG ??I 2
Bài làm t?t nh?t
Yêu c?u b?n xây d?ng m?t queue v?i các truy v?n sau ?ây:
“PUSH x”: Thêm ph?n t? x vào cu?i c?a queue (0 ? x ? 1000).
“PRINTFRONT”: In ra ph?n t? ??u tiên c?a queue. N?u queue r?ng, in ra “NONE”.
“POP”: Xóa ph?n t? ? ??u c?a queue. N?u queue r?ng, không làm gì c?.
D? li?u vào:
Dòng ??u tiên là s? l??ng truy v?n Q (Q ? 100000).
M?i truy v?n có d?ng nh? trên.
K?t qu?:
 
V?i m?i truy v?n “PRINT”, hãy in ra ph?n t? ??u tiên c?a queue. N?u queue r?ng, in ra “NONE”.
Ví d?:
 
 
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

HÀNG ??I HAI ??U (DEQUEUE)
Bài làm t?t nh?t
Yêu c?u b?n xây d?ng m?t hàng ??i hai ??u v?i các truy v?n sau ?ây:
“PUSHFRONT x”: Thêm ph?n t? x vào ??u c?a dequeue (0 ? x ? 1000).
“PRINTFRONT”: In ra ph?n t? ??u tiên c?a dequeue. N?u dequeue r?ng, in ra “NONE”.
“POPFRONT”: Xóa ph?n t? ??u c?a dequeue. N?u dequeue r?ng, không làm gì c?.
“PUSHBACK x”: Thêm ph?n t? x vào cu?i c?a dequeue (0 ? x ? 1000).
“PRINTBACK”: In ra ph?n t? cu?i c?a dequeue. N?u dequeue r?ng, in ra “NONE”.
“POPBACK”: Xóa ph?n t? cu?i c?a dequeue. N?u dequeue r?ng, không làm gì c?.
D? li?u vào:
Dòng ??u tiên là s? l??ng truy v?n Q (Q ? 100000).
M?i truy v?n có d?ng nh? trên.
K?t qu?: 
V?i m?i truy v?n “PRINTFRONT” và “PRINTBACK”, hãy in ra k?t qu? trên m?t dòng.
Ví d?:
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
 	2
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


S? NH? PHÂN T? 1 ??N N
Bài làm t?t nh?t
Cho s? t? nhiên n. Hãy in ra t?t c? các s? nh? phân t? 1 ??n n.
Input:
Dòng ??u tiên ghi l?i s? l??ng test T (T?100).
M?i test là m?t s? t? nhiên n ???c ghi trên m?t dòng (n?10000).
Output:
??a ra k?t qu? m?i test trên m?t dòng.
Ví d?:
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

S? 0 VÀ S? 9
Bài làm t?t nh?t
Cho s? t? nhiên N. Hãy tìm s? nguyên d??ng X nh? nh?t ???c t?o b?i s? 9 và s? 0 chia h?t cho N. Ví d? v?i N = 5 ta s? tìm ra  X = 90.
Input:
Dòng ??u tiên ghi l?i s? l??ng test T (T?100).
Nh?ng dòng k? ti?p m?i dòng ghi l?i m?t test. M?i test là m?t s? t? nhiên N ???c ghi trên m?t dòng (N?100).
Output:
??a ra theo t?ng dòng s? X nh? nh?t chia h?t cho N tìm ???c .
Ví d?:
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
Bài làm t?t nh?t
Ta g?i s? nguyên d??ng K là m?t s? BDN n?u các ch? s? trong K ch? bao g?m các 0 ho?c 1 có ngh?a. Ví d? s? K = 1, 10, 101. Cho s? t? nhiên N (N<263). Hãy cho bi?t có bao nhiêu s? BDN nh? h?n N. Ví d? N=100 ta có 4 s? BDN bao g?m các s?: 1, 10, 11, 100.
Input:
Dòng ??u tiên ghi l?i s? t? nhiên T là s? l??ng Test;
T dòng k? ti?p m?i dòng ghi l?i m?t b? Test. M?i test là m?t s? t? nhiên N.
            Output:
??a ra k?t qu? m?i test theo t?ng dòng.
            Ví d?:
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
Bài làm t?t nh?t
Ta g?i s? nguyên d??ng K là m?t s? BDN n?u các ch? s? trong K ch? bao g?m các 0 ho?c 1 có ngh?a. Ví d? s? K =  101 là s? BDN, k=102 không ph?i là s? BDN.
S? BDN c?a N là s? P =M*N sao cho P là s? BDN. Cho s? t? nhiên N (N<1000), hãy tìm s? BDN nh? nh?t c?a N.
Ví d?. V?i N=2, ta tìm ???c s? BDN c?a N là P = 5*2=10. N = 17 ta tìm ???c s? BDN c?a 17 là P = 653*17=11101.
Input:
Dòng ??u tiên ghi l?i s? t? nhiên T là s? l??ng Test;
T dòng k? ti?p m?i dòng ghi l?i m?t b? Test. M?i test là m?t s? t? nhiên N.
          Output:
                        ??a ra k?t qu? m?i test theo t?ng dòng.
          Ví d?:
 
Input	Output
3
2
12
17	10
11100
11101
 
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

S? L?C PHÁT 1
Bài làm t?t nh?t
M?t s? ???c g?i là l?c phát n?u ch? có 2 ch? s? 6 và 8. Cho s? t? nhiên N. Hãy li?t kê các s? l?c phát có không quá N ch? s?.
Input:
Dòng ??u tiên ghi l?i s? t? nhiên T là s? l??ng b? test (T<10);
T dòng k? ti?p m?i dòng ghi s? N (1<N<15).
            Output:
In ra ?áp án theo th? t? gi?m d?n.
            Ví d?:
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

GIÁ TR? NH? NH?T C?A XÂU
Bài làm t?t nh?t
Cho xâu ký t? S[] bao g?m các ký t? in hoa [A, B, …,Z]. Ta ??nh ngh?a giá tr? c?a xâu S[] là t?ng bình ph??ng s? l?n xu?t hi?n m?i ký t? trong xâu. Ví d? v?i xâu S[] = “AAABBCD” ta có F(S) = 32 + 22 + 12 + 12 = 15. Hãy tìm giá tr? nh? nh?t c?a xâu S[] sau khi lo?i b? K ký t? trong xâu.
Input:
Dòng ??u tiên ??a vào s? l??ng test T (T?100).
M?i test ???c t? ch?c thành 2 dòng. Dòng th? nh?t ghi l?i s? K. Dòng th? 2 ghi l?i xâu ký t? S[] có ?? dài không v??t quá 10^6.
Output:
??a ra giá tr? nh? nh?t c?a m?i test theo t?ng dòng.
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

BI?N ??I S – T
Bài làm t?t nh?t
Cho hai s? nguyên d??ng S và T (S, T<10000) và hai thao tác (a), (b) d??i ?ây:
Thao tác (a): Tr? S ?i 1  (S = S-1) ;
Thao tác (b): Nhân S v?i 2 ( S = S*2);
Hãy d?ch chuy?n S thành T sao cho s? l?n th?c hi?n các thao tác (a), (b) là ít nh?t. Ví d? v?i    S =2, T=5 thì s? các b??c ít nh?t ?? d?ch chuy?n S thành T thông qua 4 thao tác sau:
Thao tác (a): 2*2 = 4;
Thao tác (b): 4-1 = 3;
Thao tác (a): 3*2 = 6;
Thao tác (b): 6-1 = 5;
Input:
Dòng ??u tiên ghi l?i s? t? nhiên T là s? l??ng Test;
T dòng k? ti?p m?i dòng ghi l?i m?t b? Test. M?i test là m?t b? ?ôi S và T.
          Output: ??a ra k?t qu? m?i test theo t?ng dòng.
         
          Ví d?:
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

BI?N ??I S? NGUYÊN T?
Bài làm t?t nh?t
Cho c?p s? S và T là các s? nguyên t? có 4 ch? s? (Ví d? S = 1033, T = 8197 là các s? nguyên t? có 4 ch? s?). Hãy vi?t ch??ng trình tìm cách d?ch chuy?n S thành T th?a mãn ??ng th?i nh?ng ?i?u ki?n d??i ?ây:
M?i phép d?ch chuy?n ch? ???c phép thay ??i m?t ch? s? c?a s? ? b??c tr??c ?ó (ví d? n?u S=1033 thì phép d?ch chuy?n S thành 1733 là h?p l?);
S? nh?n ???c c?ng là m?t s? nguyên t? có 4 ch? s? (ví d? n?u S=1033 thì phép d?ch chuy?n S thành 1833 là không h?p l?, và S d?ch chuy?n thành 1733 là h?p l?);
S? các b??c d?ch chuy?n là ít nh?t.
Ví d? s? các phép d?ch chuy?n ít nh?t ?? S = 1033 thành  T = 8179 là 6 bao g?m các phép d?ch chuy?n nh? sau:       
8179 ß 8779ß 3779ß 3739ß 3733ß 1733ß 1033.
Input:
Dòng ??u tiên ??a vào s? l??ng test T (T?100)
Nh?ng dòng k? ti?p m?i dòng ??a vào m?t test. M?i test là m?t b? ?ôi S, T.
Output:
??a ra k?t qu? m?i test theo t?ng dòng.
Ví d?:
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
