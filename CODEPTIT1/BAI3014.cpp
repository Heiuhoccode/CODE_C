#include<stdio.h>
#include<math.h>
int main(){
	long long a,b;
	long long d;
	int n;
	scanf ("%d",&n);
	while(n--){
		int c=0;
		printf("\n");
		scanf("%lld %lld",&a,&b);
    	if(a%b==0){
	    	printf("%d ",a);
	    	printf("%d ",b);
    	}
    	else if(b%a==0){
	    	printf("%d ",b);
	    	printf("%d ",a);
    	}
    	else{
	    	for(int i=a-1;i>=1;i--){
		    	if(b%i==0&&a%i==0){
			    	c++;
			    	if(c==1){
			    		d = (long long)(a*b);
			        	printf("%lld ",d/i);
			        	printf("%d ",i);
			    	}
				}
	    	}
    	}
	}
}

