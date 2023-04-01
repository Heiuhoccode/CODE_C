#include<stdio.h>
#include<stdbool.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int j=1;j<=t;j++){
		int n;
		scanf("%d",&n);
		int a[n],b[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(int i=0;i<n;i++){
			scanf("%d",&b[i]);
		}
		bool tangdan ;
		do{
			tangdan = false;
			for(int i=1;i<n;i++){
				if(a[i-1]>a[i]){
					int c = a[i-1];
					a[i-1]=a[i];
					a[i]=c;
					tangdan = true;
				}
			}		
		}while(tangdan);
		
		bool giamdan ;
		do{
			giamdan = false;
			for(int i=1;i<n;i++){
				if(b[i-1]<b[i]){
					int c = b[i-1];
					b[i-1]=b[i];
					b[i]=c;
					giamdan = true;
				}
			}		
		}while(giamdan);
		printf("Test %d:\n",j);
		for(int i=0;i<2*n;i++){
			if(i%2==0){
				printf("%d ",a[i/2]);
			}
			else printf("%d ",b[(i-1)/2]);
		}
		printf("\n");		
	}
}
