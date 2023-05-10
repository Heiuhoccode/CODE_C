#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n];
		long long b[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		
		bool soam = true;
		for(int i=0;i<n;i++){
			if(a[i]>=0){
				soam = false;
			}
		}
		
		int i=0;
		int h=0;
		
		if(soam){
			for(int i=0;i<n;i++){
				b[h]=a[i];
				h++;
			}
		}
		else{
			if(a[0]>=0){
				while(i<n){
					long long duong=0;
					while(a[i]>=0&&i<n){
						duong += a[i];
						i++;
					}
					b[h]=duong;
					h++;
					long long am=0;
					while(a[i]<0&&i<n){
						am += a[i];
						i++;
					}
					b[h]=am;
					h++;
				}		
			}
			else{
				while(i<n){
					long long am=0;
					while(a[i]<0&&i<n){
						am += a[i];
						i++;
					}
					b[h]=am;
					h++;
					long long duong=0;
					while(a[i]>=0&&i<n){
						duong += a[i];
						i++;
					}
					b[h]=duong;
					h++;
				}		
			}	
		}
		
		long long sum;
		long long max = -pow(10,9);
		for(int i=0;i<h;i++){
			sum = 0;
			for(int j=i; j<h; j++){
				sum += b[j];
				if(max<=sum){
					max=sum;
				}
			}
		}
		printf("%lld\n",max);		
	}
}
