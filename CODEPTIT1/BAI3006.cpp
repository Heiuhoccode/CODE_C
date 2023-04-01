#include<stdio.h>
#include<math.h>
int main(){
	int n,a;
	scanf("%d",&n);
	for(int j=1;j<=n;j++){
		scanf("%d",&a);
		printf("Test %d: ",j);
		for(int i=2;i<=a;i++){
			int b=0;
			while(a%i==0){
				a/=i;
				b++;
			}
			if(b>0){
				printf("%d(%d) ",i,b);
			}
		}
		printf("\n");
	}
}
