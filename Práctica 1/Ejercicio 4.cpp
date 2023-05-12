/*

Solicitar ingresar dos lados de un triángulo rectángulo y calcular, la hipotenusa, el
perímetro, la superficie. Imprima los resultados de las operaciones solicitadas.

Inicio
1- Ingresar primer lado
2- Ingresar segundo lado
3- Calcular hipotenusa, perimetro y superficie
4- Mostrar
Fin

*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include <math.h>

main(){

	//Declaración de variables
	double num1, num2, hipo;
	
	//Ingreso de datos
	printf("Hola! ingrese dos lados de un triangulo rectangulo para calcular su hipotenusa, perimetro y superficie.");
	printf("\n\n\nPrimer lado: ");
	scanf("%lf", &num1);
	printf("\nSegundo lado: ");
	scanf("%lf", &num2);
	
	//Calculo y muestra
	hipo = sqrt((pow(num1, 2)) + (pow(num2, 2)));
	printf("\nLa hipotenusa del triangulo ingresado es: %.2lf \n\n", hipo);
	printf("\nEl perimetro del triangulo ingresado es: %.2lf \n\n", num1 + num2 + hipo);
	printf("\nLa superficie del triangulo ingresado es: %.2lf \n\n", (num1 * num2) / 2);
	
	system("pause");

}
