#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>=b){
		for(int i=a;i>=1;i--){
	    	if(i>=b){
		    	for(int j=i;j>=i-b+1;j--){
        	    	printf("%d",j);	
    	    	}
	    	}
	    	else{
		    	for(int h=i;h>=1;h--){
			    	printf("%d",h);
		    	}
		    	for(int k=2;k<=b-i+1;k++){
			    	printf("%d",k);
		    	}
	     	}
   	    	printf("\n");
    	}
	}
	else{
		for(int n=b;n>b-a;n--){
			for(int m=n;m>=1;m--){
				printf("%d",m);
			}
			for(int l=2;l<=b-n+1;l++){
				printf("%d",l);
			}
			printf("\n");
		}
	}
}
