#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,d=1;
	scanf("%d", &a);
	c=a%10;
	int f=a;
	while(a>=10){
		b=a/10;
		a=a/10;
		d=d*10;
		}
		int e = f-d*b-c;
		printf("%d",c*d+e+b);
}
