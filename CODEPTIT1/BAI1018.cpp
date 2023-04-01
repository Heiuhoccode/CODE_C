#include<stdio.h>
#include<math.h>
int main(){
	int a,c;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		scanf("%d", &c);
		int b=sqrt(c);
		if (c==b*b){
			printf("YES\n");
		}else printf("NO\n");
		}
	}

