#include<stdio.h>
#include<math.h>

int snt(int i){
	for(int h=2;h*h<=i;h++){
		if(i%h==0){
			return 0;
		}
		
	}return i>=2;
}

int main(){
	int n,a,b,d,stn;
	int xd=0;
	scanf("%d",&n);
	while(n--){
		int c;int xd1=xd;
		scanf("%d %d",&a,&b);
		for(int i=a;i<=b;i++){
			d=i;
			int h=i;
			stn = 0;
			int k=0;
			int g;
			while(d>0){
				c=d%10;
				d/=10;
				int m=0;
				int e;
				while(h>0){
					h/=10;
					e=pow(10,m);
					m++;
				}
				g = e/pow(10,k);
				k++;
				stn = stn + g*c;
			}
			
			if(snt(i)==1&&stn==i){
				
				if((xd1!=0)&&(xd1)%10==0){
			    	printf("\n");
		    	}
		    	xd1++;
				printf("%d ",stn);
			}
		}
		printf("\n");
		printf("\n");
		
	}
}
