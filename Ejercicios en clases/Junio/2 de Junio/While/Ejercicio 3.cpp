/*

Realizar un proceso que confeccione una factura de compra, ingresando el código de artículo, la cantidad comprada del mismo y su precio unitario.
Proponer un fin de datos.

*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>

int main (void){
	
	// Declaración de variables
	int cod, cant, cont = 0;
	float precio;
	
	printf("Hola! Bienvenido al sistema. Ingrese datos de la factura. Ingrese 0 en el codigo para finalizar el ingreso de facturas.\n\n");
	
	printf("Ingrese el codigo de la factura: ");
		while (scanf("%i", &cod) != 1 || cod < 0){
 		
	 		printf("\nError. Debe ingresar un codigo valido.");
	 		// Limpiamos el buffer de entrada para evitar que scanf entre en un bucle infinito
	        while(getchar() != '\n');
	        printf("\nIngrese un codigo valido: ");
 		
	 	}
	// Entra al bucle hasta que el usuario ingrese 0
	while (cod != 0){
		
		printf("\nIngrese la cantidad del producto: ");
		while (scanf("%i", &cant) != 1 || cant < 0){
 		
	 		printf("\nError. Debe ingresar una cantidad valida.");
	 		// Limpiamos el buffer de entrada para evitar que scanf entre en un bucle infinito
	        while(getchar() != '\n');
	        printf("\nIngrese una cantidad valida: ");
 		
	 	}
	 	
	 	printf("\nIngrese el precio del producto: ");
		while (scanf("%f", &precio) != 1 || precio < 0){
 		
	 		printf("\nError. Debe ingresar un precio valido.");
	 		// Limpiamos el buffer de entrada para evitar que scanf entre en un bucle infinito
	        while(getchar() != '\n');
	        printf("\nIngrese un precio valido: ");
 		
	 	}
	 	
	 	printf("\nDesea ingresar otra factura? Ingrese el codigo de la factura o 0 para finalizar: ");
		while (scanf("%i", &cod) != 1 || cod < 0){
 		
	 		printf("\nError. Debe ingresar un codigo valido.");
	 		// Limpiamos el buffer de entrada para evitar que scanf entre en un bucle infinito
	        while(getchar() != '\n');
	        printf("\nIngrese un codigo valido: ");
 		
	 	}
	 	
	 	cont++;
	 	
	}
	
	// Muestra la cantidad de numeros ingresados
	printf("\nLa cantidad de facturas ingresadas es: %i\n\n", cont);
	system("pause");
	
}
