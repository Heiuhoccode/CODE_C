#include<stdio.h>
#include<stdbool.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int h=1;h<=t;h++){
		int n;
		scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int dem = 0,max=0;
		for(int i=0;i<n-1;i++){
			if(a[i]<a[i+1]){
				dem++;
			}
			else{
				dem =0;
				continue;
			}
			if(max<dem){
				max=dem;
			}
		}
		printf("Test %d:\n",h);
		printf("%d\n",max+1);
		
		int dem1=0;
		for(int i=0;i<n-1;i++){
			if(a[i]<a[i+1]){
				dem1++;
			}
			else{
				dem1=0;
				continue;
			}
			if(dem1==max){
				
				for(int j=i-max+1;j<=i+1;j++){
					printf("%d ",a[j]);
				}
				printf("\n");
			}
		}
		printf("\n");		
	}
}
