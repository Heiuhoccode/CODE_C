#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=1;i<=a;i++){
		if(i<=b){
			for(int j=i;j>=1;j--){
				printf("%d",j);
			}
			for(int k=2;k<=b-i+1;k++){
				printf("%d",k);
			}
		}
		else{
			for(int h=i;h>=i-b+1;h--){
				printf("%d",h);
			}
		}
		printf("\n");
	}
}
