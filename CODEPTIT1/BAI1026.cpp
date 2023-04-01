#include<stdio.h>
#include<math.h>
int main(){
    int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int a,b;
		scanf("%d",&a);
		if(a>0){
			if((a==2)||(a==3)||(a==5)){printf("YES\n");}
			else if((a==1)||(a%2==0)||(a%3==0)||(a%5==0)||(b%2!=0)||(b%3!=0)||(b%5!=0)){printf("NO\n");}
			else printf("YES\n");
		}else return 0;
	}
}
