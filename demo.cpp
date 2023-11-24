#include <stdio.h>
int PerfectNum(int n) {
    int Sum = 0;
    for (int i = 1; i<n; i++) {
        if (n%i==0) {
            Sum +=i;
        }
    }
    if (Sum==n) {
        return 1;
    }
}
int main() {
	int n = 10;
	if (PerfectNum(n)) {
		printf("yes");
	}
	else {
		printf("No");
	}
}
