#include<stdio.h>
#include<math.h>
int main(){
	long long int a;
	int sotach;
	int so2=0,so3=0,so5=0,so7=0;
	scanf("%lld",&a);
	while(a>0){
		sotach=a%10;
		a/=10;
		if(sotach==2){
			so2++;
		}
		if(sotach==3){
			so3++;
		}
		if(sotach==5){
			so5++;
		}
		if(sotach==7){
			so7++;
		}
	}
	if(so2>0){
		printf("2 %d\n",so2);
	}
	if(so3>0){
		printf("3 %d\n",so3);
	}
	if(so5>0){
		printf("5 %d\n",so5);
	}
	if(so7>0){
		printf("7 %d\n",so7);
	}
}
