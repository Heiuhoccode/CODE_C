#include<stdio.h>
#include<math.h>
long long int somoi6(long long int a){
	long long int b[19];
	for(int i=0;i<19;i++){
		b[i]= a%10;
		a/=10;
		if(b[i]==5){
			b[i]=6;
		}
	}
	long long int c=0,d;
	for(int i=18;i>=0;i--){
		d=pow(10,i);
		c=c+b[i]*d;
	}
	return c;
}
long long int somoi5(long long int a){
	long long int b[19];
	for(int i=0;i<19;i++){
		b[i]= a%10;
		a/=10;
		if(b[i]==6){
			b[i]=5;
		}
	}
	long long int c=0,d;
	for(int i=18;i>=0;i--){
		d=pow(10,i);
		c=c+b[i]*d;
	}
	return c;
}
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		long long int X1,X2;
		scanf("%lld%lld",&X1,&X2);
		long long int tongln = somoi6(X1)+somoi6(X2);
		long long int tongnn = somoi5(X1)+somoi5(X2);
		printf("%lld %lld\n",tongnn,tongln);
	}
}
