#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
	char a[201];
	gets(a);
	int len_a = strlen(a);
	int len_c;
	char b[101],c[101];
	while(len_a>1){
		for(int i=0;i<len_a/2;i++){
			b[i]=a[i];
		}
		len_c=0;
		for(int i=len_a/2;i<len_a;i++){
			c[len_c]=a[i];
			len_c++;
		}
		if(len_a%2!=0){
			for(int i=len_c;i>1;i--){
				b[i]=b[i-2];
			}
			b[0]=48;
			b[1]=48;
			for(int i=len_c;i>0;i--){
				c[i]=c[i-1];
			}
			c[0]=48;
			int bu=48;
			char sum[201];
			for(int i=len_c;i>=0;i--){
				if((b[i]+c[i]+bu-48-48)>57){
					sum[i]=b[i]+c[i]-58-48+bu;
					bu=49;
				}
				else {
					sum[i]=b[i]+c[i]-48-48+bu;
					bu=48;
				}
			}
			int vitri;
			for(int i=0;i<=len_c;i++){
				if(sum[i]=='0'){
					continue;
				}
				if(sum[i]!='0'){
					vitri=i;
					break;
				}
			}
			for(int i=vitri;i<=len_c;i++){
				printf("%c",sum[i]);
			}
			int len=0; 
			for(int i=vitri;i<=len_c;i++){
				a[len]=sum[i];
				len++;
			}
			for(int i=len;i<201;i++){
				a[i]='\0';
			}
		len_a=strlen(a);
			
		}
		else{
			for(int i=len_c;i>0;i--){
				c[i]=c[i-1];
				b[i]=b[i-1];
			}
			c[0]=48;
			b[0]=48;
			int bu=48;
			char sum[201];
			for(int i=len_c;i>=0;i--){
				if((b[i]+c[i]+bu-48-48)>57){
					sum[i]=b[i]+c[i]-58+bu-48;
					bu=49;
				}
				else {
					sum[i]=b[i]+c[i]-48+bu-48;
					bu=48;
				}
				
			}
			int vitri;
			for(int i=0;i<=len_c;i++){
				if(sum[i]=='0'){
					continue;
				}
				if(sum[i]!='0'){
					vitri=i;
					break;
				}
			}
			for(int i=vitri;i<=len_c;i++){
				printf("%c",sum[i]);
			}
			int len=0; 
			for(int i=vitri;i<=len_c;i++){
				a[len]=sum[i];
				len++;
			}
			for(int i=len;i<201;i++){
				a[i]='\0';
			}
		len_a=strlen(a);	
		}
		printf("\n");	
	}
}
