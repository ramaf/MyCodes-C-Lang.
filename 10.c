#include <stdio.h>





void main10()
{
	int b[5], i;
	for(i=0;i<5;i++)
	{
		printf("%d . sayiyi gir", i+1);
		scanf("%d", &b[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("Deger:%d Adres:%p\n", b[i],&b[i]);
	}
	getch();
}