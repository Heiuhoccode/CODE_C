#include<stdio.h>
#include<math.h>
int main(){
	int b[10];
	int a,nhiphan;
	scanf("%d",&a);
	for(int i=0;i<10;i++){
		b[i]= a%2;
		a/=2;
	}
	int c=0;
	for(int i=9;i>=0;i--){
			c=c+b[i]*pow(10,i);
		}
		printf("%d",c);
}
