 #include <stdio.h>
int main()
{
	int n,chuc,tram,donvi,sok;
	printf("Nhap vao so co 3 chu so n = ");
	scanf("%d",&n);
	tram = n/100;
	chuc = n%100/10;
	donvi = n %100%10;
	
	//tram min
	if(tram<chuc&&tram<donvi)
		{
			//tram<chuc<donvi
		if (chuc<donvi)
			{
				sok = tram*100+chuc*10+donvi;
				printf("so luc sau = %d",sok);
			}
			//tram<donvi<chuc
		else
			{
				sok = tram*100+donvi*10+chuc;
				printf("so luc sau = %d",sok);
			}
		
		}
		//chuc min
	else if(chuc<tram&&chuc<donvi)
			//chuc<tram<donvi
		{
		if (tram<donvi)
			{
				sok = chuc*100+tram*10+donvi;
				printf("so luc sau = %d",sok);
			}
			//chuc<donvi<tram
		else
			{
				sok = chuc*100+donvi*10+tram;
				printf("so luc sau = %d",sok);
			}
	}
		//donvi min
	else 
		{
			//donvi<chuc<tram
		if (chuc<tram)
			{
				sok = donvi*100+chuc*10+tram;
				printf("so luc sau = %d",sok);
			}
			//donvi<tram<chuc
		else
			{
				sok = donvi*100+tram*10+chuc;
				printf("so luc sau = %d",sok);
			}
		}
}
