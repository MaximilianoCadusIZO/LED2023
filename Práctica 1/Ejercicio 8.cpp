/*

Ingresar el tiempo trabajado por un contador y considerando que el valor de la hora es
de 800 pesos, calcular su sueldo e imprimirlo.

Inicio
1-Ingresar tiempo trabajado
2-Calcular sueldo
3-Mostrar
Fin

*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>

main(){
	
	//Declaración de variables
	const float valor = 800;
	float tiempo;
	
	//Ingreso
	printf("Hola! Ingresa la cantidad de horas trabajadas para calcular el sueldo.");
	printf("\n\nHoras trabajadas: ");
	scanf("%f", &tiempo);
	
	//Cálculo y muestra
	printf("\nEl sueldo a pagar es de: $%.2f\n\n", valor * tiempo);
	
	system("pause");
	
}
