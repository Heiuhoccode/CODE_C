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
       	for(int j=1;j<=n;j++){
       		printf("*");
		   }
        printf("\n");
    }
}
