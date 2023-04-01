#include<stdio.h>
#include<math.h>
int main(){
	int a,n,b;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int c=0;
	    scanf("%d",&a);	
      	for (int i=1;i<=9;i++){
	        b = a%10;
		    a = (int) a/10;
	        c+=b;
	}
	if(c%10==0){
		printf("YES\n");
	}
	else {
    	printf("NO\n");
	}
}
}
