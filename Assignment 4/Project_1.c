// Task 4.1 WAP in C to find the largest and smallest element in array

#include<stdio.h>

int main(){
    int arr1[5];
    int i, largest, smallest;

    printf("Enter 5 elements: ");
    for(i = 0; i < 5; i++){
        scanf("%d", &arr1[i]);
    }

    largest = arr1[0];
    smallest = arr1[0];

    for(i = 1; i < 5; i++){
        if(arr1[i] > largest){
            largest = arr1[i];
        }
        if(arr1[i] < smallest){
            smallest = arr1[i];
        }
    }

    printf("Largest element  : %d\n", largest);
    printf("Smallest element : %d\n", smallest);

    return 0;
}
