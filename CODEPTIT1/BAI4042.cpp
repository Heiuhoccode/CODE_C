#include<stdio.h>
#include<stdbool.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		long int a[n];
		for(int i=0;i<n;i++){
			scanf("%ld",&a[i]);
		}
		bool khac = true;
		for(int i=0;i<n-1;i++){
			int dem = 0;
			for(int j=i+1;j<n;j++){
				if(a[i]==a[j]){
					printf("%ld ",a[j]);
					dem++;
					break;
				}
			}
			if(dem>0){
				khac = false;
				break;
			}
		}
		if(khac){
			printf("NO");
		}
		printf("\n");
	}
}
