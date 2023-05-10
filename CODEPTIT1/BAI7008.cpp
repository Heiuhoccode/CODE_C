#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
struct dathuc{
	int heso;
	char bien[1000];
	int somu;
	char daucong[1000];
};
int main(){
	struct dathuc a[3];
	struct dathuc b[4];
	int i=0,j=0;
	char c,d;
	do{
		scanf("%d",&a[i].heso);
		scanf("%s",a[i].bien);
		scanf("%d",&a[i].somu);
		scanf("%s",a[i].daucong);
		i++;
		c=getchar();
	}while(c!='\n');
	do{
		scanf("%d",&b[j].heso);
		scanf("%s",b[j].bien);
		scanf("%d",&b[j].somu);
		scanf("%s",b[j].daucong);
		j++;
		d = getchar();
	}while(d!='\n');
	for(int h=0;h<i;h++){
		printf("%d %s %d %s",a[h].heso,a[h].bien,a[h].somu,a[h].daucong);
	}
}
