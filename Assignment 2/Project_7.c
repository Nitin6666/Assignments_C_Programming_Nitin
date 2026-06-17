// Task 2.7 WAP in C to find greatest number between four using ternary operator

#include<stdio.h>

void main(){
	int a,b,c,d,max;
	
	printf("Enter First Number : ");
	scanf("%d",&a);
	
	printf("Enter Second Number : ");
	scanf("%d",&b);
	
	printf("Enter Third Number : ");
	scanf("%d",&c);
	
	printf("Enter Fourth Number : ");
	scanf("%d",&d);
	printf("\n");
	
	max = (a > b) ? ((a > c) ? ((a > d) ? a : d) : ((c > d) ? c : d))
                   : ((b > c) ? ((b > d) ? b : d) : ((c > d) ? c : d));
	
	printf("The Greater Number is : %d",max);
}
