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
	int T;
	scanf("%d",&T);
	while(T--){
		long long int a;
		long long int b;
		scanf("%lld%lld",&a,&b);
		long long int bsnn=a;
		for(int i=a+1;i<=b;i++){
			bsnn=bcnn(bsnn,i);	
		}
		printf("%lld\n ",bsnn);
	}	
}
