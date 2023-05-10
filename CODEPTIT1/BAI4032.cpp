#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
	char a[10];
	char c;
	int n=0;
	char b[10];
	while(c!='\n'){
		gets(a);
		c=getchar();
		a[strlen(a)]='\0';
		char *d=strtok(a," \n");
		while(d!=NULL){
			bool tang = true;
			for(int i=1;i<strlen(d);i++){
				if(d[i-1]>d[i]){
					tang = false;
				}
			}
			if(tang){
				for(int i=0;i<strlen(d);i++){
					b[n]=d[i];
					n++;
				}
				b[n]=' ';
				n++;
			}
			printf("%s\n",d);
			d=strtok(NULL," \n");
		}
	}
//	for(int i=0;i<n;i++){
//		printf("%c",b[i]);
//	}
}
