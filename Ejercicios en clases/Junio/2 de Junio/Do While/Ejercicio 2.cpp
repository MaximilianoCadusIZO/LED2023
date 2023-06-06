/*

Se dispone de una planilla con los sueldos a pagar a los empleados de una empresa. Se desea conocer cuál es el sueldo promedio que se debe abonar. 
Como no se conoce la cantidad de empleados, luego de ingresar cada sueldo deberá aparecer en la pantalla el siguiente cartel: 
“¿Continua o Finaliza? (C/F)”, el operador entonces deberá ingresar una “C” o una “F”, según quiera continuar ingresando datos o no.

*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>

int main(void) {
    
	int empleados = 0;
    float sueldo, sumaSueldos = 0, sueldoPromedio;
    char opcion;

    do {
        printf("Ingrese el sueldo a pagar: ");
        scanf("%f", &sueldo);

        empleados++;
        sumaSueldos += sueldo;

        printf("Continua o Finaliza? (C/F): ");
        scanf(" %c", &opcion);

    } while (opcion == 'C' || opcion == 'c');

    sueldoPromedio = sumaSueldos / empleados;

    printf("\nSueldo promedio a pagar: %.2f\n", sueldoPromedio);

    return 0;
}
