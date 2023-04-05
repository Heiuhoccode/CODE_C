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
		bool sodep1 = true;
		for(int i=0;i<h;i++){
			if(a[i]!=a[h-1-i]||a[i]%2!=0){
				sodep1 = false;
			}
		}
		if(sodep1){
			printf("YES\n");
		}
		else printf("NO\n");	
	}
	
}
