#include <stdio.h>
#include "/mnt/c/users/Julia/documents/school/first quarter/algo_fund/libraries/utils.h"

int main (int argc, char** argv){
    int nfor = atoi(argv[1]);
    int nwhile = atoi (argv[2]);
    
    printf("--even numbers--\n");
    for (int i = 2; i <= nfor; i = i + 2){
        printf("i: %d\n", i);
        sleep(1000);
    }
    
    int i = 1; 
    printf("--odd numbers--\n");
    while(i <= nwhile-1){
        i = i + 2;
        printf("i: %d\n", i);
        sleep(1000);
    }
}