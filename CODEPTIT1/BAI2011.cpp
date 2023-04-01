#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=1;i<=a;i++){
		for(int j=i;j<=b;j++){
			printf("%d",j);
    	}
		if(i>b){
			int c=0;
			for(int k=i;c<b;k--){
				printf("%d",k);
				c++;
			}
		}
		else{
			if(i>1){
				for(int h=b-1;h>=b-i+1;h--){
				printf("%d",h);
		    	}
			}
		}
		printf("\n");
	}
}
