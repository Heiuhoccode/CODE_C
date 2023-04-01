#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,d;
	int e,f,g,h;
	long long int canh1;
	long long int canh2;
	scanf("%d%d%d%d\n",&a,&b,&c,&d);
	scanf("%d%d%d%d",&e,&f,&g,&h);
	if(abs(c-e)>abs(a-g)){
		canh1 = abs(c-e);
	}
	else {
		canh1 = abs(a-g);
	}
	if(abs(d-f)>abs(b-h)){
		canh2 = abs(d-f);
	}
	else {
		canh2 = abs(b-h);
	}
	if(canh1>canh2){
		printf("%lld",canh1*canh1);
	}
	else printf("%lld",canh2*canh2);
}
