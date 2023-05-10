#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		long long int a[n];
		for(int i=0;i<n;i++){
			scanf("%lld",&a[i]);
		}
		bool swap;
		do{
			swap = false;
			for(int i=1;i<n;i++){
				if(a[i-1]>a[i]){
					int quanco = a[i-1];
					a[i-1] = a[i];
					a[i] = quanco;
					swap = true;
				}
			}
		}while(swap);
		long long int min = 2*pow(10,9);
		for(int i=1;i<n;i++){
			if(min >= abs(a[i-1]-a[i])){
				min = abs(a[i-1]-a[i]);
			}	
		}
		int dem =0;
		for(int i=1;i<n;i++){
			if(min == abs(a[i-1]-a[i])){
				dem++;
			}	
		}
		printf("%lld %d\n",min,dem);		
	}
}
