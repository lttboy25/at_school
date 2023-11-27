#include <stdio.h>
int main() {
	int  n;
	float p,r;
	printf("Nhap p,n,r: ");
	scanf("%f %f %d",&r, &p, &n);
	
	printf("\nLai suat: %.2f%", r);
	printf("\nVon ban dau: %.0f", p);
	printf("\nThoi han: %d nam",n);
	printf("\nNam\tVon");
	
	for (int i = 1; i<=n; i++) {
		p+=p*(r/100);
		printf("\n%d\t%.1f",i,p);
	}
}
