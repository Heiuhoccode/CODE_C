#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int snt(int a){
	if(a<2){
		return 0;
	}
	else {
		for(int j=2;j<=sqrt(a);j++){
			if(a%j==0){
				return 0;
			}
		}
	}
	return 1;
}
int main(){
	int T;
	long long int L,R;
	scanf("%d",&T);
	while(T--){
		int demso=0;
		scanf("%lld%lld",&L,&R);
		for(long long int i=sqrt(L);i<=sqrt(R);i++){
				if(snt(i)==1){
			    	demso++;
				}	
		}
    	printf("%d\n",demso);
	}
}
