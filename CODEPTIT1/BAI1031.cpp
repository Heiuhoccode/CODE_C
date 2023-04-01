#include<stdio.h>
#include<math.h>
int snt (int a){
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0) return 0;
	}return 1;
}
int main(){
	int a;
	scanf("%d",&a);
	if(snt(a)==1){
		printf("%d",a);
	}
	else {
    	int c=a;	
		int e=1;
		for(int i=2;i<=a;i++){
			while(a%i==0){
				a=a/i;
				e=e*i; 
				printf("%d",i);
				if(c>e){
		        	printf("x");
        		}
         	}			
        }
	}
}

