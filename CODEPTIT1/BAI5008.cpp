#include<stdio.h>
#include<math.h>
int main(){
	int m,n;
	int p;
	int q;
	scanf("%d%d",&n,&m);
	int a[m][n],b[p],c[q];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int maxhang = 0;
	for(int i=0;i<m;i++){
		int hang = 0;	
		for(int j=0;j<n;j++){
			hang = hang + a[i][j];
		}
		if(maxhang<=hang){
			maxhang = hang;
		}
	}
	p=0;
	for(int i=0;i<m;i++){
		int hang = 0;	
		for(int j=0;j<n;j++){
			hang = hang + a[i][j];
		}
		if(hang==maxhang){
			b[p]=i;
			p++;
		}
	}
	
//	for(int i=0;i<p;i++){
//		printf("%d ",b[i]);
//	}
	int h=0;
	for(int i=0;i<m;i++){
		if(i==b[h]){
			h++;
				continue;
			}
		else{
			for(int j=0;j<n;j++){
		
				printf("%d ",a[i][j]);
			}
		}	
		
		printf("\n");
	}	
/*	int maxcot = 0;
	for(int j=0;j<n;j++){
		int cot = 0;	
		for(int i=0;i<m-h;i++){
			cot = cot + a[i][j];
		}
		if(maxcot<=cot){
			maxcot = cot;
		}
	}
	q=0;
	for(int j=0;j<n;j++){
		int cot = 0;	
		for(int i=0;i<m-h;i++){
			cot = cot + a[i][j];
		}
		if(cot==maxcot){
			c[q]=j;
			q++;
		}
	}
	int k=0;
	for(int j=0;j<n;j++){
		for(int i=0;i<m-h;i++){
			if(j>=c[k]){
				a[i][j]=a[i][j+1];
				k++;
			}
		}
	}
	
	for(int i=0;i<m-p;i++){
		for(int j=0;j<n-q;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
*/
}
