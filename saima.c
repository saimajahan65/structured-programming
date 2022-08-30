/* This program is about calculating the total salary*/
#include<stdio.h>
int main(){
        float basicSalary;
        float dearnessAllowance;
        float houseRent;
        float grossSalary;

        printf("please enter your basic salary: ");
        scanf("%f", &basicSalary);

        dearnessAllowance = (40 * basicSalary)/100;//.4 * basicSalary
        houseRent = .2 * basicSalary;

        grossSalary = basicSalary + dearnessAllowance + houseRent;

        printf("Your grossSalary is %.2f Taka", grossSalary);


    return 0;

}



