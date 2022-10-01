/*This is the C program for calculate the gross salary of an employee*/
#include<stdio.h>
int main(){
            float grosssalary,basicsalary,DA,HRA;
            printf("Enter your basic salary: ");
            scanf("%f",&basicsalary);

            if(basicsalary<=10000){
            HRA=(20*basicsalary)/100;
            DA=(80*basicsalary)/100;
            printf("Your Gross Salary is: %.2f\n",grosssalary=basicsalary+HRA+DA );
            }
            else if(basicsalary<=20000){
            HRA=(25*basicsalary)/100;
            DA=(90*basicsalary)/100;
            printf("Your Gross Salary is: %.2f\n",grosssalary=basicsalary+HRA+DA );
            }
            else{
            HRA=(30*basicsalary)/100;
            DA=(95*basicsalary)/100;
            printf("Your Gross Salary is: %.2f\n",grosssalary=basicsalary+HRA+DA );
            }
            return 0;
            }
