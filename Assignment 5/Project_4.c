// Task 5.4 WAP in C to check given character is vowel or consonant.

#include<stdio.h>

void Check(char ch){
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
	   ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
		printf("The Character is Vowel");
	}
	else{
		printf("The Character is Consonant");
	}
}

void main(){
	char ch;
	printf("Enter the Character : ");
	scanf("%c", &ch);
	Check(ch);
}
