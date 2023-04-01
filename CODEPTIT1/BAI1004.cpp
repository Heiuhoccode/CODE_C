#include<stdio.h>
#include<math.h>
int main(){
	int a,b;
	scanf("%d",&a);
	for (int i=1;i<=a;i++){
		scanf("%d",&b);
		printf("%.15f \n", (double) 1/b);
	}
}
