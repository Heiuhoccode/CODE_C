#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int fbnc(int a){
	if(a==0){
		return 0;
	}
	else if(a==1||a==2){
		return 1;
	}
	else return fbnc(a-1)+fbnc(a-2);
}

int main(){
	int n;
	scanf("%d",&n);
	int h = n*n;
	int a[n][n];	
	int b[h];
		
   	for(int i=0;i<h;i++){
    	b[i]=fbnc(i);
	}
	
	int k=0;
	int m = n;
	int hang=0;
	while(k < h)
	{
		for (int j = hang ; j < n - hang ; j++)
		{
			a[hang][j] = b[k];
			k++;
		}
		for (int i =  hang +1 ; i < n - hang; i++)
		{
			a[i][n-1-hang] = b[k];
			k++;
		}
		for (int j = n - 1 - hang - 1 ; j >=  hang; j--)
		{
			a[n-1-hang][j] = b[k];
			k++;
		}	
		for (int i = n-2-hang ; i >=  hang +1 ; i--)
		{
			a[i][hang] = b[k];
			k++;
		}
		hang++;
	}
	
	for (int i = 0; i < m; i++){
		for (int j = 0; j < m; j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}

