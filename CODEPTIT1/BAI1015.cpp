#include<stdio.h>
#include<math.h>
int main(){
	int a, b, c, d;
	scanf("%d %d %d", &a, &b, &c);
	d = b*b - 4*a*c;
	if (d>0){ float x1 = (-b+sqrt(d))/(2*a);
		      float x2 = (-b-sqrt(d))/(2*a);
		      printf("%.2f %.2f", x1, x2);   }
		    
	else if(d==0){ float x = -b/(2*a);
	               printf("%.2f", x);   }
	             
	else{ printf("NO"); }
		
}

