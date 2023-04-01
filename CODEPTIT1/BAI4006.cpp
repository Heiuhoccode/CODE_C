#include<stdio.h>
#include<math.h>
int main(){
	int i;
	scanf("%d",&i);
	int a[i];
	for(int j=0;j<i;j++){
    	scanf("%d",&a[j]);		
	}
	for(int h=i-1;h>=0;h--){
		printf("%d ",a[h]);
	}
}
