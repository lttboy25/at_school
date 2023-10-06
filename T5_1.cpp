#include <stdio.h>
int main() {
	int sum=0, i,n;
	float average;
	
	for (i=1;i<=10;i++) {
		scanf("%d",&n);
		sum +=n;
	}
	average = sum/10;
	printf("%d\n",sum);
	printf("%f",average);
	
	return 0;
}
