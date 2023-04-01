#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
	int n;
	scanf("%d",&n);
	int a[n];
	int solan;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	bool giong = true;
	int max=0;
	for(int i=0;i<n;i++){
		solan = 0;
		giong = true;
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				solan++;
			}
			if(max<=solan){
				max=solan;
			}
		}
		for(int h=0;h<i;h++){
			if(a[i]==a[h]){
				giong = false;
			}
		}
		if(solan==max){
			printf("%d ",a[i]);
		}
	}
	printf("\n");
}
}
