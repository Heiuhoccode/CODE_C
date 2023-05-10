#include<stdio.h>
#include<math.h>
long long int tong_uoc(long long int a){
	long long int sum=0;
	for(long long i=2;i<=sqrt(a);i++){
		while(a%i==0){
			sum = sum + i;
			a/=i;
    	}
	}
	if(a!=1){
		sum+=a;
	}
	return sum;
}
int main(){
	int N, nhap;
	long long int tong = 0;
	scanf("%d",&N);
	while(N--){
		scanf("%d",&nhap);
    	tong = tong + tong_uoc(nhap);
    }
    printf("%lld",tong);
    return 0;
}
