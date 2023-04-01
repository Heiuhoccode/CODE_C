#include<stdio.h>
int main(){
	int n;
	int so=1;
	scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			a[i][j]=so;
			so++;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			if(i%2==1){
				printf("%d ",a[i][i-j]);
			}
			else{
				printf("%d ",a[i][j]);
			}
			
		}
		printf("\n");
	}
}
