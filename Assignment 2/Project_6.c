// Task 2.6 WAP in C to check that given character is vowel or consonent

#include<stdio.h>

void main(){
	char ch;
	
	printf("Enter the Character : ");
	scanf("%c",&ch);
	
	if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'||ch=='u'|| 
	ch=='A'|| ch=='E'|| ch=='O'|| ch=='U'||ch=='I'){
		printf("The Character is vowel");
	}
	else{
		printf("The Character is Consonent");
	}
}
