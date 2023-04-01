#include<stdio.h>
#include<math.h>
int main(){
	float a,b;
	scanf("%f %f", &a, &b);
	if(a!=0&&b!=0){
		printf("%.2f", -b/a);
	}
	else if(a==0&&b!=0){
		printf("Vo nghiem");
	}
	else printf("Vo so nghiem");
}
