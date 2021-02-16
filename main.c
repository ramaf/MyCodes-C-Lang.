#include <stdio.h>
#include <math.h>

int main(){
	
	int b,a,c ;
	int delta;
	int x1,x2;
	
	printf("a,b ve c degerlerini giriniz:");
	scanf("%d%d%d", &a,&b,&c);
	
	delta = b*b-(4*a*c);
	
	if(delta==0){
	
		x1 = -b/2*a;
		x2 = -b/2*a;
		
		printf("Cift kat kök var x1= %d ve x2 = %d", x1 , x2);
}
	else if(delta>0){
		x1 = (-b-(sqrt(delta)))/2*a;
		x2 = (-b+(sqrt(delta)))/2*a;
		
		printf("Iki tane x1 = %d ve x2= %d koku var", x1, x2);
	}
	 
	else{
		printf("Root yok");
	}
	
		
	
	
	
}
