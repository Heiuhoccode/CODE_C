#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[2*n];
	for(int i=0;i<2*n;i++){
		a[i]=i+1;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<=2*i;j++){
			printf("%d",a[2*(i-abs(i-j))]);
		}
		printf("\n");
	}
}
