#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char a[200],b[200];
	gets(a);
	gets(b);
	int h = strlen(a);
	int k = strlen(b);
	int c=0,d=0;
	for(int i=0;i<k;i++){
		d+=b[i];
	}
	int dau,cuoi=0;
	for(int i=0;i<h;i++){
		dau=cuoi;
		c+=a[i];
		if(a[i+1]==' '||i==h-1){
			cuoi=i+1;
			if(c!=d){
				for(int j=dau;j<=cuoi;j++){
					printf("%c",a[j]);
				}
			}
			c=0;
			i++;
		}
	}
}
