#include <stdio.h>
float basariOrt(int,int);
void basariNotuYazdir(int [][5]);
void main17()
{
	int not[2][5], i, vizeTop=0, finalTop=0;
	float vizeOrt, finalOrt;
	
	for(i=0;i<5;i++)
	{
		printf("%d . ogrencinin Vize Final Notu gir:",i+1);
		scanf("%d %d", &not[0][i], &not[1][i]);
		vizeTop += not[0][i];
		finalTop += not[1][i];
	}
	vizeOrt = (float)vizeTop/5;
	finalOrt = (float)finalTop/5;
	printf("Vize Ortalamasi : %.2f\n Final Ortalamasi: %.2f\n", vizeOrt, finalOrt);
	printf("\n");
	for(i=0;i<5;i++)
	{

		printf("%d. ogrencinin gecme notu: %.2f\n", i+1,basariOrt(not[0][i],not[1][i]));
	}
	basariNotuYazdir(not);
	getch();
}

float basariOrt(int vize, int final)
{
	return (0.4*vize)+(0.6*final);
}
void basariNotuYazdir(int b[][5])
{
	int i;
	float gecmeNotu;
	for(i=0;i<5;i++)
	{
		printf("%d. ogrencinin gecme notu: %.2f\n", i+1,(0.4*b[0][i])+(0.6*b[1][i]));
	}
	printf("Dersi gecenler:\n");
	for(i=0;i<5;i++)
	{
		gecmeNotu = (0.4*b[0][i])+(0.6*b[1][i]);		
		if(gecmeNotu >= 60)
			printf("%d. ogrenci %.2f ortalama ile GECTI\n", i+1,gecmeNotu);
		else printf("%d. ogrenci %.2f ortalama ile KALDI\n", i+1,gecmeNotu);
	}
}

