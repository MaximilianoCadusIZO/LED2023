#include<stdio.h>
#include<conio.h>
#include<windows.h>

/*

Ingresar un conjunto de números reales positivo. Para finalizar la entrada de datos ingresar un cero. Determinar e informar la cantidad de números ingresados.

*/


int main (void){
	
	// Declaración de variables
	float num;
	int cont = -1;
	
	printf("Hola! Bienvenido al sistema. Ingrese numeros reales positivos. Ingrese 0 para finalizar el ingreso de numeros.\n\n");
	// Entra al bucle hasta que el usuario ingrese 0
	while (num != 0){
		
		printf("Ingrese un numero real positivo: ");
		while (scanf("%f", &num) != 1 || num < 0){
 		
	 		printf("\nError. Debe ingresar un numero real positivo.");
	 		// Limpiamos el buffer de entrada para evitar que scanf entre en un bucle infinito
	        while(getchar() != '\n');
	        printf("\nIngrese un numero valido: ");
 		
	 	}
		cont++;
		
	}
	
	// Muestra la cantidad de numeros ingresados
	printf("\nLa cantidad de numeros ingresados es: %i\n\n", cont);
	system("pause");
	
}
