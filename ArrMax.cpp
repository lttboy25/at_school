#include <stdio.h> 
double ArrMax(double A[], int n) {
	double max = A[0];
	for (int i = 0; i<n; i++) {
		if(A[i]>max) {
			max = A[i];
		}
	}
	return max;
}

int main() {
	int n =7;
	double B[] = {-1.1, -2.3, -3.1, -4.6, -5, 2, -3};
	printf("%.2lf",ArrMax(B,n)); 
}
