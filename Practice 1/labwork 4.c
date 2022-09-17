/*This is the C program for alters the temperature fahrenheit to centigrade of a city*/
#include<stdio.h>
int main(){
        float citytemperatureF;
        float centigrade;

        printf("Enter your city temperature in fahrenheit: ");
        scanf("%f", &citytemperatureF);

        printf("Temperature in Centigrade is: %f", centigrade=(citytemperatureF-32)/9*5);

        return 0;
        }
