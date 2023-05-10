#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
		char a[81];
		fgets(a,81,stdin);
		int h = strlen(a);
		a[h-1] = '\0';
		// bien doi thanh chu thuong
		for(int i=0;i<h-1;i++){
			if( 'A'<=a[i] && a[i]<='Z' ){
				a[i]=a[i]+32;
			}
		}
		// chu dau thanh chu hoa	
		for(int i=0;i<h-1;i++){
			if( a[i-1]==' ' && 97<=a[i] && a[i]<=122 || i==0 && 97<=a[0] && a[0]<=122){
				a[i]=a[i]-32;
			}
		}
		// rut gon
		
		char*b=strtok(a," ");
		while(b!=NULL){
			printf("%s",b);
			b=strtok(NULL," ");
			if(b!=NULL){
				printf(" ");
			}
		}
		
		printf("\n");
	}
}

