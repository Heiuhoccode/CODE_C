#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
		char a[15];
		gets(a);
		int h = strlen(a);
		a[9]=a[10];
		a[10]=a[11];
		bool tangdan = true;
		for(int i=6;i<10;i++){
			if(a[i]>=a[i+1]){
				tangdan=false;
			}
		}
		bool bangnhau = true;
		for(int i=6;i<10;i++){
			if(a[i]!=a[i+1]){
				bangnhau = false;
			}
		}
		bool bangnhau2 = true;
		for(int i=6;i<11;i++){
			if(a[6]!=a[7]||a[7]!=a[8]||a[9]!=a[10]){
				bangnhau2 = false;
			}
		}
		bool so68 = true;
		for(int i=6;i<11;i++){
			if((a[i]-48)!=6&&(a[i]-48)!=8){
				so68 = false;
			}
		}
		if(tangdan||bangnhau||bangnhau2||so68){
			printf("YES\n");
		}
		else printf("NO\n");	
	}
}
