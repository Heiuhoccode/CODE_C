#include<stdio.h>
#include<math.h>
int snt(int a){
	if(a<2){
		return 0;
	}
	else{
		for(int h=2;h<=sqrt(a);h++){
			if(a%h==0){
				return 0;
			}
		}
		return 1;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n][n],b[n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		int dem = 0;
		for(int j=0;j<n;j++){
			if(snt(a[i][j])==1){
				dem++;
			}
		}
		b[i]=dem;
	}
	int max = 0;
	for(int i=0;i<n;i++){
		if(max<b[i]){
			max=b[i];
		}
	}
	for(int i=0;i<n;i++){
		int dem = 0;
		for(int j=0;j<n;j++){
			if(snt(a[i][j])==1){
				dem++;
			}
		}
		if(dem==max){
			printf("%d\n",i+1);
			for(int j=0;j<n;j++){
				if(snt(a[i][j])==1){
					printf("%d ",a[i][j]);
				}	
			}
			break;
		}
		else continue;
	}
}
