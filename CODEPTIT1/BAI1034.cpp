#include<stdio.h>
#include<math.h>
int main(){
	int a,b;
	scanf("%d %d", &a,&b);
	int c = sqrt(a);
	int d = sqrt(b);
	   if(c*c!=a){
	   	printf("%d\n", d-c);
        for(int i=c+1;i<=d;i++){
			printf("%d\n", i*i);
		}
	}else {
		printf("%d\n", d-c+1);
		for(int i=c;i<=d;i++){
			printf("%d\n",i*i);
		}
	}
	}

