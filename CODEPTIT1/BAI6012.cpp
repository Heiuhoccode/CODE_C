#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
int snt(int a){
	if(a<2){
		return 0;
	}
	else{
		for(int i=2;i<=sqrt(a);i++){
			if(a%i==0){
				return 0;
			}
		}
		return 1;
	}
}
int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
		char a[500];
		gets(a);
		int h = strlen(a);
		int tong = 0;
		bool sodep = true;
		for(int i=0;i<h;i++){
			if(snt(a[i]-48)==0||a[i]!=a[h-1-i]){
				sodep = false;
			}
		}
		if(sodep){
			printf("YES\n");
		}
		else printf("NO\n");
	}
}
