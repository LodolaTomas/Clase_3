#include <stdio.h>
#include <stdlib.h>

int functionSum(int num1,int num2);


int main()
{
    int option;
    int num1=0;
    int num2=0;

    do{

    printf("1. Ingrese Primer  Numero A=%d.\n",num1);
    printf("2. Ingrese Segundo Numero B=%d.\n",num2);
    printf("3. Calcular todas las Operaciones(suma, resta, multiplicacion, division.\n");
    printf("4. Mostrar todos los resultados.\n");
    printf("5. Salir.\n");
    printf("Eliga una opcion: ");
    scanf("%d", &option);

    system("clear");
    // system("cls");


    switch(option)
    {
        case 1:
        sleep(1);
        printf("HOLA");

        system("clear");
        break;


    }

    }while(option!=5);




    return 0;
}








