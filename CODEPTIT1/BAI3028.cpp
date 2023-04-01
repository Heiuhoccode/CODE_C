#include<stdio.h>
#include<math.h>
int gt(int a){
	if(a==1||a==0){
		return 1;
	}
	else return a*gt(a-1);
}
int main(){
	int a,inra;
	scanf("%d",&a);
	for(int i=0;i<=a-1;i++){
		int n,k,h;
		for(int j=0;j<=a-1;j++){
			if(j<=i){
	    		n=gt(i);
				k=gt(j);
				h=gt(i-j);
				inra=n/(h*k);
				printf("%d ",inra);
			}
		}
		printf("\n");
	}
}
