#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m;
		scanf("%d%d",&n,&m);
		int a[n][m];
		int b[n*m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				scanf("%d",&a[i][j]);
			}
		}
		int hang=0;
		int k=0;
		while(k<n*m){
			if(k<n*m){
				for(int j=hang;j<=m-1-hang;j++){
					b[k]=a[hang][j];
					k++;
				}
			}
			if(k<n*m){
				for(int i=hang+1;i<=n-1-hang;i++){
					b[k]=a[i][m-1-hang];
					k++;
				}
			}	
			if(k<n*m){
				for(int j=m-2-hang;j>=hang;j--){
			    	b[k]=a[n-1-hang][j];
					k++;
				}
			}	
			if(k<n*m){
				for(int i=n-2-hang;i>=hang+1;i--){
					b[k]=a[i][hang];
					k++;
				}
			}
			hang++;
		}
		for(int i=0;i<n*m;i++){
				printf("%d ",b[i]);
		}
		printf("\n");
	}
}
