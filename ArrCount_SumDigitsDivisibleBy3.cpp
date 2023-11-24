#include <stdio.h>
// Hàm tính tong các chu so chia het cho 3
// Tong cac chu so
int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// Dem cac so chia het cho 3
int ArrCount_SumDigitsDivisibleBy3(int A[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        int num = A[i];
        int digitSum = sumOfDigits(num);
        if (digitSum % 3 == 0) {
            count++;
        }
    }
    return count;
}	


int main() {
	int n = 100;
	int A[] = {13, 495, 385, 888, 629, 102, 505, 997, 89, 558, 414, 796, 979, 546, 380, 229, 569, 23, 680, 780, 815, 45, 594, 702, 75, 188, 27, 160, 643, 142, 616, 761, 990, 277, 411, 47, 685, 553, 947, 722, 690, 259, 91, 107, 877, 935, 811, 318, 260, 867, 553, 390, 364, 993, 342, 155, 277, 449, 191, 628, 522, 934, 31, 659, 625, 804, 766, 718, 734, 986, 512, 417, 263, 834, 486, 627, 975, 826, 39, 734, 83, 621, 610, 477, 758, 927, 865, 969, 761, 774, 180, 365, 110, 591, 655, 60, 629, 16, 103, 793};
	printf("%d",ArrCount_SumDigitsDivisibleBy3 (A, n));
}`
