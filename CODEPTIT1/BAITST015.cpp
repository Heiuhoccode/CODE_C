#include<stdio.h>
#include<math.h>
#include<stdbool.h>
struct tamgiac{
	int a,b,c;
	int S;
};
int main(){
	int n;
	scanf("%d",&n);
	struct tamgiac mang[n];
	for(int i=0;i<n;i++){
		scanf("%d%d%d",&mang[i].a,&mang[i].b,&mang[i].c);
		mang[i].S = (mang[i].a+mang[i].b+mang[i].c)*(-mang[i].a+mang[i].b+mang[i].c)*(mang[i].a-mang[i].b+mang[i].c)*(mang[i].a+mang[i].b-mang[i].c);
	}
	bool swap;
	do{
		swap = false;
		for(int i=1;i<n;i++){
			if(mang[i-1].S>mang[i].S){
				struct tamgiac quanco = mang[i-1];
				mang[i-1]=mang[i];
				mang[i]=quanco;
				swap = true; 
			}
		}
	}while(swap);
	for(int i=0;i<n;i++){
		printf("%d %d %d\n",mang[i].a,mang[i].b,mang[i].c);
	}
}
