#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int M,N,p;
		scanf("%d%d%d",&N,&M,&p);
		int a[N],b[M];
		for(int j=0;j<N;j++){
			scanf("%d",&a[j]);
		}
		for(int h=0;h<M;h++){
			scanf("%d",&b[h]);
		}
		printf("Test %d:\n",i);
		for(int k=0;k<N+M;k++){
			if(k>=p&&k<p+M){
				printf("%d ",b[k-p]);
			}
			else if(k<p){
				printf("%d ",a[k]);
			}
			else printf("%d ",a[k-M]);
    	}	
    	printf("\n");
    }
}
