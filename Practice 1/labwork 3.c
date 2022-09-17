/*This is the C program for one student aggregate and percentage marks*/
#include<stdio.h>
int main(){
        float subject1,subject2,subject3,subject4,subject5,aggregatemarks,percentagemarks;

        printf("Enter your subject 1 number: ");
        scanf("%f", &subject1);
        printf("Enter your subject 2 number: ");
        scanf("%f", &subject2);
        printf("Enter your subject 3 number: ");
        scanf("%f", &subject3);
        printf("Enter your subject 4 number: ");
        scanf("%f", &subject4);
        printf("Enter your subject 5 number: ");
        scanf("%f", &subject5);

        printf("aggregate marks: %f\n", aggregatemarks=subject1+subject2+subject3+subject4+subject5);
        printf("percentage marks: %f\n", percentagemarks=(aggregatemarks/500)*100);

        return 0;
        }
