#include "Function.h"///incluyo la biblioteca .h para saber los prototipos

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
