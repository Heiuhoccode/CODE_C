#include<stdio.h>
int main(){
	int n;
	char chu;
	int so=1;
	scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			a[i][j]=so;
    		so++;
		}
	}
	int b[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			b[i][j]=a[j][i];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			chu = b[i][j]+64;
    		printf("%c ",chu);			
		}
		printf("\n");
	}
}
