#include<stdio.h>
int main(){
	int a;
	char chu;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		for(int j=1;j<=a-i+1;j++){
	       	chu = 61+(j+i)*2;
			printf("%c",chu);		
		}
		printf("\n");
	}
}
