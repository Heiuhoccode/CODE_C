#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n-1][2];
	for(int i=0;i<n-1;i++){
		for(int j=0;j<2;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int diem;
	bool trungtam = true;
	for(int i=1;i<n-1;i++){
		if(a[0][0]==a[1][0]||a[0][0]==a[1][1]){
			diem = a[0][0];
		}
		else if(a[0][1]==a[1][0]||a[0][1]==a[1][1]){
			diem = a[0][1];
		}
		if(a[i][0]!=diem&&a[i][1]!=diem){
			trungtam=false;
		}
	}
	if(trungtam){
		printf("Yes");
	}
	else printf("No");
}
