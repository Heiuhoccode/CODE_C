#include<stdio.h>
#include<math.h>
long long int snt(long long int a){
	if(a<2){
		return 0;
	}
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1;
}
long long int ULN(long long int N){
	long long int in;
	for(long long int i=2;i<=sqrt(N);i++){
		while(N%i==0){
			N/=i;
		}	
	}	return N;
}

int main(){
	int T;
	long long int N;
	scanf("%d",&T);
	while(T--){
		scanf("%lld",&N);
		if(snt(N)==1){
			printf("%lld\n",N);
		}
		else{
			printf("%lld\n",ULN(N));
		}	
	}
	return 0;	
}
