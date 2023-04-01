#include<stdio.h>
#include<math.h>
int inra(int a){
    int c=1;
	for(int i=2;i<=a;i++){
			int b=0;
			while(a%i==0){
				a/=i;
				b++;
			}
			if(b>0){
				c=c*i;
			}
		}
		return c;
}
int main(){
	int Test;
	scanf("%d",&Test);
	while(Test--){
		long long int a;
		scanf("%lld",&a);
		printf("%d\n",inra(a));
	}	
}
