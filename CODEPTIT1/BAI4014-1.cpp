#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int h,k;
	for(int i=0;i<n-1;i++){
		int solan=0;
		if(i!=h){
			for(int j=i;j<n;j++){
				if(a[i]==a[j]){
					solan++;
					k=j;
				}
			}
			if(solan>0){
				h=k;
			}
		}
		printf("%d %d\n",a[i],solan);
	}
}
