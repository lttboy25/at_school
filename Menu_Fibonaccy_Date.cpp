#include <stdio.h> 
void fibonacci(int n) {
	int f0,f1=1,f2=1;
	printf ("%d %d ", f1, f2);
	for (int i = 3; i<=n; i++) {
		f0=f1+f2;
		f1 = f2;
		f2 = f0;
		printf ("%d ", f2);
	}
}

int ValidDate (int a,int b, int c) {
	if (b==2) {
		if (c%400==0||(c%4==0&&c%100!=0)) {
			if (a<=29) {
				return 1;
			}
			else {
				return 0;
			}
		}
		else {
			if (a<=28) {
				return 1;
			}
			else {
				return 0;
			}
		}
	}
	 
	switch (b) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if (a<=31) {
				return 1;
			}
			else {
				return 0;
			}
			break;
		default:
			if (a<=31) {
				return 1;
			}
			else {
				return 0;
			}
	}
}

int main() {
	int choose=0, n, a,b,c;
	do {
		printf("------Menu------");
		printf("\n1. In ra day so finaccy cua n.");
		printf("\n2. Kiem tra ngay thang nam co hop le.");
		printf("\nVui long chon: ");
		scanf("%d",&choose);
		switch(choose) {
			case 1: {
				do {
					printf("Nhap n>0: ");
					scanf("%d",&n);
				}while(n<=0);
				fibonacci(n);
				printf("\n");
				break;
			}
			
			case 2: {
				do {
					printf("Nhap days, month, year: ");
					scanf("%d%d%d",&a,&b,&c);
				}while (a<=0&&b<1&&b>12&&c<=0);
				
				if (ValidDate(a,b,c)==1) {
					printf("Date is Valid!");
				}
				else {
					printf("Date is not Valid!");
				}
				printf("\n");
				break;
			}
			case 0:
				printf("Chuong trinh ket thuc!");
		}
	}while(choose!=0);
	
	return 0;
}
