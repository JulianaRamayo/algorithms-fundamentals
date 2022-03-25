#include <stdio.h>

int main(){
    int num;

    printf("Please enter an integer: ");
    scanf("%d", &num);

    if (num > 0){
        printf("The integer is positive \n");
    }
    else if (num < 0){
        printf("The integer in negative \n");
    }
    else{
        printf("The integer is 0 \n");
    };

    return 0;
}