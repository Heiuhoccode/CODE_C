#include<stdio.h>
#include<math.h>
int main(){
	int a,n;
	scanf("%d",&a);
	while(a--){
		scanf("%d",&n);
		int b=0;
		for(int j=1;j<=sqrt(n);j++){
			if(n%j==0){
				if(j%2==0){
				b++;
				}
				if(n/j%2==0){
					b++;
				}
				if(n/j==j&&j%2==0){
					b--;
				}
			}
		}
		printf("%d\n",b);
	}
}
