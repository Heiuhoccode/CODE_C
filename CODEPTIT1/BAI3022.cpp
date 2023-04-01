#include<stdio.h>
#include<math.h>
int snt(int a){
	if(a<2){
		return 0;
	}
	else {
		for(int i=2;i<=sqrt(a);i++){
			if(a%i==0){
				return 0;
			}
		}
		return 1;
	}
}
int tongcs(int a){
	int tong = 0;
	int b;
	while(a>0){
		b=a%10;
		a/=10;
		tong += b;
	}
	return tong;
}
int main(){
	int n;
	scanf("%d",&n);
	int dem = 0;
	for(int i=1;i<=n;i++){
		if(tongcs(i)%5==0&&snt(i)==1){
			printf("%d ",i);
			dem++;
		}
	}
	printf("\n");
	printf("%d", dem);
}
