#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[200][200];
	int k = 1;
	int i,j;
	int m = n;
	int hang=0,cot=0;
	while(k <= m * m)
	{
		for (j =hang ; j < n - hang ; j++)
		{
			a[hang][j] = k;
			k++;
		}
		for (i =  cot +1; i < n - cot; i++)
		{
			a[i][n-1-cot] = k;
			k++;
		}
		for (j = n - 1 - hang - 1 ; j >=  hang; j--)
		{
			a[n-1-hang][j] = k;
			k++;
		}	
		for (i = n-1-cot - 1 ; i >=  cot +1; i--)
		{
			a[i][cot] = k;
			k++;
		}
		hang++;
		cot++;
	}
	for (int t = 0; t < m; t++)
	{
		for (int v = 0; v < m; v++)
		{
			printf("%d\t", a[t][v]);
		}
		printf("\n");
	}
}
