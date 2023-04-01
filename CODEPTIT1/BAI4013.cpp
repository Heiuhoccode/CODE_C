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
    int c=0;
	for(int i=0;i<n;i++){
		int b=0;
		for(int j=0;j<n;j++){
			if(a[j]==a[i]){
				b++;
			}
		}
		if(b==1){
			c++;
		}
	}
	printf("%d\n",c);
	for(int i=0;i<n;i++){
		int b=0;
		for(int j=0;j<n;j++){
			if(a[j]==a[i]){
				b++;
			}
		}
		if(b==1){
			printf("%d ",a[i]);
		}
	}
}
