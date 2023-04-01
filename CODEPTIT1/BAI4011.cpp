#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int main(){
	int bo;
	int dem;
	scanf("%d",&bo);
	while(bo--){
		int n;
		scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		dem =1;
		bool sl =true;
		for(int j=n-1;j>=1;j--){
			for(int h=j-1;h>=0;h--){
				if(a[j]<a[h]){
					sl = false;
					break;
				}
				else sl=true;
			}
			if(sl){
				dem++;
			}
		}
		printf("%d\n",dem);
	}	
}
