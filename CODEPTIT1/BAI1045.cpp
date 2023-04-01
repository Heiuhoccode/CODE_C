#include<stdio.h> 
#include<math.h> 
int main(){
	long long int a,c;
	scanf("%lld",&a);
	int b=a%10;
	while(a>0){
		c=a%10;
		a=a/10;
	}printf("%d %d",c,b);
}

