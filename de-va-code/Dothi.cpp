CHUY?N DANH SÁCH C?NH SANG DANH SÁCH K?
Bài làm t?t nh?t
Cho ?? th? vô h??ng G=<V, E> ???c bi?u di?n d??i d?ng danh sách c?nh. Hãy vi?t ch??ng trình th?c hi?n chuy?n ??i bi?u di?n ?? th? d??i d?ng danh sách k?.
Input:
?	Dòng ??u tiên ??a vào T là s? l??ng b? test.
?	Nh?ng dòng ti?p theo ??a vào các b? test. M?i b? test g?m |E| +1 dòng: dòng ??u tiên ??a vào hai s? |V|, |E| t??ng ?ng v?i s? ??nh và s? c?nh c?a ?? th?; |E| dòng ti?p theo ??a vào các b? ?ôi uÎV, vÎV t??ng ?ng v?i m?t c?nh c?a ?? th?.
?	T, |V|, |E| th?a mãn ràng bu?c: 1?T?200; 1?|V|?103; 1?|E|?|V|(|V|-1)/2;
Output:
?	??a ra danh sách k? c?a các ??nh t??ng ?ng theo khuôn d?ng c?a ví d? d??i ?ây. Các ??nh trong danh sách in ra theo th? t? t?ng d?n.
     Ví d?:
Input:	Output:
1
6  9
1  2
1  3 
2  3
2  5
3  4
3  5
4  5
4  6
5  6	1: 2 3
2: 1 3 5
3: 1 2 4 5
4: 3 5 6
5: 2 3 4 6
6: 4 5


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		vector<ll> ke[1001];
		ll V, E, u, v;
		cin >> V >> E;
		for(int i = 1; i <= E; i++){
			cin >> u >> v;
			ke[u].push_back(v);
			ke[v].push_back(u);
		}
		for(int i = 1; i <= V; i++){
			sort(ke[i].begin(), ke[i].end());
		}
		for(int i = 1; i <= V; i++){
			cout << i << ": ";
			for(int j = 0; j < ke[i].size(); j++){
				cout << ke[i][j] << " ";
			}
			cout << endl;
		}
	}
}
Cho ??n ?? th? G vô h??ng liên thông ???c mô t? b?i danh sách k?. Hãy in ra danh sách c?nh t??ng ?ng c?a G.
Input
?	Dòng ??u tiên ghi s? N là s? ??nh (1<N<50)
?	N dòng ti?p theo m?i dòng ghi 1 danh sách k? l?n l??t theo th? t? t? ??nh 1 ??n ??nh N
Output: Ghi ra l?n l??t t?ng c?nh c?a ?? th? theo th? t? t?ng d?n.
Ví d?
Input	Output
3
2 3
1 3
1 2
 	1 2
1 3
2 3


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int n;
	cin >> n;
	cin.ignore();
	int a[51][51];
	for(int t = 1; t <= n; t++){
		string s;
		getline(cin,s);
		for(int i = 0; i < s.size(); i++){
			int u = 0;
			while(i < s.size() && s[i] != ' '){
				u = u*10 + (s[i]-'0'); //TH dinh >= 2 cs
				i++;
			}
			a[t][u] = 1;
			a[u][t] = 1;
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(a[i][j] == 1){
				cout << i << " " << j << endl;
				a[i][j] = a[j][i] = 0;
			}
		}
	}
}

 BI?U DI?N ?? TH? CÓ H??NG.
Bài làm t?t nh?t
Cho ?? th? có h??ng G=<V, E> ???c bi?u di?n d??i d?ng danh sách c?nh. Hãy vi?t ch??ng trình th?c hi?n chuy?n ??i bi?u di?n ?? th? d??i d?ng danh sách k?.
Input:
?	Dòng ??u tiên ??a vào T là s? l??ng b? test.
?	Nh?ng dòng ti?p theo ??a vào các b? test. M?i b? test g?m |E| +1 dòng: dòng ??u tiên ??a vào hai s? |V|, |E| t??ng ?ng v?i s? ??nh và s? c?nh c?a ?? th?; |E| dòng ti?p theo ??a vào các b? ?ôi uÎV, vÎV t??ng ?ng v?i m?t c?nh c?a ?? th?.
?	T, |V|, |E| th?a mãn ràng bu?c: 1?T?200; 1?|V|?103; 1?|E|?|V|(|V|-1)/2;
Output:
?	??a ra danh sách k? c?a các ??nh t??ng ?ng theo khuôn d?ng c?a ví d? d??i ?ây. Các ??nh trong danh sách in ra theo th? t? t?ng d?n.
     Ví d?:
 
Input:	Output:
1
6  9
1  2
2  5
3  1
3  2
3  5
4  3
5  4
5  6
6  4	1: 2
2: 5
3: 1 2 5
4: 3
5: 4 6
6: 4


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		vector<ll> ke[1001];
		ll V, E, u, v;
		cin >> V >> E;
		for(int i = 1; i <= E; i++){
			cin >> u >> v;
			ke[u].push_back(v);
		}
		for(int i = 1; i <= V; i++){
			sort(ke[i].begin(), ke[i].end());
		}
		for(int i = 1; i <= V; i++){
			cout << i << ": ";
			for(int j = 0; j < ke[i].size(); j++){
				cout << ke[i][j] << " ";
			}
			cout << endl;
		}
	}
}

DFS TRÊN ?? TH? VÔ H??NG
Bài làm t?t nh?t
Cho ?? th? vô h??ng G=<V, E> ???c bi?u di?n d??i d?ng danh sách c?nh. Hãy vi?t thu?t toán duy?t theo chi?u sâu b?t ??u t?i ??nh uÎV (DFS(u)=?)
Input:
?	Dòng ??u tiên ??a vào T là s? l??ng b? test.
?	Nh?ng dòng ti?p theo ??a vào các b? test. M?i b? test g?m |E| +1 dòng: dòng ??u tiên ??a vào ba s? |V|, |E| t??ng ?ng v?i s? ??nh và s? c?nh c?a ?? th?, và u là ??nh xu?t phát; |E| dòng ti?p theo ??a vào các b? ?ôi uÎV, vÎV t??ng ?ng v?i m?t c?nh c?a ?? th?.
?	T, |V|, |E| th?a mãn ràng bu?c: 1?T?200; 1?|V|?103; 1?|E|?|V|(|V|-1)/2;
Output:
?	??a ra danh sách các ??nh ???c duy?t theo thu?t toán DFS(u) c?a m?i test theo khuôn d?ng c?a ví d? d??i ?ây.
      Ví d?:
Input:	Output:
1
6 9 5
1 2
1 3
2 3
2 4
3 4
3 5
4 5
4 6
5 6	5 3 1 2 4 6


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll vs[1001], e[1001];
vector<int> ke[1001];
void DFS(int u){
	cout << u << " ";
	vs[u] = 1;
	for(int i = 0; i < ke[u].size(); i++){
		if(vs[ke[u][i]] == 0){
			vs[ke[u][i]] = 1;
			DFS(ke[u][i]);
		}
	}
}
main(){
	int t;
	cin >> t;
	while(t--){
		memset(ke,0,sizeof(ke));
		ll V, E, u, v, x;
        cin >> V >> E >> x;
        for(int i = 1; i <= E; i++){
        	cin >> u >> v;
        	ke[u].push_back(v);
        	ke[v].push_back(u);
		}
		for(int i = 1; i <= V; i++){
			sort(ke[i].begin(), ke[i].end());
		}
		memset(vs,0,sizeof(vs));
		DFS(x);
		cout << endl;
	}
}

BFS TRÊN ?? TH? VÔ H??NG
Bài làm t?t nh?t
Cho ?? th? vô h??ng G=<V, E> ???c bi?u di?n d??i d?ng danh sách c?nh. Hãy vi?t thu?t toán duy?t theo chi?u r?ng b?t ??u t?i ??nh uÎV (BFS(u)=?)
Input:
?	Dòng ??u tiên ??a vào T là s? l??ng b? test.
?	Nh?ng dòng ti?p theo ??a vào các b? test. M?i b? test g?m 2 dòng: dòng ??u tiên ??a vào ba s? |V|, |E|, uÎV t??ng ?ng v?i s? ??nh, s? c?nh và ??nh b?t ??u duy?t; Dòng ti?p theo ??a vào các b? ?ôi uÎV, vÎV t??ng ?ng v?i m?t c?nh c?a ?? th?.
?	T, |V|, |E| th?a mãn ràng bu?c: 1?T?200; 1?|V|?103; 1?|E|?|V|(|V|-1)/2;
Output:
?	??a ra danh sách các ??nh ???c duy?t theo thu?t toán BFS(u) c?a m?i test theo khuôn d?ng c?a ví d? d??i ?ây.
     Ví d?:
Input:	Output:
1
6 9 1
1 2 1 3 2 3 2 5 3 4 3 5 4 5 4 6 5 6	1 2 3 5 4 6

#include<bits/stdc++.h>
using namespace std;
int A[1005][1005], n, m ,u;
bool used[1005];
void init(){
	cin >> n >> m >> u;
	memset(A, 0, sizeof(A));
	memset(used, false, sizeof(used));
	for (int i = 1; i <= m; i++){
			int x, y; cin >> x >> y;
			A[x][y] = 1;
			A[y][x] = 1;
	}
}
void BFS(){
	queue<int> Q;
	Q.push(u); used[u] = true;
	while(!Q.empty()){
		int s = Q.front();
		cout << s << " ";
		Q.pop();
		for (int t = 1; t <= n; t++){
			if (!used[t] && A[s][t]){
				Q.push(t);
				used[t] = true;
			}
		}
	}
}
int main(){
	int t; cin >> t;
	while (t--){
		init();
		BFS();
		cout << endl;
	}
}

LI?T KÊ C?NH C?U
Bài làm t?t nh?t
Cho ?? th? vô h??ng liên thông G=<V, E> ???c bi?u di?n d??i d?ng danh sách c?nh. Hãy ??a ra t?t c? các c?nh c?u c?a ?? th??
Input:
?	Dòng ??u tiên ??a vào T là s? l??ng b? test.
?	Nh?ng dòng ti?p theo ??a vào các b? test. M?i b? test g?m |E| + 1 dòng: dòng ??u tiên ??a vào hai s? |V|, |E| t??ng ?ng v?i s? ??nh và s? c?nh; |E| dòng ti?p theo ??a vào các b? ?ôi u, v t??ng ?ng v?i m?t c?nh c?a ?? th?.
?	T, |V|, |E| th?a mãn ràng bu?c: 1?T?100; 1?|V|?103; 1?|E|?|V|(|V|-1)/2;
Output:
?	??a ra danh sách các c?ch c?u c?a m?i test theo t?ng dòng. In ra ?áp án theo th? t? t? ?i?n, theo d?ng “a b …” v?i a < b.
       Ví d?:
Input:	Output:
1
5 5
1 2 
1 3
2 3
2 5
3 4	2 5 3 4
 
#include<bits/stdc++.h>
using namespace std;
int n, m;
bool used[1005];
vector<int> vt[1005];
vector<pair<int,int> > ans;
void Reinit(){
	for (int i=0; i<1005; i++)
		vt[i].clear();
	memset(used, false, sizeof(used));
}
void BFS(int u){
	queue<int> Q;
	Q.push(u);
	used[u] = true;
	while(!Q.empty()){
		int s = Q.front();
		Q.pop();
		for (int t=0; t<vt[s].size(); t++){
			if (!used[vt[s][t]]){
				Q.push(vt[s][t]);
				used[vt[s][t]] = true;	
			}
		}
	}
}
int TPLT(){
	int res = 0;
	for (int  i=1; i<=n; i++){
		if (!used[i]){
			res++;
			BFS(i);
		}
	}
	return res;
}
void Canhcau(int c, int res, vector<pair<int,int> > tmp){
	for (int i=0; i<m; i++){
		if (i != c){
			vt[tmp[i].first].push_back(tmp[i].second);
			vt[tmp[i].second].push_back(tmp[i].first);
		}
	}
	int d = TPLT();
	if (d > res){
		if(tmp[c].first < tmp[c].second)
			ans.push_back({tmp[c].first, tmp[c].second});
		else
			ans.push_back({tmp[c].second, tmp[c].first});
	}
}
int main(){
	int T; cin >> T;
	while (T--){
		Reinit();
		ans.clear();
		cin >> n >> m;
		vector<pair<int,int> > tmp;
		for (int i=0; i<m; i++){
			int x, y; cin >> x >> y;
			tmp.push_back({x, y});
			vt[x].push_back(y);
			vt[y].push_back(x);
		}
		int res = TPLT();
		for (int i=0; i<m; i++){
			Reinit();
			Canhcau(i, res, tmp);
		}
		sort(ans.begin(), ans.end());
		for (int i=0; i<ans.size(); i++)
			cout << ans[i].first << " " << ans[i].second << " ";
		cout << endl;
	}
}

???NG ?I VÀ CHU TRÌNH EULER V?I ?? TH? VÔ H??NG
Bài làm t?t nh?t
Cho ?? th? vô h??ng liên thông G=<V, E> ???c bi?u di?n d??i d?ng danh sách c?nh. Hãy ki?m tra xem ?? th? có ???ng ?i Euler hay chu trình Euler hay không?

???ng ?i Euler b?t ??u t?i m?t ??nh, và k?t thúc t?i m?t ??nh khác.
Chu trình Euler b?t ??u t?i m?t ??nh, và k?t thúc chu trình t?i chính ??nh ?ó.
Input:
?	Dòng ??u tiên ??a vào T là s? l??ng b? test.
?	Nh?ng dòng ti?p theo ??a vào các b? test. M?i b? test g?m 2 dòng: dòng ??u tiên ??a vào hai s? |V|, |E| t??ng ?ng v?i s? ??nh,  s? c?nh c?a ?? th?; Dòng ti?p theo ??a vào các b? ?ôi uÎV, vÎV t??ng ?ng v?i m?t c?nh c?a ?? th?.
?	T, |V|, |E| th?a mãn ràng bu?c: 1?T?100; 1?|V|?103; 1?|E|?|V|(|V|-1)/2;
Output:
?	??a ra 1, 2, 0 k?t qu? m?i test theo t?ng dòng t??ng ?ng v?i ?? th? có ???ng ?i Euler, chu trình Euler và tr??ng h?p không t?n t?i.
      Ví d?:
 
 
 
Input:	Output:
2
6  10  
1 2 1 3 2 3 2 4 2 5 3 4 3 5 4 5 4 6 5 6
6 9  
1  2 1  3 2  3 2  4 2  5 3  4 3  5 4  5 4  6	2
1
 
#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<int> adj[1005];
int isEulerian(){
	int odd = 0;
	for (int i=1; i<=n; i++){
		if (adj[i].size()%2 != 0)
			odd++;
	}
	if (odd > 2)
		return 0;
	return (odd == 2)? 1 : 2;
}
int main(){
	int T; cin >> T;
	while (T--){
		cin >> n >> m;
		for (int i=0; i<1005; i++)
			adj[i].clear();
		for (int i=1; i<=m; i++){
			int x, y; cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		cout << isEulerian() << endl;
	}
}
CHU TRÌNH EULER TRONG ?? TH? CÓ H??NG
Bài làm t?t nh?t
Cho ?? th? có h??ng liên thông y?u G=<V, E> ???c bi?u di?n d??i d?ng danh sách c?nh. Hãy ki?m tra xem ?? th? có chu trình Euler hay không?
Input:
?	Dòng ??u tiên ??a vào T là s? l??ng b? test.
?	Nh?ng dòng ti?p theo ??a vào các b? test. M?i b? test g?m 2 dòng: dòng ??u tiên ??a vào hai s? |V|, |E| t??ng ?ng v?i s? ??nh,  s? c?nh c?a ?? th?; Dòng ti?p theo ??a vào các b? ?ôi uÎV, vÎV t??ng ?ng v?i m?t c?nh c?a ?? th?.
?	T, |V|, |E| th?a mãn ràng bu?c: 1?T?100; 1?|V|?103; 1?|E|?|V|(|V|-1)/2;
Output:
?	??a ra 1, 0 k?t qu? m?i test theo t?ng dòng t??ng ?ng v?i ?? th? có chu trình Euler và tr??ng h?p không t?n t?i ?áp án.
      Ví d?:
Input:	Output:
2
6  10  
1 2 2 4 2 5 3 1 3 2 4 3 4 5 5 3 5 6 6 4
3 3
1 2 2 3 1 3	1
0

#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<int> adj[1005];
bool isEulerCycle(){
	vector<int> start(1005, 0), end(1005, 0);
	for (int i=1; i<=n; i++){
		int sum = 0;
		for (int j=0; j<adj[i].size(); j++){
			start[adj[i][j]]++;
			sum++;
		}
		end[i] = sum;
	}
	if (start == end)
		return true;
	return false;
}
int main(){
	int T; cin >> T;
	while (T--){
		cin >> n >> m;
		for (int i=0; i<1005; i++)
			adj[i].clear();
		for (int i=1; i<=m; i++){
			int x, y; cin >> x >> y;
			adj[x].push_back(y);
		}
		if (isEulerCycle()) cout << 1;
		else cout << 0;
		cout << endl;
	}
}
CHUY?N MA TR?N K? SANG DANH SÁCH K?
Bài làm t?t nh?t
Ma tr?n k? A c?a m?t ?? th? vô h??ng là m?t ma tr?n ch? có các s? 0 ho?c 1 trong ?ó A[i][j] = 1 có ý ngh?a là ??nh i k? v?i ??nh j (ch? s? tính t? 1).
Danh sách k? thì li?t kê các ??nh k? v?i ??nh ?ó theo th? t? t?ng d?n.
Hãy chuy?n bi?u di?n ?? th? t? d?ng ma tr?n k? sang d?ng danh sách k?.
Input: Dòng ??u tiên ch?a s? nguyên n – s? ??nh c?a ?? th? (1 < n ? 1000). n dòng ti?p theo, m?i dòng có n s? nguyên có giá tr? 0 và 1 mô t? ma tr?n k? c?a ?? th?.
Output:  G?m n dòng, dòng th? i ch?a các s? nguyên là ??nh có n?i v?i ??nh i và ???c s?p x?p t?ng d?n. D? li?u ??m b?o m?i ??nh có k?t n?i v?i ít nh?t 1 ??nh khác.
Ví d?:
Input	Output
3
0 1 1
1 0 1
1 1 0	2 3
1 3
1 2



#include<bits/stdc++.h>
using namespace std;
int matrix[1005][1005];
int main(){
	vector<int> res;
	int n; cin >> n;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++)
			cin >> matrix[i][j];
	}
	for (int i = 1; i <= n; i++){
		res.clear();
		for (int j = 1; j <= n; j++){
			if (matrix[i][j])
				res.push_back(j);
		}
		for (int k = 0; k < res.size(); k++)
			cout << res[k] << " ";
		cout << endl;
	}	
	
}

CHUY?N DANH SÁCH K? SANG MA TR?N K?
Bài làm t?t nh?t
Cho ??n ?? th? vô h??ng có n ??nh d??i d?ng danh sách k?.
Hãy bi?u di?n ?? th? b?ng ma tr?n k?.
Input: Dòng ??u tiên ch?a s? nguyên n – s? ??nh c?a ?? th? (1 ?  n ?  1000). n dòng ti?p theo, dòng th? i ch?a các s? nguyên là các ??nh k? v?i ??nh i.  
Output:  Ma tr?n k? c?a ?? th?.
Ví d?:
Input	Output
3
2 3
1 3
1 2	0 1 1
1 0 1
1 1 0


#include<bits/stdc++.h>
using namespace std;
int n;
int matrix[1005][1005];
int strToNum(string s){
	int res=0;
	for (int i=0; i<s.length(); i++)
		res = res*10+(s[i]-'0');
	return res;
}
int main(){
	int n; cin >> n;
	cin.ignore();
	memset(matrix, 0 , sizeof(matrix));
	for (int i=1; i<=n; i++){
		string s; getline(cin, s);
		stringstream ss;
		ss<<s;
		while (ss>>s){
			int tmp=strToNum(s);
			matrix[i][tmp] = 1;
		}
	}
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++)
			cout<<matrix[i][j]<<" ";
		cout << endl;
	}
}
DFS TRÊN ?? TH? CÓ H??NG
Bài làm t?t nh?t
Cho ?? th? có h??ng G=<V, E> ???c bi?u di?n d??i d?ng danh sách c?nh. Hãy vi?t thu?t toán duy?t theo chi?u sâu b?t ??u t?i ??nh uÎV (DFS(u)=?)
Input:
?	Dòng ??u tiên ??a vào T là s? l??ng b? test.
?	Nh?ng dòng ti?p theo ??a vào các b? test. M?i b? test g?m 2 dòng: dòng ??u tiên ??a vào ba s? |V|, |E|, uÎV t??ng ?ng v?i s? ??nh, s? c?nh và ??nh b?t ??u duy?t; Dòng ti?p theo ??a vào các b? ?ôi uÎV, vÎV t??ng ?ng v?i m?t c?nh c?a ?? th?.
?	T, |V|, |E| th?a mãn ràng bu?c: 1?T?200; 1?|V|?103; 1?|E|?|V|(|V|-1)/2;
Output:
?	??a ra danh sách các ??nh ???c duy?t theo thu?t toán DFS(u) c?a m?i test theo khuôn d?ng c?a ví d? d??i ?ây.
     Ví d?:
Input:	Output:
1
6 9 5
1 2 2 5 3 1 3 2 3 5 4 3 5 4 5 6 6 3	5 4 3 1 2 6
 
#include<bits/stdc++.h>
int A[1005][1005], n, m, u;
bool used[1005];
using namespace std;

void init(){
	cin >> n >> m >> u;
	memset(A, 0, sizeof(A));
	memset(used, false, sizeof(used));
	for (int i = 1; i <= m; i++){
			int x, y; cin >> x >> y;
			A[x][y] = 1;
	}
}
void DFS(){
	stack<int> St;
	St.push(u); used[u] = true;
	cout << u << " ";
	while(!St.empty()){
		int s = St.top();
		St.pop();
		for (int t = 1; t <= n; t++){
			if (!used[t] && A[s][t]){
				cout << t << " ";
				used[t] = true;
				St.push(s);
				St.push(t);
				break;
			}
		}
	}
}
int main(){
	int t; cin >> t;
	while (t--){
		init();
		DFS();
		cout << endl;
	}
}

BFS TRÊN ?? TH? CÓ H??NG
Bài làm t?t nh?t
Cho ?? th? có h??ng G=<V, E> ???c bi?u di?n d??i d?ng danh sách c?nh. Hãy vi?t thu?t toán duy?t theo chi?u r?ng b?t ??u t?i ??nh uÎV (BFS(u)=?)
Input:
?	Dòng ??u tiên ??a vào T là s? l??ng b? test.
?	Nh?ng dòng ti?p theo ??a vào các b? test. M?i b? test g?m 2 dòng: dòng ??u tiên ??a vào ba s? |V|, |E|, uÎV t??ng ?ng v?i s? ??nh, s? c?nh và ??nh b?t ??u duy?t; Dòng ti?p theo ??a vào các b? ?ôi uÎV, vÎV t??ng ?ng v?i m?t c?nh c?a ?? th?.
?	T, |V|, |E| th?a mãn ràng bu?c: 1?T?200; 1?|V|?103; 1?|E|?|V|(|V|-1)/2;
Output:
?	??a ra danh sách các ??nh ???c duy?t theo thu?t toán BFS(u) c?a m?i test theo khuôn d?ng c?a ví d? d??i ?ây.
      Ví d?:
Input:	Output:
1
6  9  1
1 2 2 5 3 1 3 2 3 5 4 3 5 4 5 6 6 4	1 2 5 4 6 3


#include<bits/stdc++.h>
using namespace std;
int A[1005][1005], n, m ,u;
bool used[1005];
void init(){
	cin >> n >> m >> u;
	memset(A, 0, sizeof(A));
	memset(used, false, sizeof(used));
	for (int i = 1; i <= m; i++){
			int x, y; cin >> x >> y;
			A[x][y] = 1;
	}
}
void BFS(){
	queue<int> Q;
	Q.push(u); used[u] = true;
	while(!Q.empty()){
		int s = Q.front();
		cout << s << " ";
		Q.pop();
		for (int t = 1; t <= n; t++){
			if (!used[t] && A[s][t]){
				Q.push(t);
				used[t] = true;
			}
		}
	}
}
int main(){
	int t; cin >> t;
	while (t--){
		init();
		BFS();
		cout << endl;
	}
}

???NG ?I THEO DFS V?I ?? TH? CÓ H??NG
Bài làm t?t nh?t
Cho ?? th? có h??ng G=<V, E> ???c bi?u di?n d??i d?ng danh sách c?nh. Hãy tìm ???ng ?i t? ??nh sÎV ??n ??nh tÎV trên ?? th? b?ng thu?t toán DFS.
Input:
?	Dòng ??u tiên ??a vào T là s? l??ng b? test.
?	Nh?ng dòng ti?p theo ??a vào các b? test. M?i b? test g?m 2 dòng: dòng ??u tiên ??a vào b?n s? |V|, |E|, sÎV, tÎV t??ng ?ng v?i s? ??nh, s? c?nh,  ??nh u, ??nh v; Dòng ti?p theo ??a vào các b? ?ôi uÎV, vÎV t??ng ?ng v?i m?t c?nh c?a ?? th?.
?	T, |V|, |E| th?a mãn ràng bu?c: 1?T?100; 1?|V|?103; 1?|E|?|V|(|V|-1)/2;
Output:
?	??a ra ???ng ?i t? ??nh s ??n ??nh t c?a m?i test theo thu?t toán DFS c?a m?i test theo khuôn d?ng c?a ví d? d??i ?ây. N?u không có ?áp án, in ra -1.
      Ví d?:
Input:	Output:
1
6  9  1  6
1 2 2 5 3 1 3 2 3 5 4 3 5 4 5 6 6 4	1 2 5 6

#include<bits/stdc++.h>
using namespace std;
int n, m, s, e;
int matrix[1005][1005];
bool visited[1005];
int forward_point[1005];
void init(){
	cin >> n >> m >> s >> e;
	memset(matrix, 0, sizeof(matrix));
	memset(forward_point, 0, sizeof(forward_point));
	memset(visited, false, sizeof(visited));
	for (int i = 1; i <= m; i++){
			int x, y; cin >> x >> y;
			matrix[x][y] = 1;
	}
}
void DFS(int u)
{
    stack<int> st;
    st.push(u);
    visited[u] = true;
    while(!st.empty())
    {
        int s = st.top();
        st.pop();
        for(int t = 1; t <= n; t++)
        {
            if(visited[t] == false && matrix[s][t] == 1)
            {
                forward_point[t] = s;
                visited[t] = true;
                st.push(s);
                st.push(t);
                break;
            }
        }
    }
}

void PrintPath(int s, int e)
{
    if(forward_point[e] == 0)
        cout << "-1" ;
    else
    {
    	vector<int> res;
        res.push_back(e);
        int u = forward_point[e];
        while(u != s)
        {
            res.push_back(u);
            u = forward_point[u];
        }
        res.push_back(s);
        for (int i = res.size()-1; i >= 0; i--)
        	cout << res[i] << " ";
    }
}

int main(){
	int T; cin >> T;
	while (T--){
		init();
		DFS(s);
		PrintPath(s, e);
		cout << endl;
	}
}

???NG THI THEO BFS TRÊN ?? TH? CÓ H??NG
Bài làm t?t nh?t
Cho ?? th? có h??ng G=<V, E> ???c bi?u di?n d??i d?ng danh sách c?nh. Hãy tìm ???ng ?i t? ??nh uÎV ??n ??nh vÎV trên ?? th? b?ng thu?t toán BFS.
Input:
?	Dòng ??u tiên ??a vào T là s? l??ng b? test.
?	Nh?ng dòng ti?p theo ??a vào các b? test. M?i b? test g?m 2 dòng: dòng ??u tiên ??a vào b?n s? |V|, |E|, sÎV, tÎV t??ng ?ng v?i s? ??nh, s? c?nh,  ??nh u, ??nh v; |E| Dòng ti?p theo ??a vào các b? ?ôi uÎV, vÎV t??ng ?ng v?i m?t c?nh c?a ?? th?.
?	T, |V|, |E| th?a mãn ràng bu?c: 1?T?100; 1?|V|?103; 1?|E|?|V|(|V|-1)/2;
Output:
?	??a ra ???ng ?i t? ??nh s ??n ??nh t c?a m?i test theo thu?t toán BFS c?a m?i test theo khuôn d?ng c?a ví d? d??i ?ây. N?u không có ?áp án, in ra -1.
      Ví d?:
Input:	Output:
1
6 9 1 6
1 2 2 5 3 1 3 2 3 5 4 3 5 4 5 6 6 4	1 2 5 6


#include<bits/stdc++.h>
using namespace std;
int n, m, s, e, matrix[1005][1005], f[1005];
bool used[1005];
void init(){
	cin >> n >> m >> s >> e;
	memset(matrix, 0, sizeof(matrix));
	memset(f, 0, sizeof(f));
	memset(used, false, sizeof(used));
	for (int i = 1; i <= m; i++){
			int x, y; cin >> x >> y;
			matrix[x][y] = 1;
	}
}
void BFS(int u){
	queue<int> Q;
	Q.push(u); used[u] = true;
	while(!Q.empty()){
		int s = Q.front();
		Q.pop();
		for (int t = 1; t <= n; t++){
			if (!used[t] && matrix[s][t]){
				f[t] = s;
				used[t] = true;
				Q.push(t);
			}
		}
	}
}
void BFS_Path(int s, int t){
    if(f[t] == 0)
        cout << "-1" << endl;
    else
    {
    	vector<int> res;
        res.push_back(t);
		int u = f[t];
        while(u != s)
        {
            res.push_back(u);
            u = f[u];
        }
        res.push_back(s);
        for (int i = res.size()-1; i >= 0; i--)
        	cout << res[i] << " ";
        cout << endl;
    }
}
int main(){
	int T; cin >> T;
	while (T--){
		init();
		BFS(s);
		BFS_Path(s, e);
	}
}

Cho ?? th? vô h??ng có N ??nh và M c?nh. Có Q truy v?n, m?i truy v?n yêu c?u tr? l?i câu h?i gi?a 2 ??nh x và y có t?n t?i ???ng ?i t?i nhau hay không?
Input:
?	Dòng ??u tiên là s? l??ng b? test T (T ? 20).
?	M?i test g?m 2 s? nguyên N, M (1 ? N, M ? 1000).
?	M dòng ti?p theo, m?i dòng g?m 2 s? nguyên u, v cho bi?t có c?nh n?i gi?a ??nh u và v.
?	Dòng ti?p là s? l??ng truy v?n Q (1 ? Q ? 1000).
?	Q dòng ti?p theo, m?i dòng g?m 2 s? nguyên x và y.
Output:  V?i m?i truy v?n, in ra “YES” n?u có ???ng ?i t? x t?i y, in ra “NO” n?u ng??c l?i.
Ví d?:
Input:	Output
1
6 5
1 2
2 3
3 4
1 4
5 6
2
1 5
2 4	NO
YES


#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<int> vt[1005];
bool used[1005];
int f[1005];
void BFS(int u, int v){
	queue<int> Q;
	Q.push(u); used[u] = true;
	while(!Q.empty()){
		int s = Q.front();
		Q.pop();
		if (s == v){
			cout << "YES";
			return;
		}
		for (int t=0; t<vt[s].size(); t++){
			if (!used[vt[s][t]]){
				f[vt[s][t]] = s;
				used[vt[s][t]] = true;
				Q.push(vt[s][t]);
			}
		}
	}
	cout << "NO";
}
void solve(int s, int e){
    if(f[e] == 0) 
		cout << "NO" << endl;
    else
    	cout << "YES" << endl;
}
int main(){
	int T; cin >> T;
	while (T--){
		cin >> n >> m;
		for (int i=0; i<1005; i++)
			vt[i].clear();
		for (int i=1; i<=m; i++){
			int x, y; cin >> x >> y;
			vt[x].push_back(y);
			vt[y].push_back(x);
		}
		int q; cin >> q;
		while (q--){
			memset(used, false, sizeof(used));
			int s, e;
			cin >> s >> e;
			BFS(s, e);
			cout << endl;
		}
	}
}

 ???NG ?I THEO DFS V?I ?? TH? VÔ H??NG
Bài làm t?t nh?t
Cho ?? th? vô h??ng G=<V, E> ???c bi?u di?n d??i d?ng danh sách c?nh. Hãy tìm ???ng ?i t? ??nh sÎV ??n ??nh tÎV trên ?? th? b?ng thu?t toán DFS.
Input:
?	Dòng ??u tiên ??a vào T là s? l??ng b? test.
?	Nh?ng dòng ti?p theo ??a vào các b? test. M?i b? test g?m 2 dòng: dòng ??u tiên ??a vào b?n s? |V|, |E|, sÎV, tÎV t??ng ?ng v?i s? ??nh, s? c?nh,  ??nh u, ??nh v; Dòng ti?p theo ??a vào các b? ?ôi uÎV, vÎV t??ng ?ng v?i m?t c?nh c?a ?? th?.
?	T, |V|, |E| th?a mãn ràng bu?c: 1?T?100; 1?|V|?103; 1?|E|?|V|(|V|-1)/2;
Output:
?	??a ra ???ng ?i t? ??nh s ??n ??nh t c?a m?i test theo thu?t toán DFS c?a m?i test theo khuôn d?ng c?a ví d? d??i ?ây. N?u không có ?áp án, in ra -1.
      Ví d?:
Input:	Output:
1
6  9 1 6
1 2 1 3 2 3 2 5 3 4 3 5 4 5 4 6 5 6	1 2 3 4 5 6


#include<bits/stdc++.h>
using namespace std;
int n, m, s, e;
int matrix[1005][1005];
bool visited[1005];
int forward_point[1005];
void init(){
	cin >> n >> m >> s >> e;
	memset(matrix, 0, sizeof(matrix));
	memset(forward_point, 0, sizeof(forward_point));
	memset(visited, false, sizeof(visited));
	for (int i = 1; i <= m; i++){
			int x, y; cin >> x >> y;
			matrix[x][y] = 1;
			matrix[y][x] = 1;
	}
}
void DFS(int u)
{
    stack<int> st;
    st.push(u);
    visited[u] = true;
    while(!st.empty())
    {
        int s = st.top();
        st.pop();
        for(int t = 1; t <= n; t++)
        {
            if(visited[t] == false && matrix[s][t] == 1)
            {
                forward_point[t] = s;
                visited[t] = true;
                st.push(s);
                st.push(t);
                break;
            }
        }
    }
}

void PrintPath(int s, int e)
{
    if(forward_point[e] == 0)
        cout << "-1" ;
    else
    {
    	vector<int> res;
        res.push_back(e);
        int u = forward_point[e];
        while(u != s)
        {
            res.push_back(u);
            u = forward_point[u];
        }
        res.push_back(s);
        for (int i = res.size()-1; i >= 0; i--)
        	cout << res[i] << " ";
    }
}

int main(){
	int T; cin >> T;
	while (T--){
		init();
		DFS(s);
		PrintPath(s, e);
		cout << endl;
	}
}
???NG ?I THEO BFS TRÊN ?? TH? VÔ H??NG
Bài làm t?t nh?t
Cho ?? th? vô h??ng G=<V, E> ???c bi?u di?n d??i d?ng danh sách c?nh. Hãy tìm ???ng ?i t? ??nh sÎV ??n ??nh tÎV trên ?? th? b?ng thu?t toán BFS.
Input:
?	Dòng ??u tiên ??a vào T là s? l??ng b? test.
?	Nh?ng dòng ti?p theo ??a vào các b? test. M?i b? test g?m 2 dòng: dòng ??u tiên ??a vào b?n s? |V|, |E|, sÎV, tÎV t??ng ?ng v?i s? ??nh, s? c?nh,  ??nh u, ??nh v; Dòng ti?p theo ??a vào các b? ?ôi uÎV, vÎV t??ng ?ng v?i m?t c?nh c?a ?? th?.
?	T, |V|, |E| th?a mãn ràng bu?c: 1?T?100; 1?|V|?103; 1?|E|?|V|(|V|-1)/2;
Output:
?	??a ra ???ng ?i t? ??nh s ??n ??nh t c?a m?i test theo thu?t toán BFS c?a m?i test theo khuôn d?ng c?a ví d? d??i ?ây. N?u không có ?áp án, in ra -1.
     Ví d?:
Input:	Output:
1
6 9 1 6
1 2 1 3 2 3 2 5 3 4 3 5 4 5 4 6 5 6	1 2 5 6


#include<bits/stdc++.h>
using namespace std;
int n, m, s, e, matrix[1005][1005], f[1005];
bool used[1005];
void init(){
	cin >> n >> m >> s >> e;
	memset(matrix, 0, sizeof(matrix));
	memset(f, 0, sizeof(f));
	memset(used, false, sizeof(used));
	for (int i = 1; i <= m; i++){
			int x, y; cin >> x >> y;
			matrix[x][y] = 1;
			matrix[y][x] = 1;
	}
}
void BFS(int u){
	queue<int> Q;
	Q.push(u); used[u] = true;
	while(!Q.empty()){
		int s = Q.front();
		Q.pop();
		for (int t = 1; t <= n; t++){
			if (!used[t] && matrix[s][t]){
				f[t] = s;
				used[t] = true;
				Q.push(t);
			}
		}
	}
}
void BFS_Path(int s, int t){
    if(f[t] == 0)
        cout << "-1" << endl;
    else
    {
    	vector<int> res;
        res.push_back(t);
		int u = f[t];
        while(u != s)
        {
            res.push_back(u);
            u = f[u];
        }
        res.push_back(s);
        for (int i = res.size()-1; i >= 0; i--)
        	cout << res[i] << " ";
        cout << endl;
    }
}
int main(){
	int T; cin >> T;
	while (T--){
		init();
		BFS(s);
		BFS_Path(s, e);
	}
}

 ??M S? THÀNH PH?N LIÊN THÔNG
Bài làm t?t nh?t
Cho ?? th? vô h??ng G=<V, E> ???c bi?u di?n d??i d?ng danh sách c?nh. Hãy tìm s? thành ph?n liên thông c?a ?? th?.
Input:
?	Dòng ??u tiên ??a vào T là s? l??ng b? test.
?	Nh?ng dòng ti?p theo ??a vào các b? test. M?i b? test g?m 2 dòng: dòng ??u tiên ??a vào hai s? |V|, |E| t??ng ?ng v?i s? ??nh và s? c?nh; Dòng ti?p theo ??a vào các b? ?ôi uÎV, vÎV t??ng ?ng v?i m?t c?nh c?a ?? th?.
?	T, |V|, |E| th?a mãn ràng bu?c: 1?T?100; 1?|V|?103; 1?|E|?|V|(|V|-1)/2;
Output:
?	??a ra s? thành ph?n liên thông c?a ?? th?.
      Ví d?:
Input:	Output:
1
6 6 
1 2 1 3 2 3 3 4 3 5 4 5	2


#include<bits/stdc++.h>
using namespace std;
int n, m, sol;
int matrix[1005][1005];
bool used[1005];
void init(){
	cin >> n >> m;
	sol = 0;
	memset(matrix, 0, sizeof(matrix));
	memset(used, false, sizeof(used));
	for (int i = 1; i <= m; i++){
			int x, y; cin >> x >> y;
			matrix[x][y] = 1;
			matrix[y][x] = 1;
	}
}
void DFS(int u){
	used[u] = true;
	for (int v = 1; v <= n; v++){
		if (matrix[u][v] && !used[v])
			DFS(v);
	}
}
void TPLT_DFS(){
	for (int u = 1; u <= n; u++){
		if (!used[u]){
			sol++;
			DFS(u);
		}
	}
	cout << sol << endl;
}
int main(){
	int t; cin >> t;
	while (t--){
		init();
		TPLT_DFS();
	}
}
TÌM S? THÀNH PH?N LIÊN THÔNG V?I BFS
Bài làm t?t nh?t
Cho ?? th? vô h??ng G=<V, E> ???c bi?u di?n d??i d?ng danh sách c?nh. Hãy tìm s? thành ph?n liên thông c?a ?? th? b?ng thu?t toán BFS.
Input:
?	Dòng ??u tiên ??a vào T là s? l??ng b? test.
?	Nh?ng dòng ti?p theo ??a vào các b? test. M?i b? test g?m 2 dòng: dòng ??u tiên ??a vào hai s? |V|, |E| t??ng ?ng v?i s? ??nh và s? c?nh; Dòng ti?p theo ??a vào các b? ?ôi uÎV, vÎV t??ng ?ng v?i m?t c?nh c?a ?? th?.
?	T, |V|, |E| th?a mãn ràng bu?c: 1?T?100; 1?|V|?103; 1?|E|?|V|(|V|-1)/2;
Output:
?	??a ra s? thành ph?n liên thông c?a ?? th? b?ng thu?t toán BFS.
      Ví d?:
Input:	Output:
1
6  6 
1 2 1 3 2 3 3 4 3 5 4 5	2


#include<bits/stdc++.h>
using namespace std;
int n, m, sol;
int matrix[1005][1005];
bool used[1005];
void init(){
	cin >> n >> m;
	sol = 0;
	memset(matrix, 0, sizeof(matrix));
	memset(used, false, sizeof(used));
	for (int i = 1; i <= m; i++){
			int x, y; cin >> x >> y;
			matrix[x][y] = 1;
			matrix[y][x] = 1;
	}
}
void BFS(int u){
	queue<int> Q;
	Q.push(u); used[u] = true;
	while(!Q.empty()){
		int s = Q.front();
		Q.pop();
		for (int t = 1; t <= n; t++){
			if (!used[t] && matrix[s][t]){
				Q.push(t);
				used[t] = true;
			}
		}	
	}
}
void TPLT_BFS(){
	for (int u = 1; u <= n; u++){
		if (!used[u]){
			sol++;
			BFS(u);
		}
	}
	cout << sol << endl;
}
int main(){
	int t; cin >> t;
	while (t--){
		init();
		TPLT_BFS();
	}
}

KI?M TRA TÍNH LIÊN THÔNG M?NH
Bài làm t?t nh?t
Cho ?? th? có h??ng G=<V, E> ???c bi?u di?n d??i d?ng danh sách c?nh. Hãy ki?m tra xem ?? th? có liên thông m?nh hay không?
Input:
?	Dòng ??u tiên ??a vào T là s? l??ng b? test.
?	Nh?ng dòng ti?p theo ??a vào các b? test. M?i b? test g?m 2 dòng: dòng ??u tiên ??a vào hai s? |V|, |E| t??ng ?ng v?i s? ??nh và s? c?nh; Dòng ti?p theo ??a vào các b? ?ôi uÎV, vÎV t??ng ?ng v?i m?t c?nh c?a ?? th?.
?	T, |V|, |E| th?a mãn ràng bu?c: 1?T?100; 1?|V|?103; 1?|E|?|V|(|V|-1)/2;
Output:
?	??a ra “YES”, ho?c “NO” theo t?ng dòng t??ng ?ng v?i test là liên thông m?nh ho?c không liên thông m?nh.
      Ví d?:
Input:	Output:
1
6 9 
1 2 2 4 3 1 3 2 3 5 4 3 5 4 5 6 6  3	YES

#include<bits/stdc++.h>
using namespace std;
int n, m;
bool used[1005];
vector<int> vt[1005];
void BFS(int u){
	queue<int> Q;
	Q.push(u);
	used[u] = true;
	while(!Q.empty()){
		int s = Q.front();
		Q.pop();
		for (int t=0; t<vt[s].size(); t++){
			if (!used[vt[s][t]]){
				Q.push(vt[s][t]);
				used[vt[s][t]] = true;	
			}
		}
	}
}
int main(){
	int T; cin >> T;
	while (T--){
		cin >> n >> m;
		for (int i=0; i<1005; i++)
			vt[i].clear();
		for (int i=1; i<=m; i++){
			int x, y; cin >> x >> y;
			vt[x].push_back(y);
		}
		memset(used, false, sizeof(used));
		int res = 0;
		for (int  i=1; i<=n; i++){
			if (!used[i]){
				res++;
				BFS(i);
			}
		}
		if (res >= 2) cout << "NO";
		else cout << "YES";
		cout << endl;
	}
}

 LI?T KÊ ??NH TR?
Bài làm t?t nh?t
Cho ?? th? vô h??ng liên thông G=<V, E> ???c bi?u di?n d??i d?ng danh sách c?nh. Hãy ??a ra t?t c? các ??nh tr? c?a ?? th??
Input:
?	Dòng ??u tiên ??a vào T là s? l??ng b? test.
?	Nh?ng dòng ti?p theo ??a vào các b? test. M?i b? test g?m 2 dòng: dòng ??u tiên ??a vào hai s? |V|, |E| t??ng ?ng v?i s? ??nh và s? c?nh; Dòng ti?p theo ??a vào các b? ?ôi u, v t??ng ?ng v?i m?t c?nh c?a ?? th?.
?	T, |V|, |E| th?a mãn ràng bu?c: 1?T?100; 1?|V|?103; 1?|E|?|V|(|V|-1)/2;
Output:
?	??a ra danh sách các ??nh tr? c?a m?i test  theo t?ng dòng.
     Ví d?:
Input:	Output:
1
5 5
1 2 1 3 2 3 2 5 3 4	2 3


#include<bits/stdc++.h>
using namespace std;
int n, m;
int matrix[1005][1005];
bool used[1005];
void init(){
	cin >> n >> m;
	for (int i=1; i<=n; i++)
		for (int j=1; j<=n; j++)
			matrix[i][j] = 0;
	for (int i=1; i<=n; i++)
		used[i] = false;
	for (int i = 1; i <= m; i++){
			int x, y; cin >> x >> y;
			matrix[x][y] = 1;
			matrix[y][x] = 1;
	}
}
int BFS(int u){
	int c = 0;
	queue<int> Q;
	Q.push(u);
	used[u] = true;
	while(!Q.empty()){
		int s = Q.front();
		c++;
		Q.pop();
		for (int t = 1; t <= n; t++){
			if (!used[t] && matrix[s][t]){
				Q.push(t);
				used[t] = true;	
			}
		}
	}
	return c;
}
void Reinit(){
	for (int i = 1; i <= n; i++)
		used[i] = false;
}
void Dinh_tru_BFS(){
	vector<int> res;
	for (int u = 1; u <= n ; u++){
		used[u] = true;
		if (u == 1){
			if (BFS(2) != n-1)
				res.push_back(u);
		}
		else{
			if (BFS(1) != n-1)
				res.push_back(u);
		}
		Reinit();
	}
	for (int i = 0; i < res.size(); i++)
		cout << res[i] << " ";
	cout << endl;
}
int main(){
	int T; cin >> T;
	while (T--){
		init();	
		Dinh_tru_BFS();
	}
}

KI?M TRA CHU TRÌNH TRÊN ?? TH? VÔ H??NG
Bài làm t?t nh?t
Cho ?? th? vô h??ng G=<V, E> ???c bi?u di?n d??i d?ng danh sách c?nh. Hãy ki?m tra xem ?? th? có t?n t?i chu trình hay không?
Input:
?	Dòng ??u tiên ??a vào T là s? l??ng b? test.
?	Nh?ng dòng ti?p theo ??a vào các b? test. M?i b? test g?m 2 dòng: dòng ??u tiên ??a vào hai s? |V|, |E| t??ng ?ng v?i s? ??nh,  s? c?nh c?a ?? th?; Dòng ti?p theo ??a vào các b? ?ôi u, v t??ng ?ng v?i m?t c?nh c?a ?? th?.
?	T, |V|, |E| th?a mãn ràng bu?c: 1?T?100; 1?|V|?103; 1?|E|?|V|(|V|-1)/2;
Output:
?	??a ra YES ho?c “NO” k?t qu? test theo t?ng dòng t??ng ?ng v?i ?? th? t?n t?i ho?c không t?n t?i chu trình.
      Ví d?:
Input:	Output:
1
6  9
1 2 1 3 2 3 2 5 3 4 3 5 4 5 4 6 5 6	YES


#include<bits/stdc++.h>
using namespace std;
int n, m;
bool used[1005];
int f[1005];
vector<int> vt[1005];
bool isCycle(int u){
	queue<int> Q;
	Q.push(u);
	used[u] = true;
	while(!Q.empty()){
		int s = Q.front();
		Q.pop();
		for (int t=0; t<vt[s].size(); t++){
			if (!used[vt[s][t]]){
				f[vt[s][t]] = s;
				Q.push(vt[s][t]);
				used[vt[s][t]] = true;	
			}
			else if (f[s] != vt[s][t])
				return true;
		}
	}
	return false;
}
bool check(){
	for (int i=1; i<=n; i++){
		if (!used[i] && isCycle(i))
			return true;
	}
	return false;
}
int main(){
	int T; cin >> T;
	while (T--){
		cin >> n >> m;
		for (int i=0; i<1005; i++)
			vt[i].clear();
		for (int i=1; i<=m; i++){
			int x, y; cin >> x >> y;
			vt[x].push_back(y);
			vt[y].push_back(x);
		}
		memset(used, false, sizeof(used));
		if (check()) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}

KI?M TRA CHU TRÌNH TRÊN ?? TH? CÓ H??NG V?I DFS
Bài làm t?t nh?t
Cho ?? th? có h??ng G=<V, E> ???c bi?u di?n d??i d?ng danh sách c?nh. S? d?ng thu?t toán DFS, hãy ki?m tra xem ?? th? có t?n t?i chu trình hay không?
Input:
?	Dòng ??u tiên ??a vào T là s? l??ng b? test.
?	Nh?ng dòng ti?p theo ??a vào các b? test. M?i b? test g?m 2 dòng: dòng ??u tiên ??a vào hai s? |V|, |E| t??ng ?ng v?i s? ??nh,  s? c?nh c?a ?? th?; Dòng ti?p theo ??a vào các b? ?ôi uÎV, vÎV t??ng ?ng v?i m?t c?nh c?a ?? th?.
?	T, |V|, |E| th?a mãn ràng bu?c: 1?T?100; 1?|V|?103; 1?|E|?|V|(|V|-1)/2;
Output:
?	??a ra YES ho?c “NO” k?t qu? test theo t?ng dòng t??ng ?ng v?i ?? th? t?n t?i ho?c không t?n t?i chu trình.
     Ví d?:
Input:	Output:
1
6 9  
1 2 2 4 3 1 3 2 3 5 4 3 5 4 5 6 6 4	YES
 
#include<bits/stdc++.h>
using namespace std;
int n, m;
bool used[1005];
bool recStack[1005];
vector<int> vt[1005];
bool isCycle(int u){
	if (!used[u]){
		used[u] = true;
		recStack[u] = true;
		for (int i=0; i<vt[u].size(); i++){
			if (!used[vt[u][i]] && isCycle(vt[u][i]))
				return true;
			else if(recStack[vt[u][i]])
				return true;
		}
	}
	recStack[u] = false;
	return false;
}
bool check(){
	for(int i=1; i<=n; i++) 
        if (isCycle(i)) 
            return true; 
    return false; 
}
int main(){
	int T; cin >> T;
	while (T--){
		cin >> n >> m;
		for (int i=0; i<1005; i++)
			vt[i].clear();
		for (int i=1; i<=m; i++){
			int x, y; cin >> x >> y;
			vt[x].push_back(y);
		}
		memset(used, false, sizeof(used));
		memset(recStack, false, sizeof(recStack));
		if (check()) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}

KI?M TRA ?? TH? CÓ PH?I LÀ CÂY HAY KHÔNG
Bài làm t?t nh?t
M?t ?? th? N ??nh là m?t cây, n?u nh? nó có ?úng N-1 c?nh và gi?a 2 ??nh b?t kì, ch? t?n t?i duy nh?t 1 ???ng ?i gi?a chúng.
Cho m?t ?? th? N ??nh và N-1 c?nh, hãy ki?m tra ?? th? ?ã cho có ph?i là m?t cây hay không?
Input:
?	Dòng ??u tiên là s? l??ng b? test T (T ? 20).
?	M?i test b?t ??u b?i s? nguyên N (1 ? N ? 1000).
?	N-1 dòng ti?p theo, m?i dòng g?m 2 s? nguyên u, v cho bi?t có c?nh n?i gi?a ??nh u và v.
Output: 
?	V?i m?i test, in ra “YES” n?u ?? th? ?ã cho là m?t cây, in ra “NO” trong tr??ng h?p ng??c l?i.
Ví d?:
 
 
 
Input	Output
2
4
1 2
1 3
2 4
4
1 2
1 3
2 3
 	YES
NO
 



#include<bits/stdc++.h>
using namespace std;
int n;
bool used[1005];
vector<int> adj[1005];
void Tree_DFS(int u){
	vector<vector<int> > vt;
	stack<int> S;
	S.push(u);
	used[u] = true;
	while (!S.empty()){
		int s = S.top();
		S.pop();
		for (int t=0; t<adj[s].size(); t++){
			if (!used[adj[s][t]]){
				vector<int> v;
				v.push_back(s); v.push_back(adj[s][t]);
				vt.push_back(v);
				used[adj[s][t]] = true;
				S.push(s); S.push(adj[s][t]);
				break;
			}
		}
	}
	if (vt.size() < n-1)
		cout << "NO" << endl;
	else cout << "YES" << endl;
}
int main(){
	int T; cin >> T;
	while (T--){
		cin >> n;
		for (int i=0; i<1005; i++)
			adj[i].clear();
		for (int i=1; i<n; i++){
			int x, y; cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		memset(used, false, sizeof(used));
		Tree_DFS(1);
	}
}

Cho m?t b?n ?? kích th??c N x M ???c mô t? b?ng ma tr?n A[][].A[i][j] = 1 có ngh?a v? trí (i, j) là n?i trên bi?n. 2 v? trí (i, j) và (x, y) ???c coi là li?n nhau n?u nh? nó có chung ??nh ho?c chung c?nh. M?t hòn ??o là m?t t?p h?p các ?i?m (i, j) mà A[i][j] = 1 và có th? di chuy?n gi?a hai ?i?m b?t kì trong ?ó.
Nhi?m v? c?a b?n là hãy ??m s? l??ng ??o xu?t hi?n trên b?n ??.
Input: Dòng ??u tiên là s? l??ng b? test T (T ? 20).
M?i test b?t ??u b?i 2 s? nguyên N và M (1 ? N, M ? 500).
N dòng ti?p theo, m?i dòng g?m M s? nguyên A[i][j].
Output:  V?i m?i test, in ra s? l??ng hòn ??o tìm ???c.
Ví d?:
Input:	Output
1
5 5
1 1 0 0 0
0 1 0 0 1
1 0 0 1 1
0 0 0 0 0
1 0 1 0 1
 	5
 



#include <bits/stdc++.h> 
using namespace std; 
int isSafe(int n, int m, int M[][505], int row, int col, bool visited[][505]){ 
    return (row >= 0) && (row < n) && (col >= 0) && (col < m) && (M[row][col] && !visited[row][col]); 
} 

void DFS(int n, int m, int M[][505], int row, int col, bool visited[][505]){ 
    static int rowNbr[] = { -1, -1, -1, 0, 0, 1, 1, 1 }; 
    static int colNbr[] = { -1, 0, 1, -1, 1, -1, 0, 1 }; 
    visited[row][col] = true; 
    for (int k = 0; k < 8; ++k) 
        if (isSafe(n, m, M, row + rowNbr[k], col + colNbr[k], visited)) 
            DFS(n, m, M, row + rowNbr[k], col + colNbr[k], visited); 
} 
int countIslands(int n, int m, int M[][505]){ 
    bool visited[505][505]; 
    memset(visited, 0, sizeof(visited));  
    int count = 0; 
    for (int i = 0; i < n; ++i) 
        for (int j = 0; j < m; ++j) 
            if (M[i][j] && !visited[i][j]) { 
                DFS(n, m, M, i, j, visited);  
                ++count; 
            } 
  
    return count; 
}
int main(){ 
  int t; cin >> t;
  while (t--){
  	int n, m, matrix[505][505];
  	cin >> n >> m;
  	for (int i=0; i<n; i++)
  		for (int j=0; j<m; j++)
  			cin >> matrix[i][j];
  	cout << countIslands(n , m, matrix) << endl;
  }
}

TÔ MÀU ?? TH?
Bài làm t?t nh?t
M?t trong nh?ng bài toán kinh ?i?n c?a lý thuy?t ?? th? là bài toán Tô màu ?? th?. Bài toán ???c phát bi?u nh? sau: Cho ?? th? vô h??ng G =<V, E> ???c bi?u di?n d??i d?ng danh sách c?nh và s? M. Nhi?m v? c?a b?n là ki?m tra xem ?? th? có th? tô màu các ??nh b?ng nhi?u nh?t M màu sao cho hai ??nh k? nhau ??u có màu khác nhau hay không?
 
Input:
?	Dòng ??u tiên ??a vào s? l??ng b? test T.
?	Nh?ng dòng k? ti?p ??a vào các b? test. M?i b? test g?m hai ph?n: ph?n th? nh?t ??a vào ba s? V, E, M t??ng ?ng v?i s? ??nh, s? c?nh và s? màu; ph?n th? hai ??a vào các c?nh c?a ?? th?.
?	T, V, E, M th?a mãn ràng bu?c: 1?T ?100; 1?V?10; 1? E ?N(N-1), 1?V?N.
Output:
?	??a ra k?t qu? m?i test theo t?ng dòng.
Ví d?:
Input	Output
2
4  5  3
1 2
2 3
3 4
4 1
1 3
3 3 2
1 2
2 3
1 3	YES
NO


#include<bits/stdc++.h>
using namespace std;
int n, m, p;
int color[1005];
int matrix[1005][1005];
bool isSafe(int v, int c){
	for (int i=1; i<=n; i++)
		if (matrix[v][i] && c==color[i])
			return false;
	return true;
}
bool Try(int v){
	if (v == n+1)
		return true;
	for (int c=1; c<=p; c++){
		if (isSafe(v, c)){
			color[v] = c;
			if (Try(v+1) == true) 
				return true;
			color[v] = 0;
		}
	}
	return false;
}
int main(){
	int t; cin >> t;
	while (t--){
		memset(matrix, 0 , sizeof(matrix));
		memset(color, 0, sizeof(color));
		cin >> n >> m >> p;
		for (int i = 1; i <= m; i++){
			int x, y; cin >> x >> y;
			matrix[x][y] = 1;
			matrix[y][x] = 1;
		}
		if (Try(1) == false)
			cout << "NO" << endl;
		else 
			cout << "YES" << endl;
	}
}

 ???NG ?I HAMILTON
Bài làm t?t nh?t
???ng ?i ??n trên ?? th? có h??ng ho?c vô h??ng ?i qua t?t c? các ??nh c?a ?? th? m?i ??nh ?úng m?t l?n ???c g?i là ???ng ?i Hamilton. Cho ?? th? vô h??ng G = <V, E>, hãy ki?m tra xem ?? th? có ???ng ?i Hamilton hay không?
Input:
?	Dòng ??u tiên ??a vào s? l??ng b? test T.
?	Nh?ng dòng k? ti?p ??a vào các b? test. M?i b? test g?m hai ph?n: ph?n th? nh?t ??a vào hai s? V, E t??ng ?ng v?i s? ??nh, s? c?nh c?a ?? th?; ph?n th? hai ??a vào các c?nh c?a ?? th?.
?	T, V, E th?a mãn ràng bu?c: 1?T ?100; 1?V?10; 1? E ?15.
Output:
?	??a ra 1 ho?c 0 t??ng ?ng v?i test có ho?c không có ???ng ?i Hamilton theo t?ng dòng.
           Ví d?:
Input	Output
2
4 4
1 2 2 3 3 4 2 4
4 3
1 2 2 3 2 4	1
0


#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<int> adj[1005];
bool DFS(int u, int c, bool used[]){
	if (c == n)
		return true;
	used[u] = true;
	for (int v=0; v<adj[u].size(); v++){
		if (!used[adj[u][v]]){
			if (DFS(adj[u][v], c+1, used)){
				return true;
			}
		}
	}
	used[u] = false;
	return false;
}
bool isHamilton(){
	bool used[1005];
	memset(used, false, sizeof(used));
	for (int i=1; i<=n; i++){
		int c = 1;
		if (DFS(i, c, used))
			return true;
	}
	return false;
}
int main(){
	int t; cin >> t;
	while (t--){
		cin >> n >> m;
		for (int i=0; i<1005; i++)
			adj[i].clear();
		for (int i=1; i<=m; i++){
			int x, y; cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		if (isHamilton()) cout << 1;
		else cout << 0;
		cout << endl;
	}
}

?? TH? HAI PHÍA
Bài làm t?t nh?t
?? th? hai phía là m?t ?? th? ??c bi?t, trong ?ó t?p các ??nh có th? ???c chia thành hai t?p không giao nhau th?a mãn ?i?u ki?n không có c?nh n?i hai ??nh b?t k? thu?c cùng m?t t?p. Cho ?? th? N ??nh và M c?nh, b?n hãy ki?m tra ?? th? ?ã cho có ph?i là m?t ?? th? hai phía hay không?
 
Input:
?	Dòng ??u tiên là s? l??ng b? test T (T ?  20).
?	M?i test b?t ??u b?i s? nguyên N và M (1 ?  N, M ?  1000).
?	M dòng ti?p theo, m?i dòng g?m 2 s? nguyên u, v cho bi?t có c?nh n?i gi?a ??nh u và v.
Output: 
?	V?i m?i test, in ra “YES” n?u ?? th? ?ã cho là m?t ?? th? hai phía, in ra “NO” trong tr??ng h?p ng??c l?i.
Ví d?:
Input:	Output
2
5 4
1 5
1 3
2 3
4 5
3 3
1 2
1 3
2 3	YES
NO
 


#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<int> adj[1005];
int mark[1005];
bool bfs(int u){
	queue<int> q;
	q.push(u);
	mark[u] = 1;
	while (!q.empty()){
		int s = q.front();
		q.pop();
		for (int t: adj[s]){
			if (mark[s] == mark[t]) 
				return false;
			else if (!mark[t]){
				q.push(t);
				mark[t] = 3-mark[s];
			}
		}
	}
	return true;
}
void solve(){
	memset(mark, 0, sizeof(mark));
	for (int i=1; i<=n; i++){
		if (mark[i]) continue;
		if (!adj[i].size()){
			mark[i] = 1;
			continue;
		}
		if (!bfs(i)){
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
}
int main(){
	int t; cin >> t;
	while (t--){
		cin >> n >> m;
		for (int i=0; i<1005; i++)
			adj[i].clear();
		for (int i=1; i<=m; i++){
			int x, y; cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		solve();
	}
}
 LI?T KÊ ??NH TR?
Bài làm t?t nh?t
Cho ?? th? vô h??ng liên thông G=<V, E> ???c bi?u di?n d??i d?ng danh sách c?nh. Hãy ??a ra t?t c? các ??nh tr? c?a ?? th??
Input:
?	Dòng ??u tiên ??a vào T là s? l??ng b? test.
?	Nh?ng dòng ti?p theo ??a vào các b? test. M?i b? test g?m 2 dòng: dòng ??u tiên ??a vào hai s? |V|, |E| t??ng ?ng v?i s? ??nh và s? c?nh; Dòng ti?p theo ??a vào các b? ?ôi uÎV, vÎV t??ng ?ng v?i m?t c?nh c?a ?? th?.
?	T, |V|, |E| th?a mãn ràng bu?c: 1?T?100; 1?|V|?103; 1?|E|?|V|(|V|-1)/2;
Output:
?	??a ra danh sách các ??nh tr? c?a m?i test  theo t?ng dòng.
      Ví d?:
Input:	Output:
1
5 5
1 2 1 3 2 3 2 5 3 4	2 3


#include<bits/stdc++.h>
using namespace std;
int n, m;
int matrix[1005][1005];
bool used[1005];
void init(){
	cin >> n >> m;
	for (int i=1; i<=n; i++)
		for (int j=1; j<=n; j++)
			matrix[i][j] = 0;
	for (int i=1; i<=n; i++)
		used[i] = false;
	for (int i = 1; i <= m; i++){
			int x, y; cin >> x >> y;
			matrix[x][y] = 1;
			matrix[y][x] = 1;
	}
}
int BFS(int u){
	int c = 0;
	queue<int> Q;
	Q.push(u);
	used[u] = true;
	while(!Q.empty()){
		int s = Q.front();
		c++;
		Q.pop();
		for (int t = 1; t <= n; t++){
			if (!used[t] && matrix[s][t]){
				Q.push(t);
				used[t] = true;	
			}
		}
	}
	return c;
}
void Reinit(){
	for (int i = 1; i <= n; i++)
		used[i] = false;
}
void Dinh_tru_BFS(){
	vector<int> res;
	for (int u = 1; u <= n ; u++){
		used[u] = true;
		if (u == 1){
			if (BFS(2) != n-1)
				res.push_back(u);
		}
		else{
			if (BFS(1) != n-1)
				res.push_back(u);
		}
		Reinit();
	}
	for (int i = 0; i < res.size(); i++)
		cout << res[i] << " ";
	cout << endl;
}
int main(){
	int T; cin >> T;
	while (T--){
		init();	
		Dinh_tru_BFS();
	}
}

KI?M TRA CHU TRÌNH
Bài làm t?t nh?t
Cho ?? th? vô h??ng G=<V, E> ???c bi?u di?n d??i d?ng danh sách c?nh. Hãy ki?m tra xem ?? th? có t?n t?i chu trình hay không?
Input:
?	Dòng ??u tiên ??a vào T là s? l??ng b? test.
?	Nh?ng dòng ti?p theo ??a vào các b? test. M?i b? test g?m 2 dòng: dòng ??u tiên ??a vào hai s? |V|, |E| t??ng ?ng v?i s? ??nh,  s? c?nh c?a ?? th?; Dòng ti?p theo ??a vào các b? ?ôi uÎV, vÎV t??ng ?ng v?i m?t c?nh c?a ?? th?.
?	T, |V|, |E| th?a mãn ràng bu?c: 1?T?100; 1?|V|?103; 1?|E|?|V|(|V|-1)/2;
Output:
?	??a ra YES ho?c “NO” k?t qu? test theo t?ng dòng t??ng ?ng v?i ?? th? t?n t?i ho?c không t?n t?i chu trình.
      Ví d?:
Input:	Output:
1
6  9
1 2 1 3 2 3 2 5 3 4 3 5 4 5 4 6 5 6	YES


#include<bits/stdc++.h>
using namespace std;
int n, m;
bool used[1005];
int f[1005];
vector<int> vt[1005];
bool isCycle(int u){
	queue<int> Q;
	Q.push(u);
	used[u] = true;
	while(!Q.empty()){
		int s = Q.front();
		Q.pop();
		for (int t=0; t<vt[s].size(); t++){
			if (!used[vt[s][t]]){
				f[vt[s][t]] = s;
				Q.push(vt[s][t]);
				used[vt[s][t]] = true;	
			}
			else if (f[s] != vt[s][t])
				return true;
		}
	}
	return false;
}
bool check(){
	for (int i=1; i<=n; i++){
		if (!used[i] && isCycle(i))
			return true;
	}
	return false;
}
int main(){
	int T; cin >> T;
	while (T--){
		cin >> n >> m;
		for (int i=0; i<1005; i++)
			vt[i].clear();
		for (int i=1; i<=m; i++){
			int x, y; cin >> x >> y;
			vt[x].push_back(y);
			vt[y].push_back(x);
		}
		memset(used, false, sizeof(used));
		if (check()) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}

 CÂY KHUNG C?A ?? TH? THEO THU?T TOÁN DFS
Bài làm t?t nh?t
Cho ?? th? vô h??ng G=(V, E). Hãy xây d?ng m?t cây khung c?a ?? th? G v?i ??nh u ? V là g?c c?a cây b?ng thu?t toán DFS.
Input
Dòng ??u tiên g?m m?t s? nguyên T (1 ? T ? 20) là s? l??ng b? test.
Ti?p theo là T b? test, m?i b? test có d?ng sau:
?	Dòng ??u tiên g?m 3 s? nguyên N=|V|, M=|E|, u (1 ? N ? 103, 1 ? M ? 105, 1 ? u ? N).
?	M dòng ti?p theo, m?i dòng g?m 2 s? nguyên a, b (1 ? a, b ? N, a ? b) t??ng ?ng c?nh n?i hai chi?u t? a t?i b.
?	D? li?u ??m b?o gi?a hai ??nh ch? t?n t?i nhi?u nh?t m?t c?nh n?i.
Output
V?i m?i b? test, n?u t?n t?i cây khung thì in ra N – 1 c?nh c?a cây khung v?i g?c là ??nh u trên N – 1 dòng theo th? t? duy?t c?a thu?t toán DFS. Ng??c l?i n?u không t?n t?i cây khung thì in ra -1.
Ví d?
Input	Output
2
4 3 2
1 2
1 3
2 4
3 4
4 2 2
1 2
3 4	2 1
1 3
3 4
-1


#include<bits/stdc++.h>
using namespace std;
int n, m, u;
vector<int> adj[1005];
bool used[1005];
void Tree_DFS(){
	vector<vector<int> > vt;
	stack<int> S;
	S.push(u);
	used[u] = true;
	while (!S.empty()){
		int s = S.top();
		S.pop();
		for (int t=0; t<adj[s].size(); t++){
			if (!used[adj[s][t]]){
				vector<int> v;
				v.push_back(s); v.push_back(adj[s][t]);
				vt.push_back(v);
				used[adj[s][t]] = true;
				S.push(s); S.push(adj[s][t]);
				break;
			}
		}
	}
	if (vt.size() < n-1)
		cout << "-1" << endl;
	else{
		for (int i=0; i<vt.size(); i++){
			for (int j=0; j<vt[i].size(); j++)
				cout << vt[i][j] << " ";
			cout << endl;
		}
	}
}
int main(){
	int t; cin >> t;
	while (t--){
		cin >> n >> m >> u;
		memset(used, false, sizeof(used));
		for (int i=0; i<1005; i++)
			adj[i].clear();
		for (int i=1; i<=m; i++){
			int x, y; cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		Tree_DFS();
	}
}
CÂY KHUNG C?A ?? TH? THEO THU?T TOÁN BFS
Bài làm t?t nh?t
Cho ?? th? vô h??ng G=(V, E). Hãy xây d?ng m?t cây khung c?a ?? th? G v?i ??nh u ? V là g?c c?a cây b?ng thu?t toán BFS.
Input
Dòng ??u tiên g?m m?t s? nguyên T (1 ? T ? 20) là s? l??ng b? test.
Ti?p theo là T b? test, m?i b? test có d?ng sau:
?	Dòng ??u tiên g?m 3 s? nguyên N=|V|, M=|E|, u (1 ? N ? 103, 1 ? M ? 105, 1 ? u ? N).
?	M dòng ti?p theo, m?i dòng g?m 2 s? nguyên a, b (1 ? a, b ? N, a ? b) t??ng ?ng c?nh n?i hai chi?u t? a t?i b.
?	D? li?u ??m b?o gi?a hai ??nh ch? t?n t?i nhi?u nh?t m?t c?nh n?i.
Output
V?i m?i b? test, n?u t?n t?i cây khung thì in ra N – 1 c?nh c?a cây khung v?i g?c là ??nh u trên N – 1 dòng theo th? t? duy?t c?a thu?t toán BFS. Ng??c l?i n?u không t?n t?i cây khung thì in ra -1.
Ví d?
Input	Output
2
4 4 2
1 2
1 3
2 4
3 4
4 2 2
1 2
3 4	2 1
2 4
1 3
-1
 
#include<bits/stdc++.h>
using namespace std;
int n, m, u;
vector<int> adj[1005];
bool used[1005];
void Tree_BFS(){
	vector<vector<int> > vt;
	queue<int> Q;
	Q.push(u);
	used[u] = true;
	while (!Q.empty()){
		int s = Q.front();
		Q.pop();
		for (int t=0; t<adj[s].size(); t++){
			if (!used[adj[s][t]]){
				vector<int> v;
				v.push_back(s);
				v.push_back(adj[s][t]);
				vt.push_back(v);
				Q.push(adj[s][t]);
				used[adj[s][t]] = true;	
			}
		}
	}
	if (vt.size() < n-1)
		cout << "-1" << endl;
	else{
		for (int i = 0; i < vt.size(); i++){
			for (int j = 0; j < vt[i].size(); j++)
				cout << vt[i][j] << " ";
			cout << endl;
		}
	}
}
int main(){
	int t; cin >> t;
	while (t--){
		cin >> n >> m >> u;
		memset(used, false, sizeof(used));
		for (int i=0; i<1005; i++)
			adj[i].clear();
		for (int i=1; i<=m; i++){
			int x, y; cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		Tree_BFS();
	}
}
 DIJKSTRA
Bài làm t?t nh?t
Cho ?? th? có tr?ng s? không âm G=<V, E> ???c bi?u di?n d??i d?ng danh sách c?nh tr?ng s?. Hãy vi?t ch??ng trình tìm ???ng ?i ng?n nh?t t? ??nh uÎV ??n t?t c? các ??nh còn l?i trên ?? th?.
Input:
?	Dòng ??u tiên ??a vào T là s? l??ng b? test.
?	Nh?ng dòng ti?p theo ??a vào các b? test. M?i b? test g?m |E|+1 dòng: dòng ??u tiên ??a vào hai ba s? |V|, |E| t??ng ?ng v?i s? ??nh và uÎV là ??nh b?t ??u; |E| dòng ti?p theo m?i dòng ??a vào b? ba uÎV, vÎV, w t??ng ?ng v?i m?t c?nh cùng v?i tr?ng s? canh c?a ?? th?.
?	T, |V|, |E| th?a mãn ràng bu?c: 1?T?100; 1?|V|?103; 1?|E|?|V|(|V|-1)/2;
Output:
?	??a ra k?t qu? c?a m?i test theo t?ng dòng. K?t qu? m?i test là tr?ng s? ???ng ?i ng?n nh?t t? ??nh u ??n các ??nh còn l?i c?a ?? th? theo th? t? t?ng d?n các ??nh.
     Ví d?:
Input:	Output:
1
9  12 1
1  2   4
1  8   8
2  3   8
2  8   11
3  4   7
3  6   4
3  9   2
4  5   9
4  6  14
5  6  10
6  7  2
6  9  6	0 4 12 19 21 11 9 8 14
 


#include<bits/stdc++.h>
#define mp make_pair
using namespace std;
typedef pair<int, int> iPair;
int n, m, s;
vector<iPair> adj[1005];
void dijkstra(){
	priority_queue<iPair, vector<iPair>, greater<iPair> > pq;
	vector<int> dist(n+1, INT_MAX);
	pq.push(mp(0, s));
	dist[s] = 0;
	while (!pq.empty()){
		int u = pq.top().second;
		pq.pop();
		for(auto x: adj[u]){
			int v = x.first;
			int w = x.second;
			if (dist[v] > dist[u]+w){
				dist[v] = dist[u]+w;
				pq.push(mp(dist[v], v));
			}
		}
	}
	for (int i=1; i<=n; i++)
		cout << dist[i] << " ";
	cout << endl;
}
int main(){
	int t; cin >> t;
	while (t--){
		cin >> n >> m >> s;
		for (int i=0; i<1005; i++)
			adj[i].clear();
		while(m--){
			int u, v, w; cin >> u >> v >> w;
			adj[u].push_back(mp(v, w));
			adj[v].push_back(mp(u, w));
		}
		dijkstra();
	}
}

KRUSKAL
Bài làm t?t nh?t
Cho ?? th? vô h??ng có tr?ng s? G=<V, E, W>. Nhi?m v? c?a b?n là hãy xây d?ng m?t cây khung nh? nh?t c?a ?? th? b?ng thu?t toán Kruskal.
Input:
?	Dòng ??u tiên ??a vào s? l??ng b? test T.
?	Nh?ng dòng k? ti?p ??a vào các b? test. M?i b? test g?m hai ph?n: ph?n th? nh?t ??a vào hai s? V, E t??ng ?ng v?i s? ??nh và s? c?nh c?a ?? th?; ph?n th? 2 ??a vào E c?nh c?a ?? th?, m?i c?nh là m?t b? 3: ??nh ??u, ??nh cu?i và tr?ng s? c?a c?nh.
?	T, S, D th?a mãn ràng bu?c: 1?T?100;  1?V?100; 1?E, W?10000.
Output:
?	??a ra k?t qu? m?i test theo t?ng dòng.
Ví d?:
Input	Output
2
3 3
1 2 5
2 3 3
1 3 1
2 1
1 2 5	4
5

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int n, m;
struct edge{
	int u;
	int v;
	int w;
};
edge edges[10005];
int parent[10005];
int rankz[10005];
bool compare(edge x, edge y){
	if(x.w < y.w) return true;
	return false;
}
int find(int u){
	if (parent[u] == u) return parent[u];
	return find(parent[u]);
}
bool merge(int u, int v){
	u = find(u); v = find(v);
	if (u == v) return false;
	if (rankz[u] == rankz[v]){
		rankz[u]++;
	}
	if (rankz[u] < rankz[v])
		parent[u] = v;
	else parent[v] = u;
	return true;
}
void solve(){
	long long res = 0;
	sort(edges, edges+m, compare);
	for (int i=0; i<m; i++){
		if (merge(edges[i].u, edges[i].v))
			res += edges[i].w;
	}
	cout << res << endl;
}
int main(){
	int t; cin >> t;
	while (t--){
		cin >> n >> m;
		for (int i=0; i<m; i++)
			cin >> edges[i].u >> edges[i].v >> edges[i].w;
		for (int i=1; i<=n; i++){
			parent[i] = i;
			rankz[i] = 0;
		}
		solve();
	}
}

CHU TRÌNH ÂM
Bài làm t?t nh?t
Cho ?? th? có tr?ng s? G=<V, E> ???c bi?u di?n d??i d?ng danh sách c?nh tr?ng s? âm ho?c d??ng. Hãy vi?t ch??ng trình xác ??nh xem ?? th? có chu trình âm hay không.
Input:
?	Dòng ??u tiên ??a vào T là s? l??ng b? test.
?	Nh?ng dòng ti?p theo ??a vào các b? test. M?i b? test g?m |E|+1 dòng: dòng ??u tiên ??a vào hai s? |V|, |E| t??ng ?ng v?i s? ??nh và s? c?nh c?a ?? th?; |E| dòng ti?p theo m?i dòng ??a vào b? ba uÎV, vÎV, w t??ng ?ng v?i m?t c?nh cùng v?i tr?ng s? canh c?a ?? th?.
?	T, |V|, |E| th?a mãn ràng bu?c: 1?T?100; 1?|V|?103; 1?|E|?|V|(|V|-1)/2;
Output:
?	??a ra 1 ho?c 0 theo t?ng dòng c?a m?i test t??ng ?ng v?i ?? th? có ho?c không có chu trình âm.
     Ví d?:
Input:	Output:
2
3  3
1  2 -1
2  3  4
3  1 -2
3  3
1  2 -1
2  3  2
3  1 -2
 	0
1


#include<bits/stdc++.h>
using namespace std;
int n, m;
struct edge{
	int u;
	int v;
	int w;
};
edge edges[10005];
bool isNegCycle(int k, int dis[]){
	for (int i=1; i<=n; i++)
		dis[i] = INT_MAX;
	dis[k] = 0;
	for (int i=1; i<=n; i++){
		for (int j=0; j<m; j++){
			int u = edges[j].u;
			int v = edges[j].v;
			int w = edges[j].w;
			if (dis[u] != INT_MAX && dis[u]+w<dis[v])
				dis[v] = dis[u]+w;
		}
	}
	for (int i=0; i<m; i++){
		int u = edges[i].u;
		int v = edges[i].v;
		int w = edges[i].w;
		if (dis[u] != INT_MAX && dis[u]+w<dis[v]){
			return true;
		}
	}
	return false;
}
void solve(){
	bool visited[10005]; 
    memset(visited, 0, sizeof(visited));
    int dis[10005];
    for (int i=1; i<=n; i++){
    	if (!visited[i])
    		if(isNegCycle(i, dis)){
    			cout << 1 << endl;
    			return;
			}
	}
	cout << 0 << endl;
}
int main(){
	int t; cin >> t;
	while (t--){
		cin >> n >> m;
		for (int i=0; i<m; i++)
			cin >> edges[i].u >> edges[i].v >> edges[i].w;
		solve();
	}
}
