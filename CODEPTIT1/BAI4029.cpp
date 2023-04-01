#include<stdio.h>
#include<stdbool.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	bool swap;
	int buoc = 1;
	do{
		
		swap = false;
		for(int i=1;i<n;i++){
			if(a[i-1]>a[i]){
				int quanco = a[i-1];
				a[i-1]=a[i];
				a[i]=quanco;
				swap=true;
			}
		}
	
		if(swap){
			printf("Buoc %d: ",buoc);
			for(int i=0;i<n;i++){
				printf("%d ",a[i]);
			}
			buoc++;
		}
		printf("\n");
	}while(swap);
}
