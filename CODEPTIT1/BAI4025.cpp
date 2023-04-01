#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n],b[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	bool tang;
	do{
		tang = false;
		for(int i=1;i<n;i++){
			if(a[i-1]>a[i]){
				int quanco = a[i-1];
				a[i-1] = a[i];
				a[i] = quanco;
				tang = true;
			}
		}
	}while(tang);
	int m=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
	    	b[m]=a[i];
			m++;	
    	}
	}
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
			b[m]=a[i];
			m++;
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ",b[i]);
	}
}
