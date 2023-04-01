#include<stdio.h>
#include<math.h>
int main(){
	int a,n;
	scanf("%d",&a);
	n=a*2-1;
	for(int i=1;i<=n;i++){
		int b=1;
		for(int j=1;j<=n;j++){
			if(i==j||i==a){
				printf("%d",1+abs(a-j));
			}
			else if(i==1||j==1||i==n||j==n){
				printf("%d",a);
			}
			else printf("o");	
		}
		printf("\n");
	}
}
