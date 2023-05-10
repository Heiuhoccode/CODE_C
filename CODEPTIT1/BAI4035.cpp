#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n],b[n];
	
	for(int i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
	}
	int min = 50001;
	for(int i=0;i<n;i++){
		if(min>b[i]){
			min = b[i];
		}
	}
	long int sum = min;
	for(int i=0;i<n;i++){
		sum += a[i];
	}
	printf("%ld",sum);
}
