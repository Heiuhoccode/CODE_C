#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
		char a[1001];
		gets(a);
		int h = strlen(a);
		int dem0 = 0;
		int chu = 0;
		for(int i=0;i<h;i++){
			if (a[i]<'0'||a[i]>'9'){
				chu=10;
				break;
			}
			
		}
		char* c;
		char b[2];
		b[1]='\0';
		for (int j='0';j<='9';j++){
			b[0]=j;
			c=strstr(a,b);
			if (c!=NULL){
				dem0++;
			}
		} 
		if (chu==10||a[0]=='0'){
			printf ("INVALID\n");
			continue;
		}
		else if(dem0==10&&chu!=10){
			printf("YES\n");
		}
		else if(dem0!=10&&chu!=10){
			printf("NO\n");
		}		
	}

}
