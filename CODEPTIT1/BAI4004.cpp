#include<stdio.h>
#include<math.h>
int main(){
	int n;
	int b;
	long long int a[92];
	a[0]=0;
	a[1]=1;
	for(int i=2;i<93;i++){
		a[i]=a[i-1]+a[i-2];
	}
	scanf("%d",&n);
	while(n--){
    	scanf("%d",&b);
		printf("%lld\n",(long long int )a[b]);
	}
}
