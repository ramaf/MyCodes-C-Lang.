#include <stdio.h>
int kareAl(int);
void main4()
{
	int sayac=1;
	while(sayac<=100)
	{
		if(sayac%2==0)
			printf("%d  ", kareAl(sayac));
		sayac++;
	}
	getch();
}

int kareAl(int a)
{
	return a*a;
}