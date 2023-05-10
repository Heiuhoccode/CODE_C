#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
int main(){
	int N;
	scanf("%d\n",&N);
	char name[N][100];
	char date[N][100];
	float mark[N][3];
	for(int i=0;i<N;i++){
		gets(name[i]);
		gets(date[i]);
		scanf("%f%f%f",&mark[i][0],&mark[i][1],&mark[i][2]);
		getchar();
	}
	float check[N];
	for(int i=0;i<N;i++){
		float sum = 0;
		sum = mark[i][0]+mark[i][1]+mark[i][2];
		check[i]=sum;
	}
	int vitri[N];
	for(int i=0;i<N;i++){
		vitri[i]=i+1;
	}
	// sap xep diem
	bool giamdan;
	do{
		giamdan = false;
		for(int i=1;i<N;i++){
			if(check[i-1]<check[i]){
				int quanco=check[i-1];
				check[i-1]=check[i];
				check[i]=quanco;
				
				int quanco1=vitri[i-1];
				vitri[i-1]=vitri[i];
				vitri[i]=quanco1;
				
				giamdan=true;
			}
		}
	}while(giamdan);
//	
//	for(int i=0;i<N;i++){
//		printf("%f %d\n",check[i],vitri[i]);
//	}
	
	for(int i=0;i<N;i++){
		printf("%d %s %s %.1f\n",vitri[i],name[vitri[i]-1],date[vitri[i]-1],check[i]);
	}
}
