//Task 3.10 WAP in C to print Even number  up to given number.

#include<stdio.h>

void main(){
	int num,i=2;
	
	printf("Enter the Number: ");
	scanf("%d",&num);
	
	for(i ; i<=num ; i+=2){
		printf("%d \n",i);
	}
}
