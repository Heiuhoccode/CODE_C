#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
		int a[101];
		char b[101];
		a['I']=1;
		a['V']=5;
		a['X']=10;
		a['L']=50;
		a['C']=100;
		a['D']=500;
		a['M']=1000;
		gets(b);
		int sum = a[b[strlen(b)-1]];
		for(int i=strlen(b)-2;i>=0;i--){
			if(a[b[i+1]]>a[b[i]]){
				sum -= a[b[i]];
			}else{
				sum += a[b[i]];
			}
		}
		printf("%d\n",sum);		
	}
}
