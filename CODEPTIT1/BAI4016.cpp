#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int snt(int a){
	if(a<2){
		return 0;
	}
	else {
		for(int i=2;i<=sqrt(a);i++){
		if(a%i==0){
			return 0;
		}
	}return 1;
	}
}
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
		
		bool swap ;
		do{
			swap = false;
			for(int i=1;i<n;i++){
				if(a[i-1]>a[i]){
					int c = a[i-1];
					a[i-1]=a[i];
					a[i]=c;
					swap = true;
				}
			}		
		}while(swap);
		
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
			
			if(snt(a[i])==1){
				printf("%d xuat hien %d lan\n",a[i],solan+1);
			}
		}
		printf("\n");
	}	
}
