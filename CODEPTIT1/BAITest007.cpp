#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
		char a[18];
		gets(a);
		int h= strlen(a);
		bool hecoso3 = true;
		for(int i=0;i<h;i++){
			if((a[i]-48)!=0&&(a[i]-48)!=1&&(a[i]-48)!=2){
				hecoso3 = false;
			}
		}
		if(hecoso3){
			printf("YES\n");
		}
		else printf("NO\n");		
	}

}
