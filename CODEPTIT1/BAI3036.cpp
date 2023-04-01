#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int chusole(long long int n){
	long long int a;
	int tong=0;
	bool csl = true;
	while(n>0){
		a=n%10;
		n/=10;
		tong = tong + a;
		if(a%2==0){
			csl = false;
		}
	}
	if(csl&&tong%2==1){
		return 1;
	}
	return 0;
}
int main(){
	long long int a,d;
	long long int stn;
	int n;
	scanf("%d",&n);
	while(n--){
		 long long int c;
		scanf("%lld",&a);
		d=a;
		long long int h=a;
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
	if(chusole(a)==1&&stn==a){
		printf("YES\n");
	}
	else printf("NO\n");
	}
}
