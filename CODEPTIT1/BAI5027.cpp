#include<stdio.h>
#include<math.h>
int main(){
	int a[1000000][1000000];
	int n;
	scanf("%d",&n);
	int so=1;
	while(n--){
		int n,m;
		scanf("%d%d",&n,&m);
		for(int i=1000000-1;i>=0;i--){
			for(int j=0;j<1000000;j++){
				if(i<=n&&j<=m){
					a[i][j]=so;
				}
				
			}
		}
		so++;
	
	for(int i=0;i<4;i++){
		for(int j=0;j<7;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
}
