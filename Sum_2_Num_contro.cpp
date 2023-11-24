#include <stdio.h>
 
// hàm tính t?ng hai s?
int* addNumbers(int* n1, int* n2, int* sum) {
  *sum = (*n1) + (*n2);
  return sum;
}
 
int main() {
 
  int number1, number2, sum;
  scanf("%d", &number1);
  scanf("%d", &number2);

  // g?i hàm v?i ba d?a ch?
  int* result = addNumbers(&number1, &number2, &sum);
  printf("%d", *result);
 
  return 0;
}
