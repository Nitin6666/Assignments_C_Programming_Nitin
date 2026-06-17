// Task 2.2 // WAP in C to find odd & even number.

#include<stdio.h>

void main(){
	int num;
	
	printf("================================\n THIS PROGRAM CHECK EVEN OR ODD \n================================");
	
	printf("\nEnter the Number : ");
	scanf("%d",&num);
	
	if(num%2==0){
		printf("\n%d is Even",num);
	}
	
	else{
		printf("\n%d is Odd",num);
	}
}
