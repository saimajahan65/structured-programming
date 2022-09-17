/*This is c program for calculating the total number of illiterate men and women*/
#include<stdio.h>
int main(){
        int tmen;
        int twomen;
        int tliteracy;
        int lmen;
        int lwomen;
        int illiteratemen;
        int illiteratewomen;
        int totalilliteratemanandwomen;
        int townpopulation;

        printf("Enter the total Town Population: ");
        scanf("%d",&townpopulation);

        tmen=(52*townpopulation)/100;
        twomen=townpopulation-tmen;

        tliteracy=(48*townpopulation)/100;
        lmen=(35*townpopulation)/100;
        lwomen=(tliteracy-lmen);

        illiteratemen=tmen-lmen;
        illiteratewomen=twomen-lwomen;

        printf("This is the number of total illiterate man and women: %d\n",total illiterate man and women=illiterate_men+illiterate_women);


        return 0;
        }
