#include<stdio.h>
int main(){
	int n;
	int so=1;
	char chu;
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
				chu = a[i][i-j]+96;
				printf("%c ",chu);
			}
			else{
				chu = a[i][j]+96;
				printf("%c ",chu);
			}
			
		}
		printf("\n");
	}
}
