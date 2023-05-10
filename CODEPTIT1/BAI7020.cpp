#include<stdio.h>
#include<math.h>
int main(){
	int N;
	scanf("%d\n",&N);
	char t[N][100];
	int rok[N][2];
	for(int i=0;i<N;i++){
		gets(t[i]);
		scanf("%d%d",&rok[i][0],&rok[i][1]);
		getchar();
	}
	int count=0;
	
	int check[N];
	for(int i=0;i<N;i++){
		int count1=0;
		while(rok[i][1]-rok[i][0]>=0){
			rok[i][1] -= rok[i][0];
			rok[i][1] += 2;
			count++;
			count1++;
		}
		check[i]=count1;
	}
	int max = 0;
	int vitri;
	for(int i=N-1;i>=0;i--){
		if(max<=check[i]){
			max=check[i];
			vitri=i;
		}
	}
	printf("%d\n%s",count,t[vitri]);
}
