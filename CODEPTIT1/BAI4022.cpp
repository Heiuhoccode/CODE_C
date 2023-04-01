#include<stdio.h>
#include<math.h>
int main(){
	int n,c;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int min=a[0];
	for(int h=0;h<n;h++){
		if(a[h]>=min){
			min=a[h];
		}	
	}
	int min2=-pow(10,7);
	for(int j=0;j<n;j++){
		if(a[j]>=min2&&a[j]<min){
			min2=a[j];
		}
	}
	printf("%d %d",min,min2);
}
