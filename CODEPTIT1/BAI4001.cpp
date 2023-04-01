#include<stdio.h>
#include<math.h>
int main(){
	int n;
	int i;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&i);
		int a[i];
		for(int j=0;j<i;j++){
			scanf("%d",&a[j]);
			if(a[j]%2==0){
				printf("%d ",a[j]);
			}
		}
		printf("\n");
	}		
}
