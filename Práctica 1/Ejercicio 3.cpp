/*

Ingresar los lados de un tri�ngulo calcular su per�metro e imprimirlo.

Inicio
1- Ingresar primer lado
2- Ingresar segundo lado
3- Ingresar tercer lado
3- Calcular per�metro
4- Mostrar
Fin

*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>

main(){

	//Declaraci�n de variables
	float num1, num2, num3;
	
	//Ingreso de datos
	printf("Hola! ingrese tres lados de un triangulo para calcular su perimetro.");
	printf("\n\n\nPrimer lado: ");
	scanf("%f", &num1);
	printf("\nSegundo lado: ");
	scanf("%f", &num2);
	printf("\nTercer lado: ");
	scanf("%f", &num3);
	
	//Calculo y muestra
	printf("\nEl perimetro del triangulo ingresado es: %.2f \n\n", num1 + num2 + num3);
	
	system("pause");

}
