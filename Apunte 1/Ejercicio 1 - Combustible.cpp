#include<stdio.h>
#include<conio.h>
#include<windows.h>

/* Un automóvil realiza su carga de combustible. El propietario conoce su autonomía y
ésta no cambia. Por ejemplo 14km/l.
Realizar un programa el cual ingresando el precio por litro de combustible y la
cantidad que cargo, calcule el IMPORTE a pagar y los KILOMETROS a recorrer con dicha
carga. */

main(){
	
	// Declaración de variables
	const int auton = 14;
	float litros, importe, km, precio;
	
	printf("                           Hola! Bienvendio al programa Control de combustible \n\n\n");
	
	// Entrada de datos
	printf("Ingresa la cantidad de litros de combustible que cargo: ");
	//scanf("%f", &litros);
	while (scanf("%f", &litros) != 1) {
        printf("Error: Debe ingresar un numero.\n");
        // Limpiamos el buffer de entrada para evitar que scanf entre en un bucle infinito
        while(getchar() != '\n');
        printf("Ingrese la cantidad de combustible que cargo: ");
    }
	printf("\nIngresa el precio del combustible que cargo: ");
	while (scanf("%f", &precio) != 1) {
        printf("Error: Debe ingresar un numero.\n");
        // Limpiamos el buffer de entrada para evitar que scanf entre en un bucle infinito
        while(getchar() != '\n');
        printf("Ingrese el precio de combustible que cargo: ");
    }
	printf("\n");
	system("pause"); // Pide apretar una tecla para continuar
	system("cls"); // Limpia la pantalla para mayor claridad
	
	// Cálculos
	importe = litros * precio;
	km = litros * auton;
	
	// Salida del sistema
	printf("El precio a pagar es de: $ %.2f", importe);
	printf("\n\nLa cantidad de km que puede recorres es: %.2f km", km);
	printf("\n\nGracias por utilizar el programa! Presiona cualquier tecla para terminar.");
	
	getch(); // Espera una tecla para finalizar
}
