#include <stdio.h>
void staticDizi(void);
void otomatikDizi(void);
void main13()
{
	staticDizi();
	printf("\n");
	staticDizi();
	printf("\n");
	otomatikDizi();
	printf("\n");
	otomatikDizi();
	getch();
}







void staticDizi(void)
{
	static int a[3];
	int i;
	for(i=0;i<3;i++)
	{
		a[i] += 5;
		printf("%d   ", a[i]);
	}
}
void otomatikDizi(void)
{
	int a[3] = {1,2,3};
	int i;
	for(i=0;i<3;i++)
	{
		a[i] += 5;
		printf("%d   ", a[i]);
	}
}