#include<stdio.h>
#include<math.h>
int main(){
	int n,a,b;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d %d",&a,&b);
		int c=0;
		for(int j=b;j>=1;j--){
			if(a%j==0&&b%j==0){
            	c=j-c;
		    	if(c>0){
			    	printf("%d\n",j);
		    	}
		    	else{
			    	c=j;
				}
			}
		}
	}
}
