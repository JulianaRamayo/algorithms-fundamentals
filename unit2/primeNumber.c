#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main(int argc, char** argv){
    int numberToTest = atoi(argv[1]);
    bool isDividedByOne = (numberToTest % 1 == 0);

    if( isDividedByOne == true){
        printf("Its even");
    }else {
        printf("Its odd");
    }; 
    return 0;
}