#include <stdio.h>
int main() {
	float cp,sp,pro=0,loss=0,lossper,proper;
	scanf("%d%d",&cp,&sp);
	if (cp>sp) {
		loss =cp-sp;
		lossper=(loss/cp)*100;
	}
	else if(cp<sp);{
		pro = sp-cp;
		proper = (pro/cp)*100;
	}
		
}
