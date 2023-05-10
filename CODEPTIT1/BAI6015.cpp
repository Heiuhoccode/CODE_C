#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
		char a[51];
		fgets(a,51,stdin);
		a[strlen(a)-1]='\0';
		char ho[51];
		char ten[51];
		int vitri;
		
		for(int i=0;i<strlen(a);i++){
			if('A'<=a[i]&&a[i]<='Z'){
				a[i]+=32;
			}
		}
		
		for(int i=1;i<strlen(a);i++){
			if(a[i-1]==' '&&a[i]!=' '){
				a[i]=a[i]-32;
			}
		}
		if(a[0]!=' '){
			a[0]=a[0]-32;
		}
		for( int i=0; i<strlen(a); i++){
			if(a[i]!=' '&&a[i+1]==' '){
				vitri = i;
				break;
			}
		}
		for(int i=0;i<=vitri;i++){
			ho[i]=a[i];
		}
		ho[vitri+1]='\0';
		
		for(int i=0;i<=vitri;i++){
			if('a'<=ho[i]&&ho[i]<='z'){
				ho[i]-=32;
			}
		}
		
		int h=0;
		for(int i=vitri+1;i<strlen(a);i++){
			ten[h]=a[i];
			h++;
		}
		ten[h]='\0';
		
		char*b=strtok(ten," ");
		while(b!=NULL){
			printf("%s",b);
			b=strtok(NULL," ");
			if(b!=NULL){
				printf(" ");
			}
		}
		printf(", ");
		char*c=strtok(ho," ");
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
