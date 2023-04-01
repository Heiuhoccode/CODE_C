#include<stdio.h>
#include<math.h>
int stn(int a){
	int b;
	int c=a;
	int s=0;
	int d=a;
	while(a>10){
		a/=10;
		s++;
    }
	int sotn=0,dem=0;
	while(d>0){
		b=d%10;
		d/=10;
		sotn=sotn+b*pow(10,s);
		s--;
		if(b==6){
			dem++;
		}
	}
	if(dem>0&&sotn==c){
		return 1;
	}
	return 0 ;
}
int tongcs(int a){
	int b,scc;
	int tong = 0;
	while(a>0){
		b=a%10;
		a/=10;
		tong = tong + b;
	}
	scc = tong%10;
	if(scc==8){
		return 1;
	}
	return 0;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a<b){
		for(int i=a;i<=b;i++){
			if(stn(i)==1&&tongcs(i)==1){
				printf("%d ",i);
			}
		}
	}
	else{
		for(int i=b;i<=a;i++){
			if(stn(i)==1&&tongcs(i)==1){
				printf("%d ",i);	
			}
		}		
	}
}
