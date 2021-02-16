#include <stdio.h>


void main18()
{
	char dizi[40], c;
	int i=0, sesli=0, sessiz=0,bosluk=0;

	
	printf("Bir metin gir:");
	gets(dizi);
	for(i=0;dizi[i]!='\0';i++)
	{
		c = dizi[i];
		if(c == 'a'|| c=='e' || c=='o' || c=='u' || c=='i')
			sesli++;
		else if(c==' ')
			bosluk++;
		else sessiz++;
	}
	printf("%d adet sesli harf vardi\n %d adet sessiz harf vardir\n%d adet bosluk",sesli,sessiz,bosluk);
	getch();
	/*while((c = getchar())!='\n')
	{
		dizi[i] = c;
		i++;
	}
	dizi[i] = '\0';*/
}