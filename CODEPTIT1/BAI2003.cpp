#include<stdio.h>
#include<math.h>
int main(){
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		if(i>=2&&i<a){
		    for(int j=1;j<=a;j++){
			    if (j==1||j==a){
			printf("*");
		    	}
		    	else {printf(".");
			    }
		    }
    	}
	    else{
	    	for(int f=1;f<=a;f++){
	    		printf("*");
			}
	    }
		printf("\n");
	} 
}
