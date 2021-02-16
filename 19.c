#include <stdio.h>

void main()
{
	char giris[100],yeni[100], c;
	int i,sayac=0;

	printf("Bir metin gir:");
	gets(giris);
	for(i=0;giris[i]!='\0';i++)
	{
		c = giris[i];
		if(c != 'a' && c !='e' && c!='o' && c!='u' && c!='i')
		{
			yeni[sayac] = giris[i];
			sayac++;
		}			
	}
	yeni[sayac] = '\0';
	printf("%s", yeni);
	getch();
}