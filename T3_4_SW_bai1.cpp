#include <stdio.h>
int main() {
	char kytu;
	scanf("%c",&kytu);
	
	switch (kytu) {
		case 'E':
			printf("Excellent");
			break;
			
		case 'V':
			printf("Very Good");
			break;
			
		case 'G':
			printf("Good");
			break;	
		
		case 'A':
			printf("Average");
			break;	
			
		case 'F':
			printf("Fail");
			break;	
	}
	
	return 0;
}
