#include<stdio.h>
#include<math.h>
int main(){
	int T;
	scanf("%d",&T);
	for(int h=1;h<=T;h++){
		int N,M;
		scanf("%d%d",&N,&M);
		int a[N][M];
		for(int i=0;i<N;i++){
			for(int j=0;j<M;j++){
				scanf("%d",&a[i][j]);
			}
		}
		printf("Test %d:\n",h);
		for(int i=1;i<N;i++){
			for(int j=1;j<M;j++){
				printf("%d ",a[i][j]);
			}
			printf("\n");
	    }
		printf("\n");		
	}
} 
