#include <stdio.h>

void main16()
{
	int a[5], j;
	for(j=0;j<5;j++)
	{
		printf("Sayi gir:");
		scanf("%d", &a[j]);
	}
	printf("En buyuk sayi: %d", enBuyuk(a,5));
	getch();
}
int enBuyuk(int b[], int boyut)
{
	int i;
	int maks = b[0];
	for(i=1;i<boyut;i++)
	{
		if(b[i]>maks)
			maks = b[i];
	}
	return maks;
}