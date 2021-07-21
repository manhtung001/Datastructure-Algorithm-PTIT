#include<bits/stdc++.h>
using namespace std;
int a[30],n,soto,d;
long s ;// int s // dung 
bool use[30];// mang duyet phan tu a[i];kiem tra xem cac gia tri a[i] duoc su dung hay chua
 // soto : so luong to tien :tra ra ket qua cuoi cung 
 // d so to tien hien tai dang xet , dang co
 
 
void quaylui(int i){
	for(int j=1;j>=0;j--){// duyet tat ca cac gia de xem co chon hay khong , chi  la chon hay khong chon
		if(use[i]==false){// kiem tra xem to tien a[i] dc su dung hay chua
			s=s-j*a[i];  // neu chon to tien a[i]  thi giam tong so tien di 
			d=d+j;   // tang so luong to len 
			use[i]=true; 	//neu cai day duoc chon thi tra ve la da  chon
		}	
		// neu du thi ghi nhan ki luc so to it nhat < dk so to nho hon so to dang co
		if(s==0&&d<soto&&i<=n)  soto=d;//d so to tien hien dang co
//		d<soto
	// neu tong s van con 
		else if(i<n&&s>0) quaylui(i+1);
		s=s+j*a[i]; d=d-j;
		use[i]=false;
	// xong xuoi tra lai khong lay nua , danh dau la so do la chua chon
	// co the trung nhau nen xet het
	}
}
int main (){
//	ios_base::sync_with_stdio(false);
//	   cin.tie(0);
	int t;cin>>t;while(t--){
    cin>>n>>s;
   for(int i=1;i<=n;i++){
    	cin>>a[i];
    	 use[i]=false;// mang duyet : use : danh dau ban dau tat ca cac to tien chua chon 
   }
   // mang sort sap xep giam dan , chon to tien lon => giam thoi gian chon
   sort(a+1,a+n+1,greater<int>());
   soto=n+1;
   d=0;// so to hien dang xet =0
   quaylui(1);
   if(soto==n+1)cout<<-1<<endl;
   else cout<<soto<<endl;
	}
}
