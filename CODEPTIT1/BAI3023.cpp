#include<stdio.h>
#include<math.h>
int stn(int a){
	int b;
	int c=a;
	int s=0;
	int d=a;
	while(c>10){
		c/=10;
		s++;
    }
	int sotn=0,dem=0;
	while(d>0){
		b=d%10;
		d/=10;
		sotn=sotn+b*pow(10,s);
		s--;
		if(b==9){
			dem++;
		}
	}
	if(dem<1&&sotn==a){
		return 1;
	}
	return 0 ;
}

int main(){
	int a;
	int dem = 0;
	scanf("%d",&a);
		for(int i=2;i<=a;i++){
			if(stn(i)==1){
				printf("%d ",i);
				dem++;
			}
		}
	printf("\n");
	printf("%d",dem);
}
