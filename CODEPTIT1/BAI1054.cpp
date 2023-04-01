#include<stdio.h>
#include<math.h>
long songuyento(long a){
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
long tonguoc(long a){
	long sum=0;
	if(songuyento(a)==1){
		sum = a;
	}
	else{
		for(long i=2;i<=sqrt(a);i++){
			while(a%i==0){
				if(songuyento(a/i)==1){
					sum = sum + a/i + i;
					break;
				}
				else{
					sum = sum + i;
				}
				a/=i;
	    	}
		}	
	}
	return sum;	
}
int main(){
	int N, nhap;
	long long tong = 0;
	scanf("%d",&N);
	while(N--){
		scanf("%d",&nhap);
    	tong = tong + tonguoc(nhap);
    }
    printf("%lld",tong);
    return 0;
}
