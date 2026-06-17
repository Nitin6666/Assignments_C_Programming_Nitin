//Task 2.8 WAP in C to show the result of the student

#include<stdio.h>

int main(){
    int marks[5];
    int total, i;
    float percentage;
    int grade_bucket;

    for(i = 0; i < 5; i++){
        printf("Enter marks for subject %d: ", i+1);
        scanf("%d", &marks[i]);
    }

    total = marks[0] + marks[1] + marks[2] + marks[3] + marks[4];
    percentage = total / 5.0;   // assuming each subject is out of 100

    printf("\nTotal marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    grade_bucket = (int)(percentage / 10);  // e.g. 83.5 -> 8

    switch(grade_bucket){
        case 10:
        case 9:
        case 8:
            printf("Result: PASS - Grade A\n");
            break;
        case 7:
            printf("Result: PASS - Grade B\n");
            break;
        case 6:
            printf("Result: PASS - Grade C\n");
            break;
        case 5:
            printf("Result: PASS - Grade D\n");
            break;
        default:
            printf("Result: FAIL\n");
            break;
    }

    return 0;
}


