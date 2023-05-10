#include<stdio.h>
#include<math.h>
int bcnn(int a,int b){
	int c;
	for(int i=1;i<=b;i++){
		if((a*i)%b==0){
			c=a*i;
			break;
		}
	}
	
	return c;
}
int ucln(int a,int b){
	int c;
	for(int i=a;i>=1;i--){
		if(a%i==0&&b%i==0){
			c = i;
			break;
		}
	}
	return c;
}
int main(){
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		int m,n,p,q;
		scanf("%d%d%d%d",&m,&n,&p,&q);
		int a=m/ucln(m,n);
		int b=n/ucln(m,n);
		int c=p/ucln(p,q);
		int d=q/ucln(p,q);
		
		int mau = bcnn(b,d);
		int tu1 = a*(mau/b);
		int tu2 = c*(mau/d);
		int tutong = tu1+tu2;
		int mautong = mau;
		int rutgon = ucln(tu1,tu2);
		int tuthuong = tu1/rutgon;
		int mauthuong = tu2/rutgon;
		printf("Case #%d:\n",i);
		
		printf("%d/%d %d/%d\n",tu1,mau,tu2,mau);
	
		printf("%d/%d\n",tutong,mautong);	
	
		printf("%d/%d\n",tuthuong,mauthuong);
	}
	return 0;
}
