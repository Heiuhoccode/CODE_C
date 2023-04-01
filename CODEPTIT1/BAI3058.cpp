#include<stdio.h>
#include<math.h>
long long int bcnn(long long int a,long long int b){
	long long int bc;
	for(int i=1;i<=b;i++){
		long long int h = a*i;
		if(h%b==0){
			bc=h;
			break;
		}
	}
	return bc;
}
int main(){
	long long int T;
	scanf("%lld",&T);
	while(T--){
		long long int a;
		long long int b=1;
		scanf("%lld",&a);
		for(int i=2;i<=a;i++){
			b=bcnn(b,i);	
		}
		printf("%lld\n",b);
	}	
}
