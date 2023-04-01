#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int N;
		scanf("%d",&N);
		int a[N];
		bool sdd;
		for(int i=0;i<N;i++){
			scanf("%d",&a[i]);
		}
		for(int i=0;i<N;i++){
			sdd = true;
			for(int j=i+1;j<N;j++){
				if(a[i]<=a[j]){
					sdd= false;
				}
			}
			if(sdd){
				printf("%d ",a[i]);
			}
		}
		printf("\n");
	}
}
