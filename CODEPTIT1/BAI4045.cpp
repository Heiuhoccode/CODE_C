#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d",&t);
	char c;
	while(t--){
		c=' ';	
		int a[200],n=0;
		while(c!='\n'){
	    	scanf("%d",&a[n]);
	    	n++;
	    	c=getchar();
	    }
	    int sochan = 0, sole = 0;
	    for(int i=0;i<n;i++){
	    	if(a[i]%2==0){
	    		sochan++;
			}
			else sole++;
		}
		if((n%2==0&&sochan>sole)||(n%2!=0&&sochan<sole)){
			printf("YES\n");
		}
		else printf("NO\n");		
	}
}
