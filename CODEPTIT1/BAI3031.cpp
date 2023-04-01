#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int a,b,c,d,h,k;
		scanf("%d%d%d%d",&a,&b,&c,&d);
		for(int i=a;i>=1;i--){
	     	if(a%i==0&&b%i==0){
	     		h=i;
		    	break;
	    	}
    	}
    	for(int j=c;j>=1;j--){
	     	if(c%j==0&&d%j==0){
	     		k=j;
		    	break;
	    	}
    	}
    	if(h==k){
    		printf("YES\n");
		}
		else printf("NO\n");
    }
}
