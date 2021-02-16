#include <stdio.h>

void main14()
{
	int a[10], i;
	for(i=0;i<10;i++)
	{
		printf("%d . sayiyi gir:", i+1);



		scanf("%d", &a[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("Adres: %d Deger:%d\n", &a[i], a[i]);
	}
	getch();
}