#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
int main(){
	int N;
	scanf("%d\n",&N);
	char name[N][1000];
	char date[N][1000];
	float mark[N][3];
	for(int i=0;i<N;i++){
		gets(name[i]);
		gets(date[i]);
		scanf("%f%f%f",&mark[i][0],&mark[i][1],&mark[i][2]);
		getchar();
	}
	float diem[N];
	for(int i=0;i<N;i++){
		diem[i] = mark[i][0]+mark[i][1]+mark[i][2];
	}
	int vitri[N];
	for(int i=0;i<N;i++){
		vitri[i]=i;
	}
	
	bool giamdan;
	do{
		giamdan = false;
		for(int i=1;i<N;i++){
			if(diem[i-1]<diem[i]){
				float quanco=diem[i-1];
				diem[i-1]=diem[i];
				diem[i]=quanco;
				
				int quanco1=vitri[i-1];
				vitri[i-1]=vitri[i];
				vitri[i]=quanco1;
				
				giamdan=true;
			}
		}
	}while(giamdan);
	
	for(int i=0;i<N;i++){
		printf("%d %s %s %.1f\n",vitri[i]+1,name[vitri[i]],date[vitri[i]],diem[i]);
	}
}
