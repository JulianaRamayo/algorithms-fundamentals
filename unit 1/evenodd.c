#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main(int argc, char** argv){
    int numberToTest = atoi(argv[1]);
    bool isDividedByTwo = (numberToTest % 2 == 0);

    if( isDividedByTwo == true){
        printf("Its even");
    }else {
        printf("Its odd");
    }; 
    return 0;
}