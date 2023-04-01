#include<stdio.h>
#include<math.h>
int main(){
	int T,N,p,x,b;
	scanf("%d",&T);
	while(T--){
		int dem =0;
		scanf("%d%d",&N,&p);
		for(int i=1;i<=N;i++){
	    	b=i;
			while(b%p==0){
		    	dem++;
			   	b=b/p;
			}
	    }
	    x=dem;
	    printf("%d\n",x);
	}
}
