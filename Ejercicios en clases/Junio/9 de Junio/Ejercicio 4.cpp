/*

Ingresar N cantidad de Alumnos y sus respectivas notas de parciales, calcular el promedio de notas del curso.

*/

#include <windows.h>
#include <conio.h>
#include <stdio.h>

int main (void){
	
	int i, n;
	float nota, cont = 0;

    printf("Ingrese la cantidad de parciales a promediar: ");
    scanf("%i", &n);

    for (i = 1; i <= n; i++) {
    	printf("\nIngrese la nota N%i: ", i);
    	scanf("%f", &nota);
        cont += nota;
    }

    printf("\nEl promedio de los %i parciales es: %.2f\n\n", n, cont / n);
    system("pause");

    return 0;
	
}
