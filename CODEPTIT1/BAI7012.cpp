#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
int main(){
	int N;
	scanf("%d\n",&N);
	char ten[N][1000];
	char nhom[N][1000];
	double gia[N][2];
	for(int i=0;i<N;i++){
		gets(ten[i]);
		gets(nhom[i]);
		scanf("%f%f",&gia[i][0],&gia[i][1]);
		getchar();
	}
	double loinhuan[N];
	for(int i=0;i<N;i++){
		loinhuan[i] = gia[i][1]-gia[i][0];
	}
	int vitri[N];
	for(int i=0;i<N;i++){
		vitri[i]=i;
	}
	
	bool giamdan;
	do{
		giamdan = false;
		for(int i=1;i<N;i++){
			if(loinhuan[i-1]<loinhuan[i]){
				float quanco=loinhuan[i-1];
				loinhuan[i-1]=loinhuan[i];
				loinhuan[i]=quanco;
				
				int quanco1=vitri[i-1];
				vitri[i-1]=vitri[i];
				vitri[i]=quanco1;
				
				giamdan=true;
			}
		}
	}while(giamdan);
	
	for(int i=0;i<N;i++){
		printf("%d %s %s %.1f\n",vitri[i]+1,ten[vitri[i]],nhom[vitri[i]],loinhuan[i]);
	}
}
