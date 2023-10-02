#include <stdio.h>
int main() {
	int so;

	scanf("%d",&so);
	
	int chuc = so/10;
	int donvi = so%10;
	
	if (so>9&&so<100) {
		switch (chuc) {
			case 1: printf("Muoi "); break;
			case 2: printf("Hai Muoi ");break;
			case 3: printf("Ba Muoi ");break;
			case 4: printf("Bon Muoi ");break;
			case 5: printf("Nam Muoi ");break;
			case 6: printf("Sau Muoi ");break;
			case 7: printf("Bay Muoi ");break;
			case 8: printf("Tam Muoi ");break;
			case 9: printf("Chin Muoi ");break;
			
		}
		
		switch (donvi) {
			case 1: printf("Mot ");break;
			case 2: printf("Hai  ");break;
			case 3: printf("Ba ");break;
			case 4: printf("Bon ");break;
			case 5: printf("Nam ");break;
			case 6: printf("Sau ");break;
			case 7: printf("Bay ");break;
			case 8: printf("Tam ");break;
			case 9: printf("Chin ");break;
		}
	}
	return 0;
}
