#include <stdio.h>
int main()
{
	int n,chuc,tram,donvi;
	printf("Nhap vao so co 3 chu so n = ");
	scanf("%d",&n);
	tram = n/100;
	chuc = n%100/10;
	donvi = n %100%10;
	
	if(tram>chuc&&tram>donvi)
		{
		printf("chu so lon nhat nam o hang tram (%d)",tram);
		}
	else if(chuc>tram&&chuc>donvi)
		{
		printf("chu so lon nhat nam o hang chuc (%d)",chuc);
		}
	else 
		{
		printf("chu so lon nhat nam o hang don vi (%d)",donvi);
		}
}

