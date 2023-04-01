#include<stdio.h>
#include<stdbool.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m,p;
		scanf("%d%d%d",&n,&m,&p);
		int a[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				scanf("%d",&a[i][j]);
			}
		}
		bool swap ;
		do{
			swap = false;
			for(int i=1;i<n;i++){
				if(a[i-1][p-1]>a[i][p-1]){
					int c = a[i-1][p-1];
					a[i-1][p-1]=a[i][p-1];
					a[i][p-1]=c;
					swap = true;
				}
			}		
		}while(swap);
		
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		printf("\n");	
	}
	
}
