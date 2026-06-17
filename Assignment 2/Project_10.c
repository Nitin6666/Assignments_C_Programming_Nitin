// TAsk 2.10 WAP in C to calculate mathematical operation using switch case

#include<stdio.h>

void main(){
	printf("========THIS PROGRAM PERFORMS CALCULATION=========\n=== 1 --> ADDITION ===\n=== 2 --> SUBSTRACTION ===\n=== 3 --> MULTIPLY ===\n=== 4 --> DIVISON ===\n=== 5 --> REAMAINDER ===");
	printf("\n");
	int num1,num2,op;
	int add,subs,mul,div,rem;
	
	printf("\nEnter the First Number : ");
	scanf("%d",&num1);
	
	printf("\nEnter the Second Number : ");
	scanf("%d",&num2);
	
	printf("\nEnter Number between 1 to 5 to make mathematical operation: ");
	scanf("%d",&op);
	
	add=num1+num2;
	
	subs=num1-num2;
	
	mul=num1*num2;
	
	div=num1/num2;
	
	rem=num1%num2;
	
	switch(op){
		case 1:
			printf("The Addition of the Number is %d",add);
			break;
		
		case 2:
			printf("The Substraction of the Number is %d",subs);
			break;
		
		case 3:
			printf("The Multiplication of the Number is %d",mul);
			break;
			
		case 4:
			printf("The Division of the Number is %d",div);
			break;
		
		case 5:
			printf("The Remainder of the Number is %d",rem);
			break;
	}
}
