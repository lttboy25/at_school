#include <stdio.h>
void printminmaxdigit(int n) {
	int min=10, max, i;
	
	while(n>0) {
		i = n%10;
		n= n/10;
		if (i>=max) 
			max = i;
		
		if (i<=min) 
			min = i;	
	}
	printf("Min %d",min);
	printf("\nMax %d",max);
}

int main() {
	int num;
	do {
		scanf("%d",&num);	
		
	}while(num<0);
	printminmaxdigit(num);
}

