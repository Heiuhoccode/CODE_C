#include<stdio.h>
#include<math.h>
int snt(int a){
	if(a<2){
		return 0;
	}
	else{
		for(int i=2;i<=sqrt(a);i++){
			if(a%i==0){
				return 0;
			}
		}
		return 1;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int dem = 0,b;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			b=a[i][j];
			if(j>=i&&snt(b)==1){
				dem = dem + b;
			}
		}
	}
	printf("%d",dem);
}
