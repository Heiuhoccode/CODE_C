#include<stdio.h>
#include<stdbool.h>
int main(){
	int n,m,k;
	scanf("%d%d%d",&n,&m,&k);
	int a[n];
	int vt[m];
	for(int i=0;i<m;i++){
		scanf("%d",&vt[i]);
	}
	for(int i=0;i<n;i++){
		a[i]=0;
	}
	for(int j=0;j<m;j++){
		for(int i=0;i<n;i++){
			if(i+1>=vt[j]&&i+1<=vt[j]+k||i+1<=vt[j]&&i+1>=vt[j]-k){
				a[i]=1;
			}
		}
	}
	int dem = 0;
	int lapthem = 0;
	for(int i=0;i<n;i++){
		if(a[i]==0){
			dem++;
		}
		else {
			if(dem>0){
				if(dem%(2*k+1)==0){
					lapthem = lapthem + (int)(dem/(2*k+1));
				}
				else{
					lapthem = lapthem + (int)(dem/(2*k+1)) + 1;
				}
			}
			dem = 0;
		}
	}
	if(dem>0){
		if(dem%(2*k+1)==0){
			lapthem = lapthem + (int)(dem/(2*k+1));
		}
		else{
			lapthem = lapthem + (int)(dem/(2*k+1)) + 1;
		}
	}
	printf("%d",lapthem);
}
