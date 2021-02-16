#include <stdio.h>
char harfDonustur(int);
void main7()
{
	
	char sonuc;
	int a;
	printf("Not gir:");
	scanf("%d", &a);
	sonuc = harfDonustur(a);
	printf("%c", sonuc);
	getch();
}




char harfDonustur(int not)
{
	if(not<60) return 'F';
	else if(not<70) return 'D';
	else if(not<80) return 'C';
	else if(not<90) return 'B';
	else return 'A';
}