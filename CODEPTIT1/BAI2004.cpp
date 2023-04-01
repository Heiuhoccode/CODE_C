#include<stdio.h>
#include<math.h>
int main(){
    int a;
    scanf("%d",&a);
    int m=a;
	while(a--){
	    for(int k=0;k<=a-1;k++){
        	printf("~");
       	    }
       	if (a<m-1&&a>=1){
		    for(int i=1;i<=m;i++){
       		if(i==1||i==m){
       				printf("*");
			}
			   else printf(".");
		    }  
		}
		else{
			for (int j=1;j<=m;j++){
				printf("*");
			}
		}    
       	printf("\n");
	}
}

        

