#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int k=1;k<=t;k++){
		int n;
		scanf("%d",&n);
		int a[n][n],b[n][n],c[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(j<=i){
					a[i][j]=j+1;
				}
				else{
					a[i][j]=0;
				}
			}
		}
		for(int i=0;i<n;i++){
	    	for(int j=0;j<n;j++){
				b[i][j]=a[j][i];
			}
	    }
	    for(int i=0;i<n;i++){
			for(int h=0;h<n;h++){
				int dem = 0;
				for(int j=0;j<n;j++){
					dem = dem + a[i][j]*b[j][h];
				}
				c[i][h]=dem;
			}
		}
		printf("Test %d:\n\n",k);
		for(int i=0;i<n;i++){
			for(int h=0;h<n;h++){
				printf("%d ",c[i][h]);
			}
			printf("\n");
		}
		printf("\n");
	}
}
