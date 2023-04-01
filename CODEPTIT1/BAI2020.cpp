#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[2*n];
	for(int i=0;i<2*n;i++){
		a[i]=i+1;
	}
	for(int i=n-1;i>=0;i--){
		for(int j=0;j<=2*(n-1)-i;j++){
			if(j<i){
				printf("~");
			}
			else{
				int h=n-1-i;
			
				printf("%d",a[2*h-2*abs(n-1-j)+1]);
			}
			
		}
		printf("\n");
	}
}
