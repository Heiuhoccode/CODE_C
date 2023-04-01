#include<stdio.h>
#include<math.h>
int main(){
	int a,b,n;
	scanf("%d %d", &a, &b);
	if (a<=b){
		printf("%d",((b+a)*((b-a)+1))/2);
	}
	else {
		printf("%d",((b+a)*((a-b)+1))/2);
	}
}
	
