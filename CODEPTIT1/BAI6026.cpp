#include<stdio.h>
#include<string.h>
int tn (char *a){
	for(int i=0;i<strlen(a);i++){
		if(a[i]!=a[strlen(a)-1-i]){
			return 0;
		}
	}
	return 1;
}


int main(){
	char a[1000000];
	gets(a);
	int max = 0;
	char*c=strtok(a," ");
	while(c!=NULL){
		
		if(tn(c)==1){
			printf("%s",c);
		}
//		if(max<strlen(c)){
//			max = strlen(c);
//		}
		
		c=strtok(NULL," ");
	}
	//printf("%d",max);
}
