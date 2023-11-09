#include <stdio.h>

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
	int a=2,b=2,c=2023;
	do {
		scanf("%d%d%d",&a,&b,&c);
		
	}while (a<=0&&b<1&&b>12&&c<=0);
	if (ValidDate(a,b,c)==1) {
		printf("Date is Valid!");
	}
	else {
		printf("Date is not Valid!");
	}
}
	

