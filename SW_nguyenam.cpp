#include <stdio.h>
#include <ctype.h>
int main() {
	char kt;
	scanf("%c",&kt);

	kt = toupper(kt);
	if (kt>='A'&&kt<='Z') {
		switch (kt) {
			case 'U':
			case 'E':
			case 'O':
			case 'A':
			case 'I':
				printf("Nguyen am");
				break;
			
			default:
				printf("Phu am");
		}
	}
	else { printf("ko phai thu ky tu");
	}
	return 0;
}
