// Task 3.13 WAP in C to display pattern 
//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5

#include<stdio.h>

void main(){
	int num,i,j;
	
	printf("Enter the Number : ");
	scanf("%d",&num);
	
	for(i=1 ; i<=num ; i++){
		for(j=1 ; j <=i ; j++){
			printf("%d ",j);
		}
		printf("\n");
	}	
}

