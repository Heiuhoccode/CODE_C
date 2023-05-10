#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int t;
	scanf("%d\n",&t);
	for(int te=1;te<=t;te++){
		char a[201];
		char check[201];
		char b[21];
		gets(a);
		gets(b);
		strcpy (check,a);
		char b1[21];
		int h=0;
		for(int i=0;i<strlen(b);i++){
			if(b[i]==' '){
				continue;
			}
			else{
				b1[h]=b[i];
				h++;
			}
		}
		// bien ve chu thuong
		for(int i=0;i<strlen(a);i++){
			if(65<=a[i]&&a[i]<=90){
				a[i]+=32;
			}
		}
		for(int i=0;i<h;i++){
			if(65<=b1[i]&&b1[i]<=90){
				b1[i]+=32;
			}
		}
		
		// xoa tu
		int dau,cuoi;
		for(int i=0;i<strlen(a);i++){
			
			if(a[i-1]==' '&&a[i]!=' '||i==0&&a[0]!=' '){
				dau = i;
			}
			
			if(a[i]!=' '&&a[i+1]==' '||a[i]!=' '&&a[i+1]=='\0'){
				cuoi = i;
			}
			
			if(cuoi-dau+1==h){
				int dem=0;
				for(int j=dau; j<=cuoi; j++){
					if(a[j]==b1[j-dau]){
						dem++;
					}
				}
				if(dem==h){
					for(int j=dau; j<=cuoi; j++){
						check[j]=' ';
					}
				}
			}
		}
		printf("Test %d: ",te);
		char*c=strtok(check," ");
		while(c!=NULL){
			printf("%s",c);
			c=strtok(NULL," ");
			if(c!=NULL){
				printf(" ");
			}
		}
		printf("\n");
	}
	
}
