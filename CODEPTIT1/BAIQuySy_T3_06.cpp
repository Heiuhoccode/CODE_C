#include<stdio.h>
#include<math.h>
long UocSo;
void USCLN(long a,long b){
	for(long i=a;i>=1;i--){
		if(a%i==0&&b%i==0){
			UocSo = i;
			break;
		}
	}
}
int main()
{
	long a, b;
	scanf("%ld%ld",&a, &b);
	if(a> 0 && b>0)
	{
		USCLN(a,b);
		printf("%ld\n%lld", UocSo, (long long) a*b/UocSo);
	}
}
