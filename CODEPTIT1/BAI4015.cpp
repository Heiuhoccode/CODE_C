#include<stdio.h>
#include<math.h>
int main(){
	int T;
	scanf("%d",&T);
	for(int k=1;k<=T;k++){
		int n,b,solan;
		scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		printf("Test %d:\n",k);
		for(int i=0;i<n;i++){
			solan = 0;
			for(int j=i+1;j<n;){
				if(a[i]==a[j]){
					solan++;
					for(int h=j;h<n;h++){
						if(h==n-1){
							a[h]=a[h];
						}
						else{
							a[h]=a[h+1];
						}
					}
					n--;
				}
				else{
					j++;
				}
			}
			printf("%d xuat hien %d lan\n",a[i],solan+1);
		}
		printf("\n");
	}	
}
