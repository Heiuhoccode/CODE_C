#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
    }
    int p,h;
    int b[n];
    scanf("%d",&p);
    for(int i=0;i<n;i++){
    	if(i<p){
    		b[i]=a[n-p+i];
		}
		else {
			b[i]=a[i-p];
		}
		printf("%d ",b[i]);
    }
}
