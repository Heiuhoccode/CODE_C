#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		double xA, yA, xB, yB, xC, yC;
		scanf("%lf%lf%lf%lf%lf%lf", &xA, &yA, &xB, &yB, &xC, &yC);
		double AB,BC,AC;
		AB = sqrt(pow((xA-xB),2)+pow((yA-yB),2));
		BC = sqrt(pow((xC-xB),2)+pow((yC-yB),2));
		AC = sqrt(pow((xA-xC),2)+pow((yA-yC),2));
		double S = sqrt((AB+BC+AC)*(AB+BC+(-1)*AC)*((-1)*AB+BC+AC)*(AB+(-1)*BC+AC))/4;
		if((AB + BC) <= AC || (AB + AC) <= BC || (BC + AC) <= AB || AB==0 || BC==0 || AC==0){
			printf("INVALID\n");
		}
		else printf("%.2lf\n",S);	
	}
}
