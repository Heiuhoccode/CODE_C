#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[2*n];
	for(int i=0;i<2*n;i++){
		a[i]=i+1;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			if(i%2==0){
				printf("%d",a[2*j]);
			}
			else{
				printf("%d",a[2*j+1]);
			}
		}
		printf("\n");
	}
}
