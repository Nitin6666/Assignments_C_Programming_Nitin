// Task 4.5 WAP in C to find the Transpose of a Matrix

#include<stdio.h>

int main(){
    int a[10][10], transpose[10][10];
    int rows, cols, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Input matrix
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            scanf("%d", &a[i][j]);
        }
    }

    // Find transpose
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            transpose[j][i] = a[i][j];
        }
    }

    // Display original matrix
    printf("Original matrix:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Display transposed matrix
    printf("Transpose of matrix:\n");
    for(i = 0; i < cols; i++){
        for(j = 0; j < rows; j++){
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}
