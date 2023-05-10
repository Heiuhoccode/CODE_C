#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
	char a[53];
	gets(a);
	
	int dem1 = 0;
	for(int i='A';i<='Z';i+=1){
		int j;
		for(j=0;j<52;j++){
			if(a[j]==i){
				break;
			}
		}
		int h;
		for(h=j+1;h<52;h++){
			if(a[h]==i){
				break;
			}
		}
		int dem = 0;
		for(int k=j+1;k<=h-1;k++){
			for(int m=k+1;m<=h-1;m++){
				if(a[k]==a[m]){
					dem++;
				}
			}
		}
		dem1 += h-j-dem*2-1;
	}
	printf("%d",dem1/2);
	
}
