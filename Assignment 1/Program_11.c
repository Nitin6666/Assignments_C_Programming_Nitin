// Task 1.11 WAP in C to print ASCII value of given character.

#include<stdio.h>

void main(){
	int num1,num2;
	
	printf("\nEnter First Number : ");
	scanf("%d",&num1);
	
	printf("\nEnter Second Number : ");
	scanf("%d",&num2);
	
	printf("\nBefore Swap => First number %d :",num1);
	printf("Second Number %d ",num2);
	
	num1,num2 = num2,num1;
	
	printf("\nAfter Swap => First number %d : ",num1);
	printf("Second Number %d",num2);
	
}
