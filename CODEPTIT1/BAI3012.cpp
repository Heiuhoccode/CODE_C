#include<stdio.h>
#include<math.h>
int main(){
	int n,a;
	scanf("%d",&n);
	int i=0;
    while(a<n){
    	a=(1/sqrt(5))*(pow((1+sqrt(5))/2,i)-pow((1-sqrt(5))/2,i));
    	i++;
	}
	if(a==n){
		printf("1");
	}
	else printf("0");
}

