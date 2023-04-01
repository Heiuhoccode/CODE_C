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
	for(int i=0;i<m;i++){
		int quanco = C[i][a-1];
		C[i][a-1] = C[i][b-1];
		C[i][b-1] = quanco;
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ",C[i][j]);
		}
		printf("\n");
	}
}
