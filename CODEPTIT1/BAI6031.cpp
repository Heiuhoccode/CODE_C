#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	char a[51];
	scanf("%s",a);
	int max = 0;
	for(int i=1;i<strlen(a);i++){
		int k=0;
		while(a[i-1]<a[i]){
			k++;
			i++;
		}
		int m=a[i];
		for(int j=i+1;j<strlen(a);j++){
			if(a[j]>m){
				m=a[j];
				k++;
			}
		}
		if(k>=max){
			max=k;
		}
	}
	printf("%d",26-1-max);
}
