#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int A[n];
	for(int i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	for(int j=0;j<n;j++){
		if(A[j]%2==0){
			printf("%d ",A[j]);
		}
	}
	printf("\n");
	for(int h=0;h<n;h++){
		if(A[h]%2==1){
			printf("%d ",A[h]);
		}
	}
}
