#include <stdio.h>
double usAl(double, double);
void main6()
{


	double us, taban;
	printf("Taban ve us gir:");
	scanf("%lf %lf", &taban, &us);
	printf("Sonuc= %.2f", usAl(taban, us));
	
	getch();
}




double usAl(double x, double y)
{
	int sayac; 
	double sonuc = 1;
	for(sayac=0; sayac<y;sayac++)
	{
		sonuc = sonuc* x;
	}
	return sonuc;
}