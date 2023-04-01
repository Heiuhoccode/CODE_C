#include<stdio.h>
#include<math.h>
int snt(int a){
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0){
			return 0;
		}
	}return 1;
}
int main(){
	int n;
	int i;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&i);
		int a[i];
		for(int j=0;j<i;j++){
			scanf("%d",&a[j]);
			if(snt(a[j])==1&&a[j]!=1){
				printf("%d ",a[j]);
			}
		}
		printf("\n");
	}		
}
