/*This is the C program for calculating Niloy's basic salary */
#include<stdio.h>
int main(){
        float basicSalary;
        float dearnessAllowance;
        float houseRent;
        float grossSalary;

        printf("Please enter your Basic Salary: ");
        scanf("%f", &basicSalary);

        dearnessAllowance= (40*basicSalary)/100;
        houseRent= (20 *basicSalary)/100;

       grossSalary = basicSalary + dearnessAllowance + houseRent;

        printf("Your gross salary is %.2f Taka", grossSalary);
        return 0;

        }
