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
    	if(i<=n-p-1){
    		b[i]=a[p+i];
		}
		else {
			b[i]=a[i-n+p];
		}
		printf("%d ",b[i]);
	}
}
