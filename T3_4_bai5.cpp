#include <stdio.h>
#include <math.h>
int main() {
	int a,b,c,delta;
	double x1,x2,x;
	printf("Nhap a,b,c = ");
	scanf("%d%d%d",&a,&b,&c);
	
	delta = pow(b,2)-4*a*c;
	if (delta>0) {
		
		x1 = (double) (-b+delta)/(2*a);
		x2 = (double) (-b-delta)/(2*a);
	printf("Phuong trinh co 2 nghiem phan biet x1,x2\nx1 = %.2lf\nx2 = %.2lf",x1,x2);
	}
	
	else if (delta == 0) {
		x = (double) -b/(2*a);
		printf("Co nghiem kep = %.2lf",x);
	}
	
	else {printf("Phuong trinh vo nghiem");
	}
}
