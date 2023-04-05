#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
		char a[100];
		gets(a);
		int h = strlen(a);
		for(int i=0;i<h;i++){
			int solan = 0;
			for(int j=i+1;j<h;){
				if(a[i]==a[j]){
					solan++;
					for(int k=j;k<h;k++){
						if(k==h-1){
							a[k]=a[k];
						}
						else{
							a[k]=a[k+1];
						}
					}
					h--;
				}
				else{
					j++;
				}
			}
			printf("%c%d",a[i],solan+1);
		}
		printf("\n");
	}
}
