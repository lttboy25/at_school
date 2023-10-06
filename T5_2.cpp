#include <stdio.h>
int main() {
	int product=1, i,n;
	
	scanf("%d",&n);
	for (i=1;i<=n;i++) {
		
		product*=i;
	}
	
	printf("%d",product);
	
	return 0;
}
