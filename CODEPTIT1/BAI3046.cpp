#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int chuso( int n){
	int a;
	int tong=0;
	bool so4 = true;
	while(n>0){
		a=n%10;
		n/=10;
		tong = tong + a;
		if(a==4){
			so4 = false;
		}
	}
	if(so4&&tong%10==0){
		return 1;
	}
	return 0;
}
int main(){
	int a,d;
	int stn;
	int n;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&a);
		for(int i=pow(10,a-1);i<pow(10,a);i++){
			int c;
			d=i;
	    	int h=i;
			stn = 0;
			int k=0;
			long long int g;
			while(d>0){
				c=d%10;
				d/=10;
				int m=0;
				long long int e;
				while(h>0){
					h/=10;
					e=pow(10,m);
					m++;
				}
				g = e/pow(10,k);
				k++;
				stn = stn + g*c;
			}
			if(chuso(i)==1&&stn==i){
				printf("%d ",i);
			}
		}
		printf("\n");
	}
}
