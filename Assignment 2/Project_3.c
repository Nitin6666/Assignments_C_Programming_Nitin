// Task 2.3 WAP in C to check entered number is positive or negative;

#include<stdio.h>

void main(){
	
	int num;
	
	printf("Enter the Number : ");
	scanf("%d",&num);
	
	if(num>0){
		printf("Number is Positive !");
	}
	else if(num<0){
		printf("Number is Negative !");
	}
	else if (num==0){
		printf("Number is Zero!");
	}
}
