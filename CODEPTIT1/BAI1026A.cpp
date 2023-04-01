#include<stdio.h>
#include<math.h>
int main (){
	int n,a;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
	    scanf("%d",&a);
		if(a==1)printf("NO\n");
		else if(a<4)printf("YES\n");
		else {
			for(int b=1;b<a;b++){
				if(a%b==0){printf("NO\n");break;
				}
				else {
				printf("YES\n");
				}
			}
		}
		}
}
