#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<ctype.h>
struct Sinhvien{
	int rank;
	char name[1000];
	float pointA,pointB,pointC;
};
int main(){
	int n;
	int function=0;
	int stt;
	struct Sinhvien a[100];
	while(function!=3){
		bool swap;
		scanf("%d",&function);
		switch(function){
			case 1:
				scanf("%d",&n);
				printf("%d\n",n);
				for(int i=0;i<n;i++){
					scanf("\n");
					a[i].rank = i+1;
					gets(a[i].name);
					scanf("%f%f%f",&a[i].pointA,&a[i].pointB,&a[i].pointC);
				}
				break;
			case 2:
				scanf("%d",&stt);
				printf("%d\n",stt);
				scanf("\n");
				gets(a[stt-1].name);
				scanf("%f%f%f",&a[stt-1].pointA,&a[stt-1].pointB,&a[stt-1].pointC);
				break;
			case 3:
				do{
					swap = false;
					for(int i=1;i<n;i++){
						if((a[i-1].pointA+a[i-1].pointB+a[i-1].pointC)>(a[i].pointA+a[i].pointB+a[i].pointC)){
							struct Sinhvien quanco = a[i-1];
							a[i-1]=a[i];
							a[i]=quanco;
							swap = true;
						}
					}	
				}while(swap);
				for(int i=0;i<n;i++){
					printf("%d %s %.1f %.1f %.1f\n",a[i].rank,a[i].name,a[i].pointA,a[i].pointB,a[i].pointC);
				}	
				break;
		}
	}
}
