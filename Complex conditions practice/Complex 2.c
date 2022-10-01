/*This is the c program to display a menu in a restaurant and input user choice*/
#include<stdio.h>
int main(){
      int choice;
      printf("\nPlease enter the food of your choice: " );
      scanf("%d",&choice);

      if(choice==1){
      printf("Your item is Rice, ");
      }else if(choice==2){
      printf("Your item is Fish, ");
      }else if(choice==3){
      printf("Your item is Beef, ");
      }else{
      printf("Not available");
      }
      return 0;
      }
