#include<stdio.h>
#include<math.h>
int main(){
	int a,m,e,c;
	scanf("%d %d",&a,&m);
	if(a<m){
		for(int j=a;j<=m;j++){
	    	int b;
        	e=j;
        	int d=0;
	    	while(e>0){
	    		b = e%10;
        		e/=10;
	        	c=1;
	        	for(int i=1;i<=b;i++){
	         		c=c*i;
	        	}
	        	d+=c;
	    	}
	    	if(j==d)printf("%d ",j);
	    }
	}
	else{
		for(int j=m;j<=a;j++){
	    	int b;
        	e=j;
        	int d=0;
	    	while(e>0){
	    		b = e%10;
        		e/=10;
	        	c=1;
	        	for(int i=1;i<=b;i++){
	         		c=c*i;
	        	}
	        	d+=c;
	    	}
	    	if(j==d)printf("%d ",j);
	    }
	}
}
