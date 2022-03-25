#include <stdio.h>
#include <math.h>

int main(){

    int num;

    printf("Please enter an integer: ");
    scanf("%d", &num);

    (num % 2 == 0) ?
        printf("The integer is Even \n"):
        printf("The integer is Odd \n");

    return 0;
}