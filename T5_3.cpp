#include <stdio.h>
int main() {
	int n,i=1,result;
	scanf("%d",&n);
	while (i<=10) {
		result = n*i;
		printf("%d X %d = %d\n",n,i,result);
		i++;
	}
	
	return 0;
}
