#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int snt(int a){
	for(int j=2;j<=sqrt(a);j++){
		if(a%j==0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int t;
	scanf("%d",&t);
	for(int test = 1; test<=t ; test++ ){
		int n;
		scanf("%d",&n);
		int h = n*n;
		int a[n][n];
			
		int b[h];
		int soluong=0;
	    for(long long int i=2;i<=3000;i++){
	    	bool snt =true;
			for(int j=2;j<=sqrt(i);j++){
				if(i%j==0){
					snt = false;
					break;
			    }
				else {
			    	snt = true;
				}
	    	}
			if(snt){
				b[soluong]=i;
				soluong++;
				if(soluong==h){
				break;
			}
			}
			
	   	}
		
		int k=0;
		int m = n;
		int hang=0,cot=0;
		while(k < h)
		{
			for (int j = hang ; j < n - hang ; j++)
			{
				a[hang][j] = b[k];
				k++;
			}
			for (int i =  cot +1; i < n - cot; i++)
			{
				a[i][n-1-cot] = b[k];
				k++;
			}
			for (int j = n - 1 - hang - 1 ; j >=  hang; j--)
			{
				a[n-1-hang][j] = b[k];
				k++;
			}	
			for (int i = n-1-cot - 1 ; i >=  cot +1; i--)
			{
				a[i][cot] = b[k];
				k++;
			}
			hang++;
			cot++;
		}
		printf("Test %d:\n",test);
		for (int i = 0; i < m; i++){
			for (int j = 0; j < m; j++){
				printf("%d\t", a[i][j]);
			}
			printf("\n");
		}		
		printf("\n");
	}

}
