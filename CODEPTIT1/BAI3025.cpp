#include<stdio.h>
#include<math.h>
#include<stdbool.h>
long int snt(long int a){
	if(a<2){
		return 0;
	}
	else{
		for(int i=2;i<=sqrt(a);i++){
			if(a%i==0){
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int chuso(long int a){
	int b;
	bool chusont = true;
	while(a>0){
		b=a%10;
		a/=10;
		if(snt(b)==0){
			chusont = false;
		}
	}
	if(chusont){
		return 1;
	}
	return 0;
}

int tongchuso(long int a){
	int tong = 0;
	int b;
	while(a>0){
		b=a%10;
		tong = tong + b;
		a/=10;
	}
	if(snt(tong)==1){
		return 1;
	}
	return 0;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long int a,b;
		scanf("%ld%ld",&a,&b);
		int dem = 0;
		for(long int i=a;i<=b;i++){
			if(tongchuso(i)==1&&chuso(i)==1&&snt(i)==1){
				dem++;
			}
		}
		printf("%d\n",dem);
	}
}
