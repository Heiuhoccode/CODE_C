#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
	char a[100];
	gets(a);
	int h = strlen(a);
	int dem1=0,dem2=0,dem3=0,dem4=0,dem5=0,dem6=0,dem7=0,dem8=0;
	for(int i=0;i<h;i++){
		if(a[i]=='('){
			dem1++;
		}
		if(a[i]==')'){
			dem2++;
		}
		if(a[i]=='{'){
			dem3++;
		}
		if(a[i]=='}'){
			dem4++;
		}
		if(a[i]=='['){
			dem5++;
		}
		if(a[i]==']'){
			dem6++;
		}
		if(a[i]==39){
			dem7++;
		}
		if(a[i]=='"'){
			dem8++;
		}
	}
	if(dem1==dem2&&dem3==dem4&&dem5==dem6&&dem7%2==0&&dem8%2==0){
		printf("1");
	}
	else printf("0");
}
