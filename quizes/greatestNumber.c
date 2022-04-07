#include <stdio.h>

int greatest(int arr[], int lenght){
    int max;
    for (int i =0; i < lenght -1; i++){
        if (arr[i]> arr [i+1]){
            max = arr[i];
        }
        else{
            max = arr[i+1];
        }
    }
    return max;
}
//greatest function

int main(){
    int arr[] = {0, 0, 0};
    int length = sizeof(arr)/sizeof(int);
    //variables

    printf("Input three numbers: \n");
    scanf("%i%i%i", &arr[0],&arr[1],&arr[2]);
    int max = greatest(arr,length);
    printf("The greatest number is: %d \n", max);

    return 0;
}