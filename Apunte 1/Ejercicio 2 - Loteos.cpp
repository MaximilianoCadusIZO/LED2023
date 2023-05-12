#include<stdio.h>
#include<conio.h>
#include<windows.h>

/*Una inmobiliaria realiza cotizaciones sobre un loteo. Se tiene de los mismos los
metros de frente y el largo. El precio del metro cuadrado est� en d�lares u$s50 y no
cambia.
Realizar un programa el cual ingresando la cotizaci�n del d�lar, y las medidas
conocidas del lote, calcule el �rea del mismo y el importe en d�lares y en pesos al
momento de la cotizaci�n*/

main(){
	
	// Declaraci�n de variables
	const int impDolar = 50;
	float cotizacion, largo, ancho, impPeso, pesos, dolares, area;
	
	printf("                           Hola! Bienvendio al programa Cotizacion de loteos \n\n\n");
	
	// Entrada de datos
	printf("Ingresa la cotizacion actual del dolar en pesos: $");
	//scanf("%f", &cotizacion);
	while (scanf("%f", &cotizacion) != 1) {
        printf("Error: Debe ingresar un numero.\n");
        // Limpiamos el buffer de entrada para evitar que scanf entre en un bucle infinito
        while(getchar() != '\n');
        printf("Ingrese la cotizacion actual del dolar en pesos: $ ");
    }
	printf("\nIngresa el ancho del loteo: ");
	//scanf("%f", &ancho);
	while (scanf("%f", &ancho) != 1) {
        printf("Error: Debe ingresar un numero.\n");
        // Limpiamos el buffer de entrada para evitar que scanf entre en un bucle infinito
        while(getchar() != '\n');
        printf("Ingrese el ancho del loteo: ");
    }
	printf("\nIngresa el largo del loteo: ");
	//scanf("%f", &largo);
	while (scanf("%f", &largo) != 1) {
        printf("Error: Debe ingresar un numero.\n");
        // Limpiamos el buffer de entrada para evitar que scanf entre en un bucle infinito
        while(getchar() != '\n');
        printf("Ingrese el largo del loteo: ");
    }
	printf("\n");
	system("pause"); // Pide apretar una tecla para continuar
	system("cls"); // Limpia la pantalla para mayor claridad
	
	// C�lculos
	area = largo * ancho;
	impPeso = impDolar * cotizacion;
	pesos = impPeso * area;
	dolares = impDolar * area;
	
	// Salida del sistema
	printf("El area del loteo es de: %.2f m2", area);
	printf("\n\nEl precio en pesos es de: $%.2f", pesos);
	printf("\n\nEl precio en dolares es de: U$D %.2f", dolares);
	printf("\n\nGracias por utilizar el programa! Presiona cualquier tecla para terminar.");

	getch();
}
