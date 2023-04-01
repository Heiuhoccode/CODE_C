#include<stdio.h>
#include<stdbool.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int dem =0;
	for(int i=0;i<n-1;i++){
		int h;
		int min = a[i];
		for(int j=n-1;j>=i;j--){
			if(min>=a[j]){
				min = a[j];
				h=j;
			}
		}
		int quanco = a[i];
		a[i]=a[h];
		a[h]=quanco;
		for(int j=0;j<n;j++){
			printf("%d ",a[j]);
	
		}
		printf("\n");
	}
}
