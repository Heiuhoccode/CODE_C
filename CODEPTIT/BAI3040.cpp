#include<stdio.h>
#include<math.h>
int main(){
	int a;
	scanf("%d",&a);
    int tongnt=0;
	int tongcs=0,b;
	int d=a;		    
    for(int i=2;i<=d;i++){
    	while(d%i==0){
			d=d/i;
		    int h;
		    int j=i;
		    while(j>0){
				h=j%10;
				j=j/10;
				tongnt=tongnt+h;
			}
		}	
    }	
	int c=a;
	while(c>0){
		b=c%10;
		c/=10;
		tongcs=tongcs+b;
	}
	if(tongcs==tongnt){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
}

