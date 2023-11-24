#include <stdio.h>
int findFib(int n) {

	
	int f0 = 0;
    int f1 = 1;
    int fn = 1;
    
 
    if (n < 0) {
        return -1;
    } else if (n == 0 || n == 1) {
        return n;
    } else {
        for (int i = 2; i < n; i++) {
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
        }
    }
    return fn;
}
	


void checkdate(int day,int month, int year ) {
	
	
	if (year>0) {
		switch (month) {
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12: {
				if (day>0&&day<=31) {
					printf("Day, month, year is valid!\n");
				}
				else {printf("Day, month, year is not valid!\n");
				}
				break;
			}
			case 4:
			case 6:
			case 9:
			case 11:{
				if (day>0&&day<=30) {
					printf("Day, month, year is valid!\n");
				}
				else {printf("Day, month, year is not valid!\n");
				}
				break;
			}
			
			case 2: {
				if (year%4==0&&year%100!=0||year%400) {
					if (day>0&&day<=29) {
						printf("Day, month, year is valid!\n");
					}
					else {printf("Day, month, year is not valid!\n");
					}
				}
				else {
					if (day>0&&day<=28) {
						printf("Day, month, year is valid!\n");
					}
					else {printf("Day, month, year is not valid!\n");
					}
				break;
				}
			}
			default:
				printf("Day, month, year is not valid!\n");
				break;
		}
	}
}

int main() {
	int choice;
	do {
		printf("1- Fibonacci sequence.\n");
		printf("2- Check a date.\n");
		printf("3- Quit.\n");
		printf("Choice an peration: ");
		scanf("%d", &choice);
		switch (choice) {
			case 1: {
				int n;
				do {
					printf("Input interger n: ");
					scanf("%d",&n);
				}while (n<=0);
				for (int i = 0; i < n; i++) {
			        printf("%d ", findFib(i));
			    }
			    printf("\n");
				break;
			}
			
			case 2: {
				int day,month,year;
				printf("Input day, month, year: ");
				scanf("%d%d%d", &day, &month, &year);
				checkdate(day,month,year);
				break;
			}
			default:
				printf("Your programming is end!");
		}
		
	}while(choice==1||choice==2);
	
	
	return 0;
}




















