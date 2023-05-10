#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
struct DSTS{
	char name[10000];
	char date[10000];
	float mark1,mark2,mark3;
	int stt;
};
int main(){
	int n;
	scanf("%d",&n);
	struct DSTS a[n];
	float max = 0;
	for(int i=0;i<n;i++){
		scanf("\n");
		a[i].stt = i+1;
		gets(a[i].name);
		gets(a[i].date);
		scanf("%f%f%f",&a[i].mark1,&a[i].mark2,&a[i].mark3);
	}
	bool swap;
	do{
		swap = false;
		for(int i=1;i<n;i++){
			if(a[i-1].mark1+a[i-1].mark2+a[i-1].mark3<a[i].mark1+a[i].mark2+a[i].mark3){
				struct DSTS quanco = a[i-1];
				a[i-1]=a[i];
				a[i]=quanco;
				swap = true;
			}
		}
	}while(swap);
	for(int i=0;i<n;i++){
		printf("%d %s %s %.1f\n",a[i].stt,a[i].name,a[i].date,a[i].mark1+a[i].mark2+a[i].mark3);
	}
}
