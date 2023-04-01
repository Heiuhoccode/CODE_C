#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int daucuoi(long long int a){
	int b=a%10;
	int c;
	while(a>0){
		c=a%10;
		a/=10;
	}
	if(c==b*2||c*2==b){
		return 1;
	}return 0;
}
int sotach(long long int a){
	int b=a%10;
	int c;
	long long h;
	long long int m=1;
	long long int n=a;
	while(n>10){
		c=n/10;
		n/=10;
		m=m*10;
	}
	h=(a-c*m-b)/10;
}
int main(){
	long long int sotest,d,h;
	long long int stn;
	long long int sodaxoa;
	int n;
	scanf("%d",&n);
	while(n--){
		long long int c;
		scanf("%lld",&sotest);
		sodaxoa=sotach(sotest);
		d=sodaxoa;
		h=sodaxoa;
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
	if(daucuoi(sotest)==1&&stn==sodaxoa){
		printf("YES\n");
	}
	else printf("NO\n");
	}
}

