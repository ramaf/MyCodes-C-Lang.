#include <stdio.h>
int maksimumBul(int, int, int);

void main3()
{
	int s1,s2,s3, enbuyuk;
	printf("Sayilari gir:");
	scanf("%d %d %d", &s1, &s2, &s3);
	//printf("Maksimum = %d", maksimumBul(s1, s2, s3));
	enbuyuk = maksimumBul(s1, s2, s3);


	printf("Maksimum = %d", enbuyuk);
	getch();
}

int maksimumBul(int a, int b, int c)
{

	int max = a;
	if(b>max)
		max = b;

	if(c>max)
		max = c;
	return max;
}
