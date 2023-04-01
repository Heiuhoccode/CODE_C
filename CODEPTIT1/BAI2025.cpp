#include<stdio.h>
int main(){
	int a,b;
	char chu;
	scanf("%d%d",&a,&b);
	for(int i=1;i<=a;i++){
		for(int j=b;j>=1;j--){
			if(i<=j){
				chu = 63+b-j+i;
				printf("%c",chu);
			}
			else{
				chu = 63+b;
				printf("%c",chu);
			}
		}
		printf("\n");
	}
}
