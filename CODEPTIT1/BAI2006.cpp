#include<stdio.h>
#include<math.h>
int main(){
    int m,n;
    scanf("%d",&m);
    scanf("%d",&n);
	for(int b=1;b<=m;b++){
        for(int i=1;i<=b-1;i++){
		 printf("~");
       	}
       	if(b>1&&b<m){
       		for(int j=1;j<=n;j++){
			   if(j==1||j==n){
		   			printf("*");
				   }
				else{
					printf(".");
				}
       		}
		}
		else{
		   	for(int k=1;k<=n;k++){
		   		printf("*");
			}
		}   printf("\n");
	}
        
}

