#include <stdio.h>
int main() {
	int n=5,sum=0,x=0,i=1;
	while(i<=n) {
		
		x= x*10+9;
		
		sum+=x;
		i++;
	}

	printf("%d\n",sum);
	return 0;
}
