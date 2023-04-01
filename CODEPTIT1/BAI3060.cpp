#include<stdio.h>
#include<math.h>
int main(){
	int n,k,b,a=0;;
	scanf("%d %d",&n,&k);
	for(int i=1;i<=n;i++){
		b=i;
		while(b%2==0){
			a++;
		   	b=b/2;
		}
    }
	if(a>=k){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}
}
