#include<stdio.h>
#include<math.h>
int main(){
	int m,n,p,q;
	scanf("%d%d%d%d",&m,&n,&p,&q);
	int a[m][n];
	int b[n][p];
	int c[m][p];
	int d[p][q];
	int e[m][q];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<p;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=0;i<p;i++){
		for(int j=0;j<q;j++){
			scanf("%d",&d[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		for(int h=0;h<p;h++){
			int dem = 0;
			for(int j=0;j<n;j++){
				dem = dem + a[i][j]*b[j][h];
			}
			c[i][h]=dem;
		}
	}
	for(int i=0;i<m;i++){
		for(int h=0;h<q;h++){
			int dem = 0;
			for(int j=0;j<p;j++){
				dem = dem + c[i][j]*d[j][h];
			}
			e[i][h]=dem;
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<q;j++){
			printf("%d ",e[i][j]);
		}
		printf("\n");
	}
}
