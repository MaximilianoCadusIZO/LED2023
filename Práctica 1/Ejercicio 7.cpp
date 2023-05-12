/*

Ingresar el valor de la hora y el tiempo trabajado por un comerciante, calcular su
sueldo e imprimirlo.

Inicio
1-Ingresar valor de hora
2-Ingresar tiempo de trabajo
3- Calcular sueldo
4- Mostrar
Fin

*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>

main(){
	
	//Declaración de variables
	float valor, tiempo;
	
	//Ingreso
	printf("Hola! Ingresa el valor de la hora y el tiempo trabajad para calcular el sueldo");
	printf("\n\nIngresa el valor de la hora: ");
	scanf("%f", &valor);
	printf("\n\nIngresa el tiempo trabajado en horas: ");
	scanf("%f", &tiempo);
	
	//Cálculo y muestra
	printf("\nEl sueldo a pagar es de: $%.2f\n\n", valor * tiempo);
	
	system("pause");
	
}
