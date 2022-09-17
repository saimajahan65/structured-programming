/*this is C the program for determining the shortest route*/
#include<stdio.h>
int main(){
        float distancea,distanceb;

        printf("Enter route distance A: ");
        scanf("%f",&distancea);

        printf("Enter route distance B: ");
        scanf("%f",&distanceb);

        if(distancea>distanceb){

        printf("Route B is the shortest route than route A\n");
        }
        else{
        printf("Route A is shortest than route B\n");
        }

        return 0;
        }
