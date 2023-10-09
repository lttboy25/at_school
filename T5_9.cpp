#include <stdio.h>
#include <ctype.h>
int main() {
	char kt=0;
	int demchuso=0,demchucai=0,demphimkhac=0;
	
	do {
		
		if (kt!=10) {
			scanf("%c",&kt);
			
			if (kt>='0'&&kt<='9') {
				demchuso++;
			}
			
			else if ((kt>='a'&&kt<='z')||(kt>='A'&&kt<='Z')) {
				demchucai++;
			}
			else {
				demphimkhac++;
			}
		}
	
	}while(kt!=10);
	demphimkhac -=1;
	printf("dem chu so = %d\ndem chu cai = %d\ndem phim khac = %d",demchuso,demchucai,demphimkhac);
	
	return 0;
}
