#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int compare(const void *a,const void *b){
	return ( *(char*)b- *(char*)a);
}
int main(){
	int n=1;
	while(n!=0){
		scanf("%d",&n);
		if(n==0) continue;
		getchar();
		char s1[201],s2[201],s[402],check[402],checks1[201],checks2[201];
		s1[n]='\0';
		s2[n]='\0';
		s[2*n]='\0';
		check[2*n]='\0';
		scanf("%s",s1);
		scanf("%s",s2);
		scanf("%s",s);
		strcpy(checks1,s1);
		checks1[n]='\0';
		strcpy(checks2,s2);
		checks2[n]='\0';
		
		char a[402];
		a[2*n]='\0';
		for(int i=0;i<n;i++){
			a[i]=s1[i];
			a[i+n]=s2[i];
		}
		qsort(a,strlen(a),sizeof(char),compare);
		
		char b[402];
		b[2*n]='\0';
		strcpy(b,s);
		qsort(b,strlen(b),sizeof(char),compare);
		
		if( strcmp(a,b) != 0 ){
			printf("-1\n");
			continue;
		}
		else {
			int dem = 0;
			int dem1= 0;
			do{
				for(int i=0;i<2*n;i+=2){
					check[i]=s2[i/2];
					check[i+1]=s1[i/2];
				}
				
				for(int i=0;i<2*n;i++){
					if(i<n){
						s1[i]=check[i];
					}
					else{
						s2[i-n]=check[i];
					}
				}
				
				dem++;
				if(strcmp(check,s) == 0){
					break;
				}
				if(strcmp(checks1,s1) == 0 || strcmp(checks2,s2) == 0){
					dem1++;
					break;
				}
				
			}while( strcmp(check,s) != 0);
			if(dem1>0){
				printf("-1\n");
			}
			else{
				printf("%d\n",dem);
			}
		}	
	}
}

