#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
struct MH{
	char name[10000];
	char type[10000];
	float buy, sell;
	int stt;
};
int main(){
	int n;
	scanf("%d",&n);
	struct MH a[n];
	for(int i=0;i<n;i++){
		scanf("\n");
		a[i].stt = i+1;
		gets(a[i].name);
		gets(a[i].type);
		scanf("%f%f",&a[i].buy,&a[i].sell);
		
	}
	bool swap;
	do{
		swap = false;
		for(int i=1;i<n;i++){
			if((a[i-1].sell - a[i-1].buy)<(a[i].sell - a[i].buy)){
				struct MH quanco = a[i-1];
				a[i-1] = a[i];
				a[i] = quanco;
				swap = true;
			}
		}
	}while(swap);
	for(int i=0;i<n;i++){
		printf("%d %s %s %.2f\n",a[i].stt,a[i].name,a[i].type,a[i].sell-a[i].buy);
	}
}
