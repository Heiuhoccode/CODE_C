#include<stdio.h>
#include<math.h>
int snt(int a){
	for(int j=2;j<=sqrt(a);j++){
		if(a%j==0){
			return 0;
		}
	}return 1;
}
int main(){
	int T,N;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&N);
		for(int i=3;i<=N/2;i++){
			int j=N-i;
			if(snt(i)==1&&snt(j)==1&&N==i+j){
				printf("%d %d ",i,j);
			}
		}
	printf("\n");
    }
}
