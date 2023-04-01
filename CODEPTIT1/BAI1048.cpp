#include<stdio.h>
#include<math.h>
int main(){
		long int a,d;
	    scanf("%ld",&a);
    	int b=0, c=0;
    	while(a>0){
		    d=a%10;
	    	a=a/10;
	    	if(d%2==0){b++;
	    	}else{c++;
	    	}
	    }printf("%d %d\n",c,b);
}
