#include<stdio.h>
#include<math.h>
int main(){
    int a;
    scanf("%d",&a);
	for(int b=1;b<=a;b++){
        for(int i=1;i<=b;i++){
		 printf("*");
       	}
        printf("\n");
    }
}
