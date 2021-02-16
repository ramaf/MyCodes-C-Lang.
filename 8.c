#include <stdio.h>
void bankaMatik(int);
void main8()
{	
	int p;
	printf("Tutar giriniz:");
	scanf("%d", &p);
	bankaMatik(p);
	getch();
}

void bankaMatik(int para)
{
	int yirmilik, onluk, beslik,miktar;
	miktar = para;
	if(para%5==0)
	{
		yirmilik = para/20;
		para = para - yirmilik*20;
		onluk = para/10;
		para = para- onluk*10;
		beslik = para/5;

		printf("Cekilen tutar: %d\n", miktar);
		printf("20 lik : %d adet\n", yirmilik);
		printf("10 luk : %d adet\n", onluk);
		printf("5 lik : %d adet\n", beslik);
	}
	else printf("Lutfen 5 TL ve katları girin");
}