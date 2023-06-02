#include<stdio.h>
#include<conio.h>
#include<windows.h>

/*

Dado un conjunto de n�meros naturales, determinar cu�ntos de ellos son mayores o iguales que 100. Un n�mero igual a cero indica fin de datos.

*/

int main (void){
	
	// Declaraci�n de variables
	int num, cont = 0;
	
	printf("Hola! Bienvenido al sistema. Ingrese numeros enteros. Ingrese 0 para finalizar el ingreso de numeros.\n\n");
	// Entra al bucle hasta que el usuario ingrese 0
	while (num != 0){
		
		printf("Ingrese un numero entero: ");
		while (scanf("%i", &num) != 1 || num < 0){
 		
	 		printf("\nError. Debe ingresar un numero entero.");
	 		// Limpiamos el buffer de entrada para evitar que scanf entre en un bucle infinito
	        while(getchar() != '\n');
	        printf("\nIngrese un numero valido: ");
 		
	 	}
	 	if (num >= 100){
	 		
	 		cont++;
	 		
		 }
	 	
	}
	
	// Muestra la cantidad de numeros ingresados
	printf("\nLa cantidad de numeros ingresados iguales o mayores a 100 es: %i\n\n", cont);
	system("pause");
	
}
