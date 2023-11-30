#include <stdio.h>
#include <math.h>
int giaithua(int n) {
	int so = 1;
	for (int i = 1; i<=n; i++) {
		so *=i;
	}
	return so;
}

int main() {
	int n,x;
	float sum=1.0;
	
	printf("Nhap n: ");
	scanf("%d",&n);
	
	printf("Nhap x: ");
	scanf("%d",&x);
	
	for (int i = 1; i<=n; i++) {
		sum += pow(x,i)*(1.0/giaithua(i));
	}
	printf("Sum = %f",sum);
}
