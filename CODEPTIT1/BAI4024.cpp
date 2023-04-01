#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	bool swap ;
	do{
		swap = false;
		for(int i=1;i<n;i++){
			if(a[i-1]<a[i]){
				int c = a[i-1];
				a[i-1]=a[i];
				a[i]=c;
				swap = true;
			}
		}		
	}while(swap);
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
