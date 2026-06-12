//Task 1.9 WAP in C to convert temperature in Celsius from Fahrenheit

#include<stdio.h>

void main(){
	float Cel,freit;
	
	printf("\nEnter Temperature in Fahrenheit : ");
	scanf("%f",&freit);
	
	Cel=(freit-32)*5/9;
	
	printf("\nTemperature in Celsius is %.3f",Cel);
}
