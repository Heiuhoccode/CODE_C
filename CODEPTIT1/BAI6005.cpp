#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char a[500];
	int b[500];
	gets(a);
	int h = strlen(a);
	int tong = 0;
	// bien doi ve chu thuong
	for(int i=0;i<h;i++){
		if(65<=a[i]&&a[i]<=90){
			a[i]=a[i]+32;
		}
	}
	// gan gia tri vao mang moi
	int k=0;
	int c=0;
	for(int i=0;i<h;i++){
		c+=a[i];
		if(a[i+1]==' '||i==h-1){
			b[k]=c;
			c=0;
			k++;
			i++;
		}
	}
	// dem 
	int dau,cuoi=0;
	int c1 = 0;
	int c2 = 0;
	int dem1 = 0;
	for(int i=0;i<h;i++){
		dau=cuoi;
		c1+=a[i];
		if(a[i+1]==' '||i==h-1){
			cuoi=i+1;
			int dem = 0;
			int demnguoc = 0;
			for(int j=dem1;j<k;j++){
				if(c1==b[j]){
					dem++;
				}
			}
			for(int j=0;j<dem1;j++){
				if(c1==b[j]){
					demnguoc++;
				}
			}
			
	    	if(demnguoc<1&&dem>0){
				for(int j=dau;j<=cuoi;j++){
					printf("%c",a[j]);
				}
				printf("%d\n",dem);
			}
			dem1++;
			c1=0;
			i++;
		}
	}
}
