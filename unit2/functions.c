#include <stdio.h>

//Prototipo de la función//
//Función por valor
int sumNumbers(int number1, int number2);

void modificarVariables(int a, int b){
    a = a*2;
    b = b*2;
    printf("localVariables Arguments:::: a: %d,b= %d\n", a, b);
    return;
}

//Funcion por valor//
 void modificarVariablesAdress(int* variable1, int* variable2){
    *variable1 = *variable1 * 2;
    *variable2 = *variable2 * 2;
    return;
}

int a = 10;
int b = 20;

int main(int argc, char**argv){
    //Llamando a la función
    sumNumbers(2, 4);
    printf("sum 10 + 20 = %d\n", sumNumbers(10, 20));
    //Modificar variables
    printf("a: %d,b= %d\n", a, b);
    modificarVariables(a, b);
    //using pointers//
    printf(":::::\na: %d,b= %d\n", a, b);
    modificarVariablesAdress(&a, &b);
    printf("a: %d,b= %d\n", a, b);
}

//Definir función
int sumNumbers(int number1, int number2){
    //Variables locales
    int sum = 0;
    sum = number1 + number2;
    return sum;
}
