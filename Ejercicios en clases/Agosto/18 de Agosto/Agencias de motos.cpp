/*

Transformar en código el pseudocódigo que se muestra a continuación, correspondiente
a proporcionar el precio promedio de una moto, calculado a partir del precio de la
misma en tres agencias locales.
Los precios para el cálculo son introducidos por el usuario.
1. Inicio
2. Mostrar “Introduzca el precio en AGENCIA_1”: precio1
3. Mostrar “Introduzca el precio en AGENCIA_2”: precio2
4. Mostrar “Introduzca el precio en AGENCIA_3": precio3
5. promedio = (precio1 + precio2 + precio3) / 3
6. Mostrar “El precio medio de la moto es”, promedio, “PESOS”
7. Fin

*/


#include <windows.h>
#include <conio.h>
#include <stdio.h>

int main (void){
	
	float agencia1, agencia2, agencia3, promedio;
	
	printf("Hola! Bienvenido al programa MOTOS.");
	printf("\n\nIngrese el precio de AGENCIA 1: $");
	scanf("%f", &agencia1);
	printf("\n\nIngrese el precio de AGENCIA 2: $");
	scanf("%f", &agencia2);
	printf("\n\nIngrese el precio de AGENCIA 3: $");
	scanf("%f", &agencia3);
	
	promedio = (agencia1 + agencia2 + agencia3) / 3;
	
	printf("\nEl precio medio de la moto es: $%.2f", promedio);
	printf("\n\nMuchas gracias por usar el programa!\n\n");
	system("pause");
	
}
