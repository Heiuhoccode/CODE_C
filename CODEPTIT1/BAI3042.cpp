#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		long long int dau,cuoi,b,c,d,inra=0;
		scanf("%lld",&dau);
		scanf("%lld",&cuoi);
		for(int i=dau;i<=cuoi;i++){
			d=i;
			bool csg = true;
			while(d>0){
				b=d%10;
		    	d=d/10;
		    	c=d%10;
		    	if(b>=c&&d>0){
		    		csg=false;
		    	}
			}
			if(csg){
				inra++;
			}
	    }
		printf("%d\n",inra);
	}	
}

