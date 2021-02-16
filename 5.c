#include <stdio.h>
int topla(int, int);
int cikar(int, int);
int carp(int, int);
float bol(int, int);

int main5()
{
		int secim, s1,s2;
	while(1)
	{
		printf("\n1-Topla\n2-Cikar\n3-Carp\n4-Bol\n5-Cikis\n");
		scanf("%d", &secim);
		printf("Sayilari gir:");
		scanf("%d %d", &s1, &s2);
		switch(secim)
		{
			case 1: printf("Sonuc = %d", topla(s1, s2)); break;
			case 2: printf("Sonuc = %d", cikar(s1, s2)); break;
			case 3: printf("Sonuc = %d", carp(s1, s2)); break;
			case 4: printf("Sonuc = %.2f", bol(s1, s2)); break;
			case 5: exit(0);break;
		}
	}
	getch();
}

int topla (int a, int b)
{
	return a+b;
}

int cikar(int a, int b)
{
	return a-b;
}

int carp (int a, int b)
{
	return a*b;
}

float bol(int a, int b)
{
	return (float)a/b;
}
