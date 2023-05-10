#include<stdio.h>
#include<math.h>
int main(){
	long long a,b;
	while(scanf("%lld%lld",&b,&a)==2){
		long long h,dem=0;
		if(a>b){
			h=a-b;
			for(long long i=2;i<=a;i+=2){
				if(h>=i&&h>0){
					dem+=2;
					h-=i;
				}
				else if(h>i/2&&h<i&&h>0){
					dem+=2;
					h-=i/2;
					break;
				}
				else if(h>0&&h<=i/2){
					dem++;
					break;
				}
			}	
		}else{
			h=b-a;
			for(long long i=2;i<=b;i+=2){
				if(h>=i&&h>0){
					dem+=2;
					h-=i;
				}
				else if(h>i/2&&h<i&&h>0){
					dem+=2;
					h-=i/2;
					break;
				}
				else if(h>0&&h<=i/2){
					dem++;
					break;
				}
			}
		}
		printf("%lld\n",dem);	
	}
}

