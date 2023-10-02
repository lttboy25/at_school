#include <stdio.h>
int main() {
	int thang;
	scanf("%d",&thang);
	if (thang>0&&thang<13) {
	
		switch (thang) {
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
			printf("Month has 31 days");
			break;
			
			case 2:
				printf("Month has 28 days");
				break;
			
			default:
				printf("Month has 30 days");
				break;
			
		}
	}
	return 0;
}
