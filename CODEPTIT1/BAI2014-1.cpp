#include<stdio.h>
#include<math.h>
int main(){
	int m,n;
	scanf("%d",&n);
	m=n*2-1;
	int a[m][m];
	int k=n;
	int hang = 0 ;
	while(k>=1){
		for(int j=hang;j<m-hang;j++){
			a[hang][j]=k;
		}
		for(int i=hang+1;i<m-hang;i++){
			a[i][m-hang-1]=k;
		}	
		for(int j=m-hang-2;j>=hang;j--){
			a[m-hang-1][j]=k;
		}
		for(int i=m-hang-2;i>=hang+1;i--){
			a[i][hang]=k;
		}
		k--;
		hang++;
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
