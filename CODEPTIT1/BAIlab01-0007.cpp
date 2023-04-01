#include<stdio.h>
#include<math.h>
float tbc (int x[], int n){
	int tong = 0;
	for(int i=0;i<n;i++){
		tong = tong + x[i];
	}
	return (float)tong/n;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("%.3f",tbc(a,n));
}
