#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main(){
	scanf("\n");
	char a[200];
	gets(a);
	int chu = 0 , so=0 , kitu=0;
	int k = strlen(a);
	for(int i=0;i<k;i++){
		int b = a[i];
		if(65<=b&&b<=90||97<=b&&b<=122){
			chu++;
		}
		else if(48<=b&&b<=57){
			so++;
		}
		else kitu++;
	}
	printf("%d %d %d",chu,so,kitu);
}
