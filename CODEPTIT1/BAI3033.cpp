#include<stdio.h>
#include<math.h>
int main(){
	int n,a;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&a);
		printf("%d = ",a);
		for(int i=2;i<=a;i++){
			int b=0;int c=a;
			while(a%i==0){
				a/=i;
				b++;
			}
			if(b>0){
				if(c>pow(i,b)){
					printf("%d^%d * ",i,b);
				}
				else printf("%d^%d",i,b);
			}
		}
		printf("\n");
	}
}

