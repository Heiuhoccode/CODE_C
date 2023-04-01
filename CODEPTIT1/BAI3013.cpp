#include<stdio.h>
#include<math.h>
int main(){
	int n,a;
	scanf("%d",&n);
    for(int i=0;i<=n-1;i++){
		a=(1/sqrt(5))*(pow((1+sqrt(5))/2,i)-pow((1-sqrt(5))/2,i));
       	printf("%d ",a);
	}
}

