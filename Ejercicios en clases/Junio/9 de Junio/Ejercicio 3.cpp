/*

Calcular la suma de los N primeros números naturales. Ingrese N por teclado.

*/

#include <windows.h>
#include <conio.h>
#include <stdio.h>

int main (void){
	
	int i, n, suma = 0;

    printf("Ingrese los n primeros naturales a sumar: ");
    scanf("%i", &n);

    for (i = 1; i <= n; i++) {
        suma += i;
    }

    printf("\nLa suma de los %i primeros numeros naturales es: %i\n\n", n, suma);
    system("pause");

    return 0;
	
}
