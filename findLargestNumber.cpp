#include <stdio.h>

int getLargestNumber(int a,int b,int c) {
  int largest=0;
  if(a>=largest) {
    largest = a;
    if (b>=largest) {
      largest = b;
      if (c>=largest) {
        largest = c;
      }
    }
  }
  return largest;
}
 
int main() {
  int n1, n2, n3;
  scanf("%d %d %d", &n1, &n2, &n3);
  int largestNumber = getLargestNumber(n1,n2,n3);
  printf("%d\n", largestNumber);
  
  return 0;
}
