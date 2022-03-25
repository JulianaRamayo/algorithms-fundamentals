#include <stdio.h>



int main(){
    int array[6] = {0, 10, 1, 11, 3, 2};
    int lenght = 6;
    int i;
    int j;
    int temp;
    
    printf("New Array\n");
    printf("["); 
    for (i = 0; i < lenght; i ++){
        for (j = 0; j < lenght - 1; j ++){
            if (array[j] > array[j + 1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
        
        printf("%d", array[i]);
        if(i < 5){
            printf(",");
        }
        
    } 
    printf("]");

    return 0;
}