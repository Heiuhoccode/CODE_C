#include<stdio.h>
#include<math.h>
int tongcs(int a){
	int b,tong=0;
	while(a>0){
		b=a%10;
		a/=10;
		tong = tong +b;
	}
	if(tong %10 ==0){
		return 1;
	}
}
int main(){
	long long int n,a,b,d,stn;
	scanf("%d",&n);
	while(n--){
		int c;
		scanf("%d",&a);
		int dem =0;
		long long int dau=pow(10,a-1);
		long long int cuoi=pow(10,a);
		for(long long int i=dau;i<cuoi;i++){
			if(tongcs(i)==1){
				d=i;
				long long int h=i;
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
				if(stn==i){
					dem++;
				}
			}
			
		}
		printf("%d\n",dem);
	}
}

