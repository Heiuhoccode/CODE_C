#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
		char a[500];
		gets(a);
		int h = strlen(a);
		int tong = 0;
		for(int i=0;i<h;i++){
			tong = tong + a[i] - 48;
		}
		bool sodep = true;
		for(int i=1;i<h-1;i++){
			if((a[0]-48)!=8||(a[h-1]-48)!=8||a[i]!=a[h-1-i]){
				sodep = false;
			}
		}
		if(sodep && tong%10==0){
			printf("YES\n");
		}
		else printf("NO\n");
	}
}
