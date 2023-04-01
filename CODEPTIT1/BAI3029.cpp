#include<stdio.h>
#include<math.h>
int main(){
	long long int a;
	int n;
	scanf("%d",&n);
	while(n--){
		scanf("%lld",&a);
		long long int b,c=0;
    	while(a>0){
    		b=a%10;
    		a/=10;
    		if(b%2!=0){
    			c++;
			}
		}
		if(c==0){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}

