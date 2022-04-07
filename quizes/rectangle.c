#include <stdio.h>

int length;
int width;
int area;
//variables

int main(){
    printf("Please enter length: ");
    scanf("%d", &length);

    printf("Now please enter width: ");
    scanf("%d", &width);
    //data input

    area = length*width;
    printf("The area of the figure is: %d\n", area);
    //area function

    if (length == width){
        printf("The figure is a square\n");
    }
    else {
        printf("The figure is a rectangle\n");
    }
    //function to declare type of figure

    return 0;
}