#include <stdio.h> 
int ArrEvenMax(int a[], int n) {
	int MaxEven;
	for (int i = 0; i<n; i++) {
		if (a[i]%2==0 && a[i]>MaxEven) {
			MaxEven=a[i];
		}
	}
	return MaxEven;
}

int main() {
	int n = 7;
	int B[] = {-1, -23, -31, -46, -5, 1,-3};
	printf("%d",ArrEvenMax(B,n));
}
