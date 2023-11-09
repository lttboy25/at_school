#include <stdio.h>
#include <math.h>

int giaithua(int n) {
	int tich = 1;
	for (int i=1; i<=n; i++) {
		tich*=i;
	}
	return tich;
}

void emux(double x, int n) {
	double s=0;
	for (int i = 0; i<=n; i++) {
		s += pow(x,i)/(giaithua(i));
	}
	printf("S = %lf",s);
}

int main() {
	int n;
	double x;
	
	printf("Nhap vao so nguyen n va x ");
	
	scanf("%d", &n);
	scanf("%lf",&x);
	
	emux(x,n);
	return 0;
}
