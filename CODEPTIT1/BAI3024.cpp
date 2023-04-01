#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c=0,d=0,n,m;
	scanf("%d %d",&a,&b);
	int e=a;
	int f=b;
	while(e>0){
		n=e%10;
		e/=10;
		c=c+n;
	}
	while(f>0){
		m=f%10;
		f/=10;
		d=d+m;
	}
	if(c>d){
		printf("%d %d",b,a);
	}else{
		printf("%d %d",a,b);
	}
}
