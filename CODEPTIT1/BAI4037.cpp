#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int dem = 0;
	int solan;
	bool giong = true;;
	for(int i=0;i<n;i++){
		solan = 0;
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				solan++;
			}
		}
		for(int h=0;h<i;h++){
			if(a[i]==a[h]){
				giong = false;
			}
		}
		if(solan>0&&giong){
			dem++;
		}
    }
    printf("%d\n",dem);
	bool khac = true;
	for(int i=0;i<n;i++){
		solan = 0;
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				solan++;
			}
		}
		for(int h=0;h<i;h++){
			if(a[i]==a[h]){
				khac = false;
			}
		}
		if(solan>0&&khac){
			printf("%d ",a[i]);
		}
    }
}
