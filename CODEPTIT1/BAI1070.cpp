#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int main(){
	int a[6],b[4];
	for(int i=0;i<6;i++){
		scanf("%d",&a[i]);
	}
	int max = 0;
	int h;
	for(int i=0;i<6;i++){
		if(max<a[i]){
			max = a[i];
			h=i;
		}
	}
	int k=0;
	for(int i=0;i<6;i++){
		if(h%2==0&&i!=h&&i!=h+1){
			b[k]=a[i];
			k++;
		}
		else if(h%2!=0&&i!=h&&i!=h-1){
			b[k]=a[i];
			k++;
		}
	}
	bool hinhvuong = true;
	for(int i=0;i<4;i++){
		if(h%2==0){
			if(max==b[0]+b[2]&&b[1]==b[3]&&a[h+1]+b[1]==max||max==b[0]+b[3]&&b[1]==b[2]&&a[h+1]+b[1]==max||max==b[1]+b[2]&&b[0]==b[3]&&a[h+1]+b[0]==max||max==b[1]+b[3]&&b[0]==b[2]&&a[h+1]+b[0]==max){
				hinhvuong = true;
			}
			else hinhvuong = false;
		}
		else{
			if(max==b[0]+b[2]&&b[1]==b[3]&&a[h-1]+b[1]==max||max==b[0]+b[3]&&b[1]==b[2]&&a[h-1]+b[1]==max||max==b[1]+b[2]&&b[0]==b[3]&&a[h-1]+b[0]==max||max==b[1]+b[3]&&b[0]==b[2]&&a[h-1]+b[0]==max){
				hinhvuong = true;
			}
			else hinhvuong = false;
		}
	}
	if(hinhvuong){
		printf("YES");
	}
	else printf("NO");
}
