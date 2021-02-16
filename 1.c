#include <stdio.h>

void main1()
{
	int A,B, sayac;
	unsigned long int toplam = 0, F;
	printf("Sayilari gir:");
	scanf("%d %d",&A, &B);
	while(A<=B)
	{
		
		if(A%2 == 1)
		{
			F = 1;
			sayac = 1;
			while(sayac<=A)
			{
				F= F*sayac;
				sayac++;
			}
			toplam += F;
		}
		A++;
	}
	printf("Toplam = %u", toplam);
	getch();
}