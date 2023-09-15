#include<stdio.h>

int main()
{
	int a,b;
	float m;
	
	printf("Nhap vao so nguyen a: ");
	scanf("%d", &a);
	printf("Nhap vao so nguyen b: ");
	scanf("%d", &b);
	
	m = (a+b)/2;
	
	printf("Gia tri trung binh = %f",m);
	return 0;
}
