#include<stdio.h>
#include<stdbool.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int tien;
		scanf("%d",&tien);
		int dem = 0;
		int a[10]={1,2,5,10,20,50,100,200,500,1000};
		for(int i=9;i>=0;i--){
			dem += tien/a[i];
			tien = tien % a[i];
			}
		printf("%d\n", dem);
	}
}
