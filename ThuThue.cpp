#include <stdio.h> 
#define pa 9000000
#define pd 3600000
int main() {
	int thumien, n, thuthue, tongthu,TNCN;
	printf("Nhap tong thu nhap: ");
	scanf("%d",&tongthu);
	printf("Nhap so nguoi phu thuoc: ");
	scanf("%d",&n);
	thumien = 12*(pa + n * pd);
	thuthue = tongthu - thumien;
	
	if (thuthue<5000000) {
		TNCN = thuthue * 0.05;
	}
	else if(thuthue<10000000) {
		TNCN = thuthue * 0.1;
	}
	else if(thuthue<18000000) {
		TNCN = thuthue * 0.15;
	}
	else {
		TNCN = thuthue * 0.2;
	}
	
	
	printf("\nThu nhap cua ban trong nam nay: %d",tongthu);
	printf("\nSo nguoi phu thuoc: %d",n);
	printf("\n---------------------------------------------------");
	printf("\nThu nhap mien thue: %d",thumien);
	if (thuthue<=0) {
		thuthue = 0;
	}
	printf("\nThu nhap tinh thue: %d",thuthue);
	printf("\nThue TNCN: %d",TNCN);
}
