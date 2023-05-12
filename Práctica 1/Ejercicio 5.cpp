/*

El usuario debe poder ingresar los lados de un rectángulo y el programa calcula con
esos datos la diagonal principal del rectángulo, superficie y perímetro. Mostrar al
usuario los resultado

Inicio
1- Ingresar primer lado
2- Ingresar segundo lado
3- Ingresar tercer lado
4- Ingresar cuarto lado
3- Calcular diagonal, perimetro y superficie
4- Mostrar
Fin

*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include <math.h>

main(){

	//Declaración de variables
	double num1, num2;
	
	//Ingreso de datos
	printf("Hola! ingrese los lados de un rectangulo para calcular su diagonal, perimetro y superficie.");
	printf("\n\n\nLado mas largo: ");
	scanf("%lf", &num1);
	printf("\nLado mas corto: ");
	scanf("%lf", &num2);
	
	//Calculo y muestra
	printf("\nLa diagonal del rectangulo ingresado es: %.2lf \n\n", sqrt((pow(num1, 2)) + (pow(num2, 2))));
	printf("\nEl perimetro del rectangulo ingresado es: %.2lf \n\n", num1 * 2 + num2 * 2);
	printf("\nLa superficie del rectangulo ingresado es: %.2lf \n\n", (num1 * num2));
	
	system("pause");

}
