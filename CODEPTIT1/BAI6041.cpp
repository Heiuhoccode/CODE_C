#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
	char s[100001];
	gets(s);
	int m = 0;
	while(m<strlen(s)){
		char max = 0;
		int n;
		for(int i=m;i<strlen(s);i++){
			if(max<=s[i]){
				max = s[i];
				n=i;
			}
		}
		for(int i=m;i<strlen(s);i++){
			if(s[i]==max){
				printf("%c",max);	
			}
		}
		m=n+1;
	}
}

