#include<stdio.h>
#include<math.h>
int main(){
	int a;
	long long b;
	scanf("%d",&a);
    for (int i=1;i<=a;i++){
        scanf("%d",&b);
		printf("%lld\n", b*b);
	}
}
