#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	int main(){
	
	char s[100];
	
	int i , vowels =0 , consonants= 0; 
	
	printf("Enter a sentence \n");
	gets(s);
	
	for(i=0 ; s[i]!= '\0'; i++){
			
		if(s[i]=='a' || s[i]=='e' || s[i]== 'o' || s[i]=='u'){
				
			vowels++;
				
			}
		else {
				
			consonants++;
			}
		}
		
	printf("Vowels in %s = %d \n", s , vowels);
	printf("Consonants in %s = %d \n", s , consonants);
	
	return 0;
}

