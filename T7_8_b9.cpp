#include <stdio.h>
#include <math.h>

void S(int x1, int y1, int x2, int y2, int x3, int y3) {
	double dientich;
	dientich = (double) 1/2*abs((x2-x1)*(y3-y1)-(x3-x1)*(y2-y1));
	printf("%lf",dientich);
}

int main() {
	int x1,x2,x3,y1,y2,y3;
	printf("Nhap toa do diem thu nhat: ");
	scanf("%d%d",&x1,&y1);
	
	printf("Nhap toa do diem thu hai: ");
	scanf("%d%d",&x2,&y2);
	
	printf("Nhap toa do diem thu ba: ");
	scanf("%d%d",&x3,&y3);
	
	S(x1,y1, x2,  y2, x3,  y3);
}
