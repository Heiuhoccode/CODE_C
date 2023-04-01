#include<stdio.h>
#include<math.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int c=b;
	while(b--){
		if (b>=1&&b<c-1){
			for(int j=1;j<=a;j++){
				if(j==1||j==a){
					printf("*");
				}
				else printf(" ");
	    	}
	    }
		else{
			for(int i=1;i<=a;i++){
				printf("*");
			}
		}
		printf("\n");
	}
		
}
