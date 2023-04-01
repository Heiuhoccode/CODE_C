#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		for(int j=a-i;j>=1;j--){
			printf("~");
		}
		for(int k=a-i;k<=a-1;k++){
			printf("*");
		}
		printf("\n");
	}
}
