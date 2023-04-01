#include<stdio.h>
int main(){
	int a;
	char chu;
	scanf("%d",&a);
	for(int i=a;i>=1;i--){
		for(int j=1;j<=a;j++){
			if(j<=i){
				chu = 64+j+i-2;
		    	printf("%c",chu);
			}
	       			
		}
		printf("\n");
	}
}
