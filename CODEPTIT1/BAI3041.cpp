#include<stdio.h>
#include<math.h>
int main(){
	int n;
	int a,b,c,d;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d%d%d",&a,&b,&c,&d);
		long long int canh1 = abs(c-a);
		long long int canh2 = abs(d-b);
		if(canh1-canh2==0){
			printf("YES\n");
		}
		else printf("NO\n");
	}
}
