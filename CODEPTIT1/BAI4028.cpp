#include<stdio.h>
#include<stdbool.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(i==0){
			printf("Buoc %d: %d",i,a[i]);
		}
		else{
			printf("Buoc %d: ",i);
		
			bool tang;
			
			do{
				tang = false;
		    	for(int j=1;j<=i;j++){
					
					if(a[j-1]>a[j]){
						int quanco = a[j-1];
						a[j-1]=a[j];
						a[j]=quanco;
						tang = true;
					}
				}		
    		}
			while(tang);
			for(int h=0;h<=i;h++){
				printf("%d ",a[h]);
			}
		}
		printf("\n");
	}
}
