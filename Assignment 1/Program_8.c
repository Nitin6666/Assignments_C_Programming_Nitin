//Task 1.8 WAP in to calculate simple interest

#include<stdio.h>

void main(){
	int principle,rate,time,SI;
	
	printf("Enter Principle Amount : ");
	scanf("%d",&principle);
	
	printf("\nEnter Rate of Interest : ");
	scanf("%d",&rate);
	
	printf("\nEnter time : ");
	scanf("%d",&time);
	
	SI=(principle*rate*time)/100;
	
	printf("\nThe Simple Interest is %d",SI);
	
}
