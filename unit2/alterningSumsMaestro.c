#include <stdio.h>
#include <stdlib.h>

int* alternatingSums(int arr[], int size) {
    int* resultado = malloc(   sizeof(int) * 2  );
    
    for (int i = 0;  i< size; i =  i + 2 ) {
        resultado[0] = resultado[0] +  arr[i];

        if (i != 0) resultado[1] = resultado[1] +  arr[i-1];
    };
    return resultado;
}

int main(int argc, char** argv){

    int a[5] = {50, 60, 60, 45, 70};

    int* team = alternatingSums(a, 5);

    printf("[%d, %d]\n",  team[0], team[1]);


    return 0;
}