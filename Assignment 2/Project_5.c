//Task 2.5 WAP  in C to input a character and check character is in uppercase or lowercase

#include<stdio.h>

void main(){
	char ch;
	
	printf("Enter a Character : ");
	scanf("%c",&ch);
	
	if(isupper((unsigned char)ch)){
		printf("\nThe Character is Uppercase");
	}
	else if(islower((unsigned char)ch)){
		printf("\nThe Character is Lowercase");
	}
	else {
		printf("Please Enter a Character");
	}
}
