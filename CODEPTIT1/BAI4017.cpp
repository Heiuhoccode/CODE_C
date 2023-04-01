#include<stdio.h>
#include<math.h>
int snt(int x ,int n){
	if(x<2) return 0;
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0){
			return 0;
		}
	}return 1;
}
int main (){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int b=0;
	for(int j=0;j<n;j++){
		if(snt(a[j],n)==1){
			b++;
		}
    }
    printf("%d ",b);
	for(int j=0;j<n;j++){
		if(snt(a[j],n)==1){
			printf("%d ",a[j]);
		}
    }
}
