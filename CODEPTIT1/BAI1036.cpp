#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c=1;
	scanf ("%d",&a);
    while(a>0){
		b = a%10;
	    a = (int) a/10;
		c=c*b;
	 }
	printf("%d\n",c);
}
