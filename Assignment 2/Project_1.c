// Task 2.1 // WAP in C to find greatest number between three numbers

#include<stdio.h>

void main(){
	printf("======================================\nTHIS PROGRAM CALCULATES GREATEST NUMBER\n======================================");
	int first_no,second_no,third_no;
	
	printf("\nEnter First Number : ");
	scanf("%d",&first_no);
	
	printf("\nEnter Second Number : ");
	scanf("%d",&second_no);
	
	printf("\nEnter Third Number : ");
	scanf("%d",&third_no);
	
	if(first_no>second_no && first_no>third_no ){
		printf("\nFirst Number is Greater");
	}
	
	else if(second_no>first_no && second_no>third_no){
		printf("\nSecond Number is Greater");
	}
	
	else{
		printf("\nThird Number is Greater");
	}
}
