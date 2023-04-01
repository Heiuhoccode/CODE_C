#include<stdio.h>
#include<stdbool.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n],b[m];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;){
			if(a[i]==a[j]){
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
	}	
	for(int i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	for(int i=0;i<m;i++){
		for(int j=i+1;j<m;){
			if(b[i]==b[j]){
				for(int h=j;h<m;h++){
					if(h==m-1){
						b[h]=b[h];
					}
					else{
						b[h]=b[h+1];
					}
				}
				m--;
			}
			else{
				j++;
			}
		}
		
	}
	bool swapA ;
	do{
		swapA = false;
		for(int i=1;i<n;i++){
			if(a[i-1]>a[i]){
				int c = a[i-1];
				a[i-1]=a[i];
				a[i]=c;
				swapA = true;
			}
		}		
	}while(swapA);
	bool swapB ;
	do{
		swapB = false;
		for(int i=1;i<m;i++){
			if(b[i-1]>b[i]){
				int c = b[i-1];
				b[i-1]=b[i];
				b[i]=c;
				swapB = true;
			}
		}		
	}while(swapB);
	for(int i=0;i<n;i++){
		int dem = 0;
		for(int j=0;j<m;j++){
			if(a[i]==b[j]){
				dem++;
			}
		}
		if(dem > 0){
			printf("%d ",a[i]);
		}
	}
	printf("\n");
	for(int i=0;i<n;i++){
		bool khac = true;
		for(int j=0;j<m;j++){
			if(a[i]==b[j]){
				khac = false;
			}
		}
		if(khac){
			printf("%d ",a[i]);
		}
	}
	printf("\n");
	for(int i=0;i<m;i++){
		bool khac = true;
		for(int j=0;j<n;j++){
			if(a[j]==b[i]){
				khac = false;
			}
		}
		if(khac){
			printf("%d ",b[i]);
		}
	}	
}
