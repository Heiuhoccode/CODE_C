#include<stdio.h>
#include<math.h>





int chusosnt(int n){
	int a;
	while(n>0){
		a=n%10;
		n/=10;
		if(a!=2&&a!=3&&a!=5&&a!=7){
			return 0;
		}
	}return 1;
}




int snt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}return 1;
}
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int a,b,c=0;
		scanf("%d%d",&a,&b);
		for(int i=a;i<=b;i++){
			if(snt(i)==1&&chusosnt(i)==1){
				c++;
			}
		}printf("%d\n",c);
	}
}
