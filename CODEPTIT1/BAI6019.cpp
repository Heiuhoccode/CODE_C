#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
	char a[51];
	gets(a);
	int h = strlen(a);
	for(int i=0;i<h;i++){
		if(65<=a[i]&&a[i]<=90){
			a[i]+=32;
		}
	}
	int n;
	for(int i=0;i<h;){
		if(a[i]!='\0'){
			n=i;		
		}
		if(a[i]!=' '){
			printf("%c",a[i]);		
		}
		while(a[i]!=' '&&a[i]!='\0'){
			i++;
		}
		while(a[i]==' '){
			i++;
		}
		
		
		if(a[i]=='\0'){
			for(int j=n+1;j<h;j++){
				if(a[j]==' '){
					continue;
				}
				printf("%c",a[j]);
			}		
		}
	}
	
	printf("@ptit.edu.vn");
}
