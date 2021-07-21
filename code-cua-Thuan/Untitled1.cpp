#include<stdio.h>
#include<math.h>
int fun(int k){
return k == 0 ? 1:2 *fun(k-1);
}
int main(){
	int a,b,c; a=5;
b = ++a;
c= ++a-b++ +1;
printf("%d %d %d", a, b,c);
}
