#include <stdio.h>
int main() {
	float cp,sp,pro=0,loss=0,lossper,proper;
	scanf("%d%d",&cp,&sp);
	if (cp>sp) {
		loss =cp-sp;
		lossper=(loss/cp)*100;
		printf("loss percentage = %f",lossper);
	}
	else if(cp<sp) {
		pro = sp-cp;
		proper = (pro/cp)*100;
		printf("profit percentage = %f",proper);
	}
		
}
