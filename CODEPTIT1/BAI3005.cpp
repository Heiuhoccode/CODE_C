#include<stdio.h>
#include<math.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a<b){
		for(int i=a;i<=b;i++){
			for(int j=i+1;j<=b;j++){
				int c=0;
				for(int h=b-1;h>=2;h--){
					if(i%h==0&&j%h==0){
						c++;
			    	}
				}
				if(c==0){
					printf("(%d,%d)\n",i,j);
				}
			}
    	}
	}
	else if(a>b){
		for(int i=b;i<=a;i++){
			for(int j=i+1;j<=a;j++){
				int c=0;
				for(int h=a-1;h>=2;h--){
					if(i%h==0&&j%h==0){
						c++;
			    	}
				}
				if(c==0){
					printf("(%d,%d)\n",i,j);
				}
			}
    	}
	}
	else return 0;
}
