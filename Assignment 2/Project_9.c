// Task 2.9 WAP in C to print week day according to day number

#include<stdio.h>

void main(){
	
	int num;
	
	printf("Enter Number between 1 to 7 : ");
	scanf("%d",&num);
	printf("\n");
	
	switch(num){
		
		case 1:
			printf("Monday");
			break;
			
		case 2:
			printf("Tuesday");
			break;
			
		case 3:
			printf("Wednesday");
			break;
		
		case 4:
			printf("Thursday");
			break;
			
		case 5:
			printf("Friday");
			break;
			
		case 6:
			printf("Saturday");
			break;
		
		case 7:
			printf("Sunday");
			break;
			
		default:
			printf("Enter a Valid Number !");
			break;	
	}
}
