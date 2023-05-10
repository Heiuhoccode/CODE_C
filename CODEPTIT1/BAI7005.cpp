#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		float xA, yA, xB, yB, xC, yC;
		scanf("%f%f%f%f%f%f", &xA, &yA, &xB, &yB, &xC, &yC);
		double AB,BC,AC;
		AB = sqrt(pow((xA-xB),2)+pow((yA-yB),2));
		BC = sqrt(pow((xC-xB),2)+pow((yC-yB),2));
		AC = sqrt(pow((xA-xC),2)+pow((yA-yC),2));
		if((AB + BC) <= AC || (AB + AC) <= BC || (BC + AC) <= AB || AB==0 || BC==0 || AC==0){
			printf("INVALID\n");
		}
		else printf("%.3lf\n",AB+BC+AC);	
	}
	
}
