#include<stdio.h>
#include<math.h>
int main(){
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	if(a<b){
		for (int i=a;i<=b;i++){
		int m=0;
		for(int c=1;c<=i/2;c++){
			if(i%c==0){
				m=m+c;
			}
		}
		if(m==i){
			printf("%d ",m);
		}
	}
	}
	else {
		for (int i=b;i<=a;i++){
		int m=0;
		for(int c=1;c<=i/2;c++){
			if(i%c==0){
				m=m+c;
			}
		}
		if(m==i){
			printf("%d ",m);
		}
	}
	}
	
}
