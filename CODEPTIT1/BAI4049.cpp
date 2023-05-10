#include<stdio.h>
#include<math.h>
int BCNN(int a,int b){
	int bc;
	for(int i=1;i<=a;i++){
		if((b*i)%a==0){
			bc = b*i;
			break;
		}
	}
	return bc;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int A[n],B[n+1];
		for(int i=0;i<n;i++){
			scanf("%d",&A[i]);
		}
		B[0]=A[0];
		B[n]=A[n-1];
		for(int i=1;i<n;i++){
			B[i]=BCNN(A[i-1],A[i]);
		}
		for(int i=0;i<n+1;i++){
			printf("%d ",B[i]);
		}
		printf("\n");	
	}	
}
