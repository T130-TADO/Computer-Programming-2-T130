// C Program to Find Grade of a Student
#include <stdio.h>

int main() {
    float subject_1, subject_2, subject_3, subject_4, subject_5;
    float total, average ;
    char grade;

    printf("Enter the marks of five subjects::\n");
    scanf("%f%f%f%f%f", &subject_1, &subject_2, &subject_3, &subject_4, &subject_5);

    // It will calculate the Average
    total = subject_1 + subject_2 + subject_3 + subject_4 + subject_5;
    average = total / 5.0;



    // It will produce the final output

    printf("\n Average:\t%.2f\n", average);


    return 0;
}

