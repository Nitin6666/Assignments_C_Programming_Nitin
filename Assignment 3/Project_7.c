// Task 3.7 WAP in C to check given number is palindrome or not

#include<stdio.h>

void main(){
	int num,i, first_digit,st, last_digit,original, rem, temp;
	
	printf("Enter the Number : ");
	scanf("%d",&num);
	
	st=num;
	original=num;
	
	while(st>0){
		
		rem=st%10;
		temp=rem;
		st /= 10;
		first_digit=temp;
	}
	
	last_digit = original%10;
	
	if(first_digit == last_digit){
		printf("The Number is Palindrome");
	}
	else{
		printf("The Number is Not Palindrome");
	}
	
}
