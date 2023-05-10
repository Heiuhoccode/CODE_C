#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdbool.h>
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
		if(len_a>len_b){
			for(int i=len_a-1;i>=len_a-len_b;i--){
				b[i]=b[i-(len_a-len_b)];
			}
			for(int i=0;i<len_a-len_b;i++){
				b[i]=48;
			}
			h=len_a;
			
			int bu=48;
			char sum[504];
			for(int i=h-1;i>=0;i--){
				if((a[i]-b[i]-bu+48+48)<48){
					sum[i]=a[i]-b[i]+58+48-bu;
					bu=49;
				}
				else {
					sum[i]=a[i]-b[i]+48+48-bu;
					bu=48;
				}
			}
			
			int vitri;
				for(int i=0;i<h;i++){
					if(sum[i]=='0'){
						continue;
					}
					if(sum[i]!='0'){
						vitri=i;
						break;
					}
				}
				for(int i=vitri;i<h;i++){
					printf("%c",sum[i]);
				}
			
			
		}
		else if(len_a<len_b){
			for(int i=len_b-1;i>=len_b-len_a;i--){
				a[i]=a[i-(len_b-len_a)];
			}
			for(int i=0;i<len_b-len_a;i++){
				a[i]=48;
			}
			h=len_b;
			
			int bu=48;
			char sum[504];
			for(int i=h-1;i>=0;i--){
				if((b[i]-a[i]-bu+48+48)<48){
					sum[i]=b[i]-a[i]+58+48-bu;
					bu=49;
				}
				else {
					sum[i]=b[i]-a[i]+48+48-bu;
					bu=48;
				}
			}
			
			int vitri;
				for(int i=0;i<h;i++){
					if(sum[i]=='0'){
						continue;
					}
					if(sum[i]!='0'){
						vitri=i;
						break;
					}
				}
				for(int i=vitri;i<h;i++){
					printf("%c",sum[i]);
				}
			
		}
		else{
			h=len_a;
			bool sosanh = true;
			for(int i=0;i<h;i++){
				if(a[i]==b[i]){
					continue;
				}
				if(a[i]<=b[i]){
					sosanh = false;
					
				}break;
			}
			if(sosanh){
				int bu=48;
				char sum[504];
				for(int i=h-1;i>=0;i--){
					if((a[i]-b[i]-bu+48+48)<48){
						sum[i]=a[i]-b[i]+58+48-bu;
						bu=49;
					}
					else {
						sum[i]=a[i]-b[i]+48+48-bu;
						bu=48;
					}
				}
				int vitri;
				for(int i=0;i<h;i++){
					if(sum[i]=='0'){
						continue;
					}
					if(sum[i]!='0'){
						vitri=i;
						break;
					}
				}
				for(int i=vitri;i<h;i++){
					printf("%c",sum[i]);
				}	
			}
			else{
				int bu=48;
				char sum[504];
				for(int i=h-1;i>=0;i--){
					if((b[i]-a[i]-bu+48+48)<48){
						sum[i]=b[i]-a[i]+58+48-bu;
						bu=49;
					}
					else {
						sum[i]=b[i]-a[i]+48+48-bu;
						bu=48;
					}
				}
				int vitri;
				for(int i=0;i<h;i++){
					if(sum[i]=='0'){
						continue;
					}
					if(sum[i]!='0'){
						vitri=i;
						break;
					}
				}
				for(int i=vitri;i<h;i++){
					printf("%c",sum[i]);
				}
			}
		}
		printf("\n");
	}
}
