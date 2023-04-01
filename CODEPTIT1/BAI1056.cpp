#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		long long int a,b,c,d=0;
		scanf("%lld",&a);
		while(a>0){
			b=a%10;
			a=a/10;
			c=a%10;
			if((b-c)<0){d++;
			}
		}if(d==0){printf("YES\n");
		}
		else {printf("NO\n");
		}
	}
}
