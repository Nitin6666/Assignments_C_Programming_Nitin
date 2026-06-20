//Task 3.3 WAP in C to make a table of a given number 

#include<stdio.h>

void main(){
	int num,i;
	
	printf("Enter the Number : ");
	scanf("%d",&num);
	
	for(i=1;i<=10;i++){
		printf("%d X %d = %d\n",num,i,num*i);
	}
}
