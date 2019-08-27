#include <stdio.h>
#include <stdlib.h>
#include "Function.h"///Incluyo la bibloteca en el main para poder acceder a ella
/**
   Recibe- devuelve
1)  1       1
2)  0       1
3)  1       0
4)  0       0

*/

///prototipo
int sumarNumeros(int, int);///1
void sumarNumeros2(int,int);///2
int sumarNumeros3(void);///3
void sumarNumeros4(void);///4


int main()
{
    printf("Hello world!\n");

///Llamada



    return 0;
}
/*

///Delcaracion
int sumarNumeros(int num1, int num2){

int resultado;

resultado= num1 + num2;

return resultado;
}
void sumarNumeros2(int num1, int num2){

    int resultado;

    resultado=num1+num2;

    printf("El resutado es: %d",resultado);

}
int sumarNumeros3(void){
    int num1;
    int num2;
    int resultado;

    printf("Ingrese Numero 1: ");
    scanf("%d", &num1);
    printf("Ingrese Numero 2: ");
    scanf("%d", &num2);

    resultado=num1+num2;

return resultado;
}
void sumarNumeros4(void){

    int num1;
    int num2;
    int resultado;

    printf("Ingrese Numero 1: ");
    scanf("%d", &num1);
    printf("Ingrese Numero 2: ");
    scanf("%d", &num2);

    resultado=num1+num2;

    printf("El resutado es: %d",resultado);
}

*/
