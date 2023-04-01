#include<stdio.h>
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int C[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&C[i][j]);
		}
	}
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=0;i<n;i++){
		int quanco = C[a-1][i];
		C[a-1][i] = C[b-1][i];
		C[b-1][i] = quanco;
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ",C[i][j]);
		}
		printf("\n");
	}
}
