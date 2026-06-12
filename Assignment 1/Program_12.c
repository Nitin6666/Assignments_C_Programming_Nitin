// task 1.12 WAP in C to swap the value of two varaible without help of third variable

#include<stdio.h>

void main(){
	int num1,num2;
	
	printf("\nEnter First Number : ");
	scanf("%d",&num1);// if user enter 20
	
	printf("\nEnter Second Number : ");
	scanf("%d",&num2);// if user enter 30
	
	printf("\nBefore Swap => First number %d :",num1);
	printf("Second Number %d ",num2);
	
	num1 = num1 + num2;  // Stores the addition of two numbers means 50 stores in num1
	num2 = num1 - num2;  //num2 stores substraction of num1-num2 means there is calculation occurs 50-30 = 20
	num1 = num1 - num2;  // it stores swapped value of num2 there is calculation occurs 50-20 = 30
	
	printf("\nAfter Swap => First number %d : ",num1); // it prints 30 if user enters20
	printf("Second Number %d",num2);// It prints 20 if user enters 30
}
