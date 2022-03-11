#include <stdio.h>
#include <stdlib.h>

int linearySearch(int arr[], int sizeArr, int valueToFind){
    printf("The function execute\n");
    for (int index = 0; index < sizeArr; index ++){
        printf("Current index: %d: arrayData: %d\n", index, arr[index]);
        if (arr[index] == valueToFind ){
            return index;
        }
    }
    return -1;
};

int main(int argc, char ** argv){
    int arr[5] = {50, 5, 1, 37, 4};
    int indexFound = linearySearch(arr, 5, atoi(argv[1]));
    printf("Index found: %d\n", indexFound);
    return 0;
};