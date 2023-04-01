#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,d=0;
	scanf("%d",&a);
	int e=a;
	while(a>0){
		b = a%10;
		a/=10;
		c=1;
		for(int i=1;i<=b;i++){
			c=c*i;
		}
		d+=c;
	}
	if(e==d)printf("1");
	else printf("0");
}
