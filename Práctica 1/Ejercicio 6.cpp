/*

Ingresar dos valores, calcular su suma, su producto y la resta del 1ro menos el 2do
valor ingresado, imprimir los resultados.

Inicio
1-Ingresar primer valor
2-Ingresar segundo valor
3- Calcular suma, producto y resta
4- Mostrar
Fin

*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>

main(){
	
	//Declaración de variables
	float num1, num2;
	
	//Ingreso
	printf("Hola! Ingrese los numeros para hacer su suma, producto y resta.");
	printf("\n\nIngrese el primer valor: ");
	scanf("%f", &num1);
	printf("\nIngrese el segundo valor: ");
	scanf("%f", &num2);
	
	//Cálculo y muestra
	printf("\nLa suma de los numeros ingresados es: %.2f", num1 + num2);
	printf("\nEl producto de los numeros ingresados es: %.2f", num1 * num2);
	printf("\nLa resta de los numeros ingresadps es: %.2f \n\n", num1 - num2);
	
	system("pause");
	
}
