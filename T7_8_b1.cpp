#include <stdio.h>
int tinhgiaithua(int n) {
	int giaithua = 1;
	for (int i = 1;i<=n; i++) {
		giaithua*=i;
	}
	return giaithua;	
}
int main() {
	int n;
	do {
		printf("Nhap n = ");
		scanf("%d",&n);
	}while(n<0);
	printf("giai thua %d la: %d",n,tinhgiaithua(n));
	
	return 0;
}
