#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdbool.h>
int main(){
	char a[101], b[101];
	char checka[101];
	gets(a);
	gets(b);
	int dau, cuoi;
	int dau2, cuoi2;
	for(int i=0; i<strlen(a); i++){
		if(a[i-1]==' '&&a[i]!=' ' || i==0&&a[0]!=' '){
			dau = i;
		}
		if(a[i]!=' '&&a[i+1]==' ' || a[i+1]=='\0'&&a[i]!=' '){
			cuoi = i;
		}
		int h=0;
		
		for(int j=dau; j<=cuoi; j++){
			checka[h]=a[j];
			h++;
		}	
		for(int j=cuoi+1; j<strlen(a); j++){
			if(a[j-1]==' '&&a[j]!=' ' || j==0&&a[0]!=' '){
				dau2 = j;
			}
			if(a[j]!=' '&&a[j+1]==' ' || a[j+1]=='\0'&&a[j]!=' '){
				cuoi2 = j;
			}
			if(h==cuoi2-dau2+1){
				bool giong = true;
				for(int k=dau2; k<=cuoi2; k++){
					if(a[k]!=checka[k-dau2]){
						giong = false;
					}
				}
				if(giong){
					for(int k=dau2; k<=cuoi2; k++){
						a[k]=' ';
					}
				}
			}
		}
		
		for(int j=0; j<h; j++){
			printf("%c",checka[j]);
		}
		printf("\n");
		for(int j=0; j<h; j++){
			checka[j]='\0';
		}
	}
	for(int i=0; i<strlen(a); i++){
		printf("%c",a[i]);
	}
}
