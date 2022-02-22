#include <stdio.h>
#include "/mnt/c/users/Julia/documents/school/first quarter/algo_fund/libraries/utils.h"



int main(){

    int i = 1, j = 10;
    for (;; i++, j = j+1){
        printf("i: %d, j: %d\n", i,j);
        sleep(1000);
    };
}