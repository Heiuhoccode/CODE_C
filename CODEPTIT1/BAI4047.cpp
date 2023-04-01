#include<stdio.h>
#include<stdbool.h>
int main(){
	int n;
	scanf("%d",&n);
	long long int a[n][2];
	for(int i=0;i<n;i++){
		for(int j=0;j<2;j++){
			scanf("%lld",&a[i][j]);
		}
	}
	bool tang;
	do{
		tang = false;
    	for(int i=1;i<n;i++){
		
			if(a[i-1][0]>a[i][0]){
		    	for(int j=0;j<2;j++){
					long long int  quanco=a[i-1][j];
					a[i-1][j] = a[i][j];
					a[i][j] = quanco;
				} 
			tang = true;		 
			}	
		}
	}while(tang);
	long long int sum;
	for(int i=1;i<n;i++){
		if((a[i-1][0]+a[i-1][1])<=a[i][0]){
			a[i][0]=a[i][0];
		} 
		else{
			a[i][0]=a[i-1][1]+a[i-1][0];
		}
	}
	sum = a[n-1][0]+a[n-1][1];
	printf("%lld",sum);
}
