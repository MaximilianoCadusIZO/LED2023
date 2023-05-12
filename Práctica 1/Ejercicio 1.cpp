/*

Ingresar dos valores enteros, sumarlos e imprimir esta suma.

Inicio
1- Ingresar primer valor
2- Ingresar segundo valor
3- Calcular suma
4- Mostrar
Fin

*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>

main(){
	
	//Declaración de variables
	int num1, num2;
	
	//Ingreso de datos
	printf("Hola! ingrese dos numeros enteros para sumar.");
	printf("\n\n\nPrimer numero entero: ");
	scanf("%i", &num1);
	printf("\nSegundo numero entero: ");
	scanf("%i", &num2);
	
	//Calculo y muestra
	printf("\nLa suma de los numeros enteros ingresados es: %i \n\n", num1 + num2);
	
	system("pause"); 
	
}
