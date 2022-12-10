#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main(){
    float n1, n2, suma=0, resta=0, multiplicacion=0, division=0;
    int opc;

    printf("\tCalculadora basica\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n\n");
    printf("Selecciona una opcion: "); scanf("%d", &opc);

    system("cls");

    switch(opc){
        case 1:
            printf("Introduce un numero: "); scanf("%f", &n1);
            printf("Introduce otro numero: "); scanf("%f", &n2);
            suma=n1+n2;
            printf("La suma de los numeros es %f", suma);
            break;
        case 2:
            printf("Introduce un numero: "); scanf("%f", &n1);
            printf("Introduce otro numero: "); scanf("%f", &n2);
            resta=n1-n2;
            printf("La resta de los numeros es %f", resta);
            break;
        case 3:
            printf("Introduce un numero: "); scanf("%f", &n1);
            printf("Introduce otro numero: "); scanf("%f", &n2);
            multiplicacion=n1*n2;
            printf("La multiplicacion de los numeros es %.2f", multiplicacion);
            break;
        case 4:
            printf("Introduce un numero: "); scanf("%f", &n1);
            printf("Introduce otro numero: "); scanf("%f", &n2);
            division=n1/n2;
            printf("La division de los numeros es %.2f", division);
            break;
    }

    getch();
    return 0;
}