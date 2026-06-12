// Task 1.10 WAP in C to swap the value of two variable with the help of third variable 

#include<stdio.h>

void main(){
	int num1,num2,temp;
	
	printf("\nEnter First Number : ");
	scanf("%d",&num1);
	
	printf("\nEnter Second Number : ");
	scanf("%d",&num2);
	
	printf("\nBefore Swap => First number %d :",num1);
	printf("Second Number %d ",num2);
	
	temp=num1;
	num1=num2;
	num2=temp;
	
	printf("\nAfter Swap => First number %d : ",num1);
	printf("Second Number %d",num2);
}
