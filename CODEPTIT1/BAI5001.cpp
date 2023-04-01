#include<stdio.h>
#include<math.h>
int main(){
	int N,M;
	scanf("%d%d",&N,&M);
	int a[N][M];
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			printf("%d ",a[j][i]);
		}
		printf("\n");
    }
} 
