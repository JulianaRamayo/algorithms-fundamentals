#include <stdio.h>

int main(){
    int myArray[3]={5, 2, 3};
    int i = 0;

    printf("My array is:\n");
    printf("[");
    //void//
    void printArray(int myArray[3], int arrayLenght){
        while(i < 3){
            printf("%d", myArray[i]);
            if(i < 2){
                printf(",");
            }
            i++;
        }
    }
    //print//
    printArray(myArray, 3);
    printf("]\n");

    return 0;
}