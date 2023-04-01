#include<stdio.h>
int main(){
	int a,b;
	char chu;
	scanf("%d%d",&a,&b);
	if(a<b){
		for(int i=1;i<=a;i++){
			for(int j=1;j<=b;j++){
				if(j>=i){
					chu = 96+b-i+1;
					printf("%c",chu);
				}
				else{
					chu = 96+b-j+1;
					printf("%c",chu);
				}
			}
			printf("\n");
		}
	}
	else {
    	for(int i=1;i<=a;i++){
			for(int j=1;j<=b;j++){
				if(j>=i){
					chu = 96+a-i+1;
					printf("%c",chu);
				}
				else{
					chu = 96+a-j+1;
					printf("%c",chu);
				}
			}
			printf("\n");
		}
	}
	
}
