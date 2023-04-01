#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=1;i<=a;i++){
		printf("%d",i);
		if(i<=b){
			for(int j=1;j<=b;j++){
			if(i<j){
				printf("%d",j);
			}
		}
		for(int h=i-1;h>=1;h--){
				printf("%d",h);
			}
		}
		if(i>b){
			for(int k=b-1;k>=1;k--){
				printf("%d",k);
			}
		}
		printf("\n");
	}
}
