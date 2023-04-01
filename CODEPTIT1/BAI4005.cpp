#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&i);
		int a[i];
		for(int j=0;j<i;j++){
			scanf("%d",&a[j]);
		}
		int max=a[0];
		int c;
		for(int h=0;h<i;h++){
			if(a[h]>=max){
				max=a[h];
			}	
		}
		printf("%d\n",max);
		for(int h=0;h<i;h++){
			if(a[h]==max){
				c=h;
				printf("%d ",c);
			}
		}
		printf("\n");
	}
}
