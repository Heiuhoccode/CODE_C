#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c=0;
	scanf("%d",&a);
	for(int i=1;i<=10;i++){
		b = a%10;
		a = (int) a/10;
	    c+=b;
	}
	printf("%d",c);
}
