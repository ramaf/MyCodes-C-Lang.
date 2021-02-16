#include <stdio.h>
void modifyArray(int [], int);
void modifyElement(int);
void main15()
{
	int i;
	int a[] = {5,10,15};
	modifyArray(a, 3);
	
	
	
	for(i=0;i<3;i++)
		printf("%d  ", a[i]);
	printf("\n");
	modifyElement(a[1]);
	printf("%d", a[1]);
	getch();
}





void modifyArray(int b[], int boyut)
{
	int i;
	for(i=0;i<boyut;i++)
		b[i] *= 2;
}
void modifyElement(int x)
{
	x*=2;
	printf("%d\n", x);
}