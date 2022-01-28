#include <stdio.h>
#include "sum.h"

//DataType integer, flotantes, string (cadenas de texto), caracteres
//cajitas que almacenan información, para usarlas después en código:
//Global variables//
int edad = 24;
float estatura = 1.55;
char* name = "Juliana Ramayo";
char sexo = 'F';


int main(){
    int after10years = suma(edad, 10);
    printf("mi edad después de 10 años: %d", after10years);
    return 0;
}