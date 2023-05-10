#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
		char a[21];
		gets(a);
		int h = strlen(a);
		int dem=0;
		for(int i=0;i<h/2;i++){
			if(a[i]-a[h-1-i]!=0){
				dem++;
			}
		}
		if(h%2==0&&dem==1){
			printf("YES\n");
		}
		else if(h%2!=0&&(dem==0||dem==1)){
			printf("YES\n");
		}
		else printf("NO\n");
	}
}
