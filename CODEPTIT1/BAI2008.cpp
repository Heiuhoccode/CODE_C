#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	int b=a;
	for(int i=a;i>=1;i--){
		if(i>1&&i<a-1){
	    	for(int j=i;j<=b;j++){
		    	if(j==i||j==b){
				printf("*");
	     		}
		    	else{
				printf(".");
	     		}
	    	}
		}
		else{
	     	for(int k=i;k<=b;k++){
				printf("*");
			}
	    	
			
		}
		printf("\n");
	}
}
