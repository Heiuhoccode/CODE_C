#include<stdio.h>
#include<math.h>
int main(){
	long long a,b,c=0;
	long long d;
	scanf("%lld %lld",&a,&b);
	if(a%b==0){
		printf("%d\n",b);
		printf("%d\n",a);
	}
	else if(b%a==0){
		printf("%d\n",a);
		printf("%d\n",b);
	}
	else{
		for(int i=a-1;i>=1;i--){
			if(b%i==0&&a%i==0){
				c++;
				if(c==1){
					printf("%d\n",i);
			    	d = (long long)(a*b);
			    	printf("%lld\n",d/i);
				}
				
			}
		}
	}
}

