#include <stdio.h> 
int ArrFindK(int B[],int n,int k) {
	for (int i = 0; i<n; i++) {
		if (B[i]==k) {
			return i;
		}
	}
	return -1;
}

int main() {
	int n = 8, k = 9;
	int B[] = {-1, -23, 9, -46, -5, 2, -3};
	printf("%d", ArrFindK(B,n,k));
}
