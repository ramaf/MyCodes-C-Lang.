#include <stdio.h>

void main11()
{
	int b[5], i, toplam=0;
	
	
	
	
	
	for(i=0;i<5;i++)
	{
		printf("%d . sayiyi gir", i+1);
		scanf("%d", &b[i]);
		if(b[i]%2 == 1)
			toplam++;
			//toplam += b[i];
	}
	printf("Teklerin adedi = %d", toplam);
	getch();
}