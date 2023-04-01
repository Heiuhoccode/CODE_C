#include<stdio.h>
#include<math.h>
int tonguoc(int n){
	int b=1;
	for(int j=2;j<=sqrt(n);j++){
		if(n%j==0){
			if(j==n/j){
				b+=j;
			}
			else {
				b+=j+n/j;
			}
		}
	}
	if(b==n){
		return 1;
	}return 0;
}
int main(){
	int a;
	scanf("%d",&a);
	for(int i=2;i<a;i++){
		if(tonguoc(i)==1){
			printf("%d ",i);
		}
	}
}
