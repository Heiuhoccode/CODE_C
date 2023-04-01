#include<stdio.h>
#include<math.h>
int main(){
	int n,a;
	scanf("%d",&n);
	while(n--){
		printf("\n");
		scanf("%d",&a);
		int b=0;
		for(int i=2;i<=a;i++){
    		while(a%i==0){
    			if(i<a||b>0){
				printf("%d ",i);
		    	a/=i;
		    	b++;
				}
		    }
     	}
	}
}
