#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char a[100];
	gets(a);
	int h = strlen(a);
	int c=0;
	int d=0;
	int e=0;
	int b[100];
	for(int i=0;i<h;i++){
		d+=a[i];
		if(a[i+1]==' '||i==h-1){
			b[e]=d;
			e++;
			d=0;
			i++;
    	}
    }
	for(int i=0;i<e;i++){
		for(int j=i+1;j<e;){
			if(b[i]==b[j]){
				for(int h=j;h<e;h++){
					if(h==e-1){
						b[h]=b[h];
					}
					else{
						b[h]=b[h+1];
					}
				}
				e--;
			}
			else{
				j++;
			}
		}
	}
	int g=0;
	int v = e;
	int dau,cuoi=0;
	for(int i=0;i<h;i++){
		dau=cuoi;
		c+=a[i];
		if(a[i+1]==' '||i==h-1){
			cuoi=i+1;
			if(c==b[g]){
				if(g<v){
					for(int j=dau;j<=cuoi;j++){
						printf("%c",a[j]);
					}	
				}
				g++;
			}
			c=0;
			i++;
		}
	}
}
