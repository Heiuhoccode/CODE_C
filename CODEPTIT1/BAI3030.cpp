#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int main(){
	int n,a;
	scanf("%d",&n);
	while(n--){
		int b,c,d,e,j;
		bool skg=true;
		scanf("%d",&a);
		d=pow(10,a-1);
		e=pow(10,a);
		for(int i=d;i<e;i++){
			j=i;
			while(j>0){
				b=j%10;
	    		j/=10;
		    	if(b<j%10){
		    		skg=false;break;
		    	}
		    	else skg=true;
			}
			if(skg){
			printf("%d ",i);
	    	}
		}
		printf("\n");
	}
}
