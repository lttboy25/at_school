#include<stdio.h>

int main()
{
	float a,b,c;
	float m;
	
	printf("Nhap vao so Toan: ");
	scanf("%f", &a);
	printf("Nhap vao so Ly: ");
	scanf("%f", &b);
	printf("Nhap vao so Hoa: ");
	scanf("%f", &c);
	
	m = (a+b+c)/3.0;
	
	printf("So diem trung binh = %.2f",m);
	return 0;
}
