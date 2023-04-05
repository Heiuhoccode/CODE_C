#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("\n");
		char a[200];
		gets(a);
		int dem = 0;
		int k = strlen(a);
		for(int i=0;i<k;i++){
			if(a[i]!=' '&&a[i+1]==' '){
				dem++;	
			}
		}
		if(a[k-1]==' '){
			printf("%d\n",dem);	
		}
		else{
			printf("%d\n",dem+1);
		}
	}
}
