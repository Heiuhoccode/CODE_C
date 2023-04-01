#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if((a-b)>0){
		if((b-c)>0){
			printf("%d",c);
		}
		else{
			printf("%d",b);
		}
	}
	else{
		if((c-a)<0){
			printf("%d",c);
		}
		else{
			printf("%d",a);
		}
	}
}
