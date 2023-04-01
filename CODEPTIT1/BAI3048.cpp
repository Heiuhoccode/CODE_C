#include<stdio.h>
#include<math.h>
int main(){
	long long int n,a;
	scanf("%lld",&n);
	while(n--){
		scanf("%lld",&a);
		int chuso;
		int sochan=0,sole=0;
		while(a>0){
			chuso=a%10;
			a/=10;
			if(chuso%2==0){
				sochan++;
			}
			else sole++;
		}
		if(sochan>sole){
			printf("YES\n");
		}
		else printf("NO\n");
	}
}
