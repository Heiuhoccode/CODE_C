#include<stdio.h>
#include<math.h>
int main(){
	int n;
	int a,b,c;
	scanf("%d", &n);
	for (int i=1;i<=n;i++){
		scanf("%d", &a);
		c=a%10;
		while(a>0){
			b=a;
			a=a/10;
		}
		if(c==b){printf("YES\n");}
		else{printf("NO\n");}
	}
}
