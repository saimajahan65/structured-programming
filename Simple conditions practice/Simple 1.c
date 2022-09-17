/*This is the C program for determining the profit or loss seller incurred*/
#include<stdio.h>
int main(){
        float costprice, sellingprice, profit, loss;
        printf("Enter the cost price: ");
        scanf("%f",&costprice);

        printf("Enter the selling price: ");
        scanf("%f",&sellingprice);

        if(costprice>sellingprice){

        printf("The seller has made incurred loss and the loss is: %f\n",costprice-sellingprice);

        }else{

        printf("The seller has made profit and the profit is: %f\n",sellingprice-costprice);
        }

        return 0;
        }
