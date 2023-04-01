#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int main(){
	int n;
	int i;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&i);
		int a[i];
		bool mdx = true;
		for(int j=0;j<i;j++){
			scanf("%d",&a[j]);
			if(a[j]==a[i-j-1]){
				mdx=true;
			}
			else mdx=false;
		}
		if(mdx){
			printf("YES\n");
		}
		else printf("NO\n");
	}		
}
