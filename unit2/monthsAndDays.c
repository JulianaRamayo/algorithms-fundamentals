#include <stdio.h>
#include "../libraries/utils.h"
#include <stdlib.h>
#include <stdbool.h>

int jan = 1;
int feb = 1;
int mar = 1;
int apr = 1;
int may = 1;
int jun = 1;
int jul = 1;
int aug = 1;
int sep = 1;
int oct = 1;
int nov = 1;
int dec = 1;

int main(){

    printf("JANUARY\n");
    while ( jan <= 31 ) {
        printf("\tday: %d\n", jan);
        jan = jan + 1;

    };

printf("FEBRUARY\n");
    while ( feb <= 28 ) {
        printf("\tday: %d\n", feb);
        feb = feb + 1;

    };    

printf("MARCH\n");
    while ( mar <= 31 ) {
        printf("\tday: %d\n", mar);
        mar = mar + 1;

    };  

printf("APRIL\n");
    while ( apr <= 30 ) {
        printf("\tday: %d\n", apr);
        apr = apr + 1;

    };  

printf("MAY\n");
    while ( may <= 31 ) {
        printf("\tday: %d\n", may);
        may = may + 1;

    }; 

printf("JUNE\n");
    while ( jun <= 30 ) {
        printf("\tday: %d\n", jun);
        jun = jun + 1;

    };   

printf("JULY\n");
    while ( jul <= 31 ) {
        printf("\tday: %d\n", jul);
        jul = jul + 1;

    };  

printf("AUGUST\n");
    while ( aug <= 31 ) {
        printf("\tday: %d\n", aug);
        aug = aug + 1;

    };  

printf("SEPTEMBER\n");
    while ( sep <= 30 ) {
        printf("\tday: %d\n", sep);
        sep = sep + 1;

    };  

printf("OCTOBER\n");
    while ( oct <= 31 ) {
        printf("\tday: %d\n", oct);
        oct = oct + 1;

    };  

printf("NOVEMBER\n");
    while ( nov <= 30 ) {
        printf("\tday: %d\n", nov);
        nov = nov + 1;

    };  

printf("DECEMBER\n");
    while ( dec <= 31 ) {
        printf("\tday: %d\n", dec);
        dec = dec + 1;

    };  

    return 0;
}