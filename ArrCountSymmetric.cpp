# include <stdio.h>
// Ðêm các sô doi xung

// so doi xung (doc tu trai sang phai, phai sang trai nhu nhau)
int isSymmetric(int num) {
    int reverse = 0;
    int temp = num;

    while (temp != 0) {
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }

    return num == reverse;
}

// Dem so doi xung
int ArrCountSymmetric(int arr[], int n) {
    int result = 0;

    for (int i = 0; i < n; i++) {
        if (isSymmetric(arr[i])) {
            result++;
        }
    }

    return result;
}

int main() {
	int n = 5, A[] = {10, 11 , 12, 13, 14};
	int v = ArrCountSymmetric(A, n);
	printf("%d",v);
}
