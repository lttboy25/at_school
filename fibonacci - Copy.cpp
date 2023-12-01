#include <stdio.h>
void fibonacci(int x) {
	int f,t1,t2;
	f = 1;
	t1 = 1;
	t2 = 1;
	printf("N so hang dau tien cua day fibonacci: %d %d", t1, t2);
	for (int i = 3; i<=x; i++) {
		f = t1 + t2;
		printf(" %d",f);
		t1 = t2;
		t2 = f;
	}
}
int main() {
	int n = 5;
	fibonacci(n);
}
