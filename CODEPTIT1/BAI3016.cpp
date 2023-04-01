#include<stdio.h>
#include<math.h>
int main(){
	int T;
	long long int n;
	scanf("%d",&T);
	while(T--){
		scanf("%lld",&n);
		long long int a[100000];
		a[0]=0;
		a[1]=1;
		for(int i=2;i<100000;i++){
			a[i]=a[i-1]+a[i-2];
		}
		int b=0;
		for(int i=0;i<100000;i++){
			if(n==a[i]){
				b++;
			}
		}
		if(b>0){
			printf("YES\n");
		}
		else printf("NO\n");
	}
}
