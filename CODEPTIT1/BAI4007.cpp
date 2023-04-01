#include<stdio.h>
#include<math.h>
int main(){
	int a,b,p;
	scanf("%d %d",&a,&b);
	int m[a],n[b];
	for(int i=0;i<a;i++){
		scanf("%d",&m[i]);
	}
	for(int j=0;j<b;j++){
		scanf("%d",&n[j]);
	}
	scanf("%d",&p);
	for(int h=0;h<a+b;h++){
		if(h>=p&&h<p+b){
			printf("%d ",n[h-p]);
		}
		else if(h<p){
			printf("%d ",m[h]);
		}
		else printf("%d ",m[h-b]);
	}
	return 0;
}
