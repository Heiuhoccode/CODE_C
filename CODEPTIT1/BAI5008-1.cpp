#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int h=1;h<=t;h++){
		int m,n;
		scanf("%d%d",&n,&m);
		int a[m][n],b[m],c[n];
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
			b[i]=hang;
			hang = 0;
		}
		
		int maxcot = 0;
		for(int j=0;j<n;j++){
			int cot = 0;	
			for(int i=0;i<m;i++){
				if(b[i]==maxhang){
					continue;
				}
				cot = cot + a[i][j];
			}
			if(maxcot<=cot){
				maxcot = cot;
			}
			c[j]=cot;
			cot = 0;
		}
		printf("Test %d:\n\n",h);
		for(int i=0;i<m;i++){
			if(b[i]==maxhang){
				continue;
			}
			for(int j=0;j<n;j++){
				if(c[j]==maxcot){
					continue;
				}
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
}
