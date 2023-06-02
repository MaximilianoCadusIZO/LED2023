/* 

4. Se tienen como datos los importes de todas las facturas correspondientes al mes que acaba de finalizar de un comercio (no se sabe cuántas son). Se desea conocer:
    a. Cuántas facturas se realizaron.
    b. Importe promedio de las mismas.
    c. Cuántos son los importes que superan los 3000 pesos.

*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>

int main (void){
	
	// Declaración de variables
	float imp, impTotal = 0;
	int sup = 0, cont = 0;
	
	printf("Hola! Bienvenido al sistema. Ingrese importes de facturas. Ingrese 0 en el importe para finalizar el ingreso de facturas\n\n");
	
	printf("Ingrese un importe: ");
		while (scanf("%f", &imp) != 1 || imp < 0){
 		
	 		printf("\nError. Debe ingresar un importe valido.");
	 		// Limpiamos el buffer de entrada para evitar que scanf entre en un bucle infinito
	        while(getchar() != '\n');
	        printf("\nIngrese un importe valido: ");
 		
	 	}
	// Entra al bucle hasta que el usuario ingrese 0
	while (imp != 0){
		
		impTotal = impTotal + imp;
	 	if (imp > 3000){
	 		
	 		sup++;
	 		
		}
		
		printf("\nDesea ingresar otro importe? Ingrese un importe o 0 para finalizar: ");
		while (scanf("%f", &imp) != 1 || imp < 0){
 		
	 		printf("\nError. Debe ingresar un importe valido.");
	 		// Limpiamos el buffer de entrada para evitar que scanf entre en un bucle infinito
	        while(getchar() != '\n');
	        printf("\nIngrese un importe valido: ");
 		
	 	}
	 	
		cont++;
		
	}
	
	// Muestra la cantidad de numeros ingresados
	printf("\nLa cantidad de facturas ingresadas es: %i\n\n", cont);
	printf("\nEl importe promedio de las facturas es: %.2f\n\n", impTotal / cont);
	printf("\nLa cantidad de facturas que super los $3000 es: %i\n\n", sup);
	system("pause");
	
}
