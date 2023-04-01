#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int main(){
	int a,m=0;
	scanf("%d",&a);
    for(long long int i=2;i<=pow(10,18);i++){
    	bool snt =true;
		for(int j=2;j<=sqrt(i);j++){
			if(i%j==0){
				snt = false;
				break;
		    }
			else {
		    	snt = true;
			}
    	}
		if(snt){
			printf("%lld\n",i);
			m++;
		}
		if(m==a){
			break;
		}
   	}
}


