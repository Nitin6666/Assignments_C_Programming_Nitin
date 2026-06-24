// Task 4.2 WAP in C to find sum of array elements

#include<stdio.h>

void main(){
	int arr1[100];
	int i,n,sum=0;
	
	printf("Enter the Number of elements: ");
	scanf("%d",&n);
	
	printf("Enter value of %d elements ",n);
	printf("\n");
	for(i=1 ; i<=n;i++){
		scanf("%d",&arr1[i]);
	}
	
	for(i=1 ; i<=n ; i++){
		sum += arr1[i];
		
	}
	printf("The Sum of the Number is %d",sum);	
}
