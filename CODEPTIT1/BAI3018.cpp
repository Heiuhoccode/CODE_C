#include<stdio.h>
#include<math.h>
int fbnc(int a){
	if(a==0){
		return 0;
	}
	else if(a==1){
		return 1;
	}
	else return fbnc(a-1)+fbnc(a-2);
}
int snt(int a){
	for(int b=2;b<=sqrt(a);b++){
		if(a%b==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int a,b,t,k,fb;
	scanf("%d%d",&a,&b);
	if(a<b){
		for(int i=a;i<=b;i++){
			if(snt(i)==1){
				k=i;
				int tong=0,c;
	           	while(k>0){
		           	c=k%10;
		         	k/=10;
		          	tong = tong + c;
	           	}	
		    	for(int j=3;j<=9;j++){
		    		fb=fbnc(j);
		    		if(fb==tong){
			        	printf("%d ",i);
		    		}
			    }
	    	}
		}
	}
	else{
		for(int i=b;i<=a;i++){
			if(snt(i)==1){
				k=i;
				int tong=0,c;
	           	while(k>0){
		           	c=k%10;
		         	k/=10;
		          	tong = tong + c;
	           	}	
		    	for(int j=3;j<=9;j++){
		    		fb=fbnc(j);
		    		if(fb==tong){
			        	printf("%d ",i);
		    		}
			    }
	    	}
		}	
	}
}
