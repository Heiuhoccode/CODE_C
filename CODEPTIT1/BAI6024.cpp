#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
		char a[501];
		char b[501];
		gets(a);
		scanf("\n");
		gets(b);
		int len_a = strlen(a);
		int len_b = strlen(b);
		int h;
		// bien doi xau a va b 
		if(len_a>len_b){
			for(int i=len_a;i>=len_a-len_b+1;i--){
				b[i]=b[i-(len_a-len_b+1)];
			}
			for(int i=0;i<len_a-len_b+1;i++){
				b[i]=48;
			}
			for(int i=len_a;i>0;i--){
				a[i]=a[i-1];
			}
			a[0]=48;
			h=len_a;
		}
		else if(len_a<len_b){
			for(int i=len_b;i>=len_b-len_a+1;i--){
				a[i]=a[i-(len_b-len_a+1)];
			}
			for(int i=0;i<len_b-len_a+1;i++){
				a[i]=48;
			}
			for(int i=len_b;i>0;i--){
				b[i]=b[i-1];
			}
			b[0]=48;
			h=len_b;
		}
		else{
			h=len_a;
			for(int i=len_b;i>0;i--){
				b[i]=b[i-1];
				a[i]=a[i-1];
			}
			b[0]=48;
			a[0]=48;
		}
		// tinh tong
		int bu=48;
		char sum[504];
		for(int i=h;i>=0;i--){
			if((a[i]+b[i]+bu-48-48)>57){
				sum[i]=b[i]+a[i]-58-48+bu;
				bu=49;
			}
			else {
				sum[i]=b[i]+a[i]-48-48+bu;
				bu=48;
			}
		}
		// xuat ra ket qua
		if(sum[0]=='0'){
			for(int i=1;i<=h;i++){
				printf("%c",sum[i]);
			}	
		}else{
			for(int i=0;i<=h;i++){
				printf("%c",sum[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
