#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int k=1;k<=t;k++){
		int n,m;
		scanf("%d%d",&n,&m);
		int a[n][m],b[m][n],c[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				scanf("%d",&a[i][j]);
			}
		}
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				b[i][j]=a[j][i];
			}
	    }
	    for(int i=0;i<n;i++){
			for(int h=0;h<n;h++){
				int dem = 0;
				for(int j=0;j<m;j++){
					dem = dem + a[i][j]*b[j][h];
				}
				c[i][h]=dem;
			}
		}
		printf("Test %d:\n",k);
		for(int i=0;i<n;i++){
			for(int h=0;h<n;h++){
				printf("%d ",c[i][h]);
			}
			printf("\n");
		}
	}
	
} 
