#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
		char a[1001];
		gets(a);
		int h = strlen(a);
		int chan = 0, le = 0, chu = 0;
		for(int i=0;i<h;i++){
			if(a[i]<48||a[i]>57){
				chu++;
			}
		}
		if(chu>0){
			printf("INVALID\n");
		}
		else{
			for(int i=0;i<h;i++){
				if(a[i]%2==0){
					chan++;
				}
				else le++;
			}
			if( ( (h)%2==0 && chan>le ) || ( (h)%2!=0 && le>chan ) ){
				printf("YES\n");
			}
			else printf("NO\n");
		}		
	}

}
