/*This is the C  program for calculating cost of one item from 15 items*/
#include<stdio.h>
int main(){
        float totalsellingprice,totalprofit,cost;

        printf("Enter the total selling price of 15 items: ");
        scanf("%f",&totalsellingprice);

        printf("Enter the total profit earned: ");
        scanf("%f",&totalprofit);

        printf("The cost of one item is: %f\n", cost=(totalsellingprice-totalprofit)/15);

        return 0;
        }
