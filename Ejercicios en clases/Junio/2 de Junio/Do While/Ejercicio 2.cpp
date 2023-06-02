/*

Se dispone de una planilla con los sueldos a pagar a los empleados de una empresa. Se desea conocer cuál es el sueldo promedio que se debe abonar. 
Como no se conoce la cantidad de empleados, luego de ingresar cada sueldo deberá aparecer en la pantalla el siguiente cartel: 
“¿Continua o Finaliza? (C/F)”, el operador entonces deberá ingresar una “C” o una “F”, según quiera continuar ingresando datos o no.

*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>

int main (void){
	
	float imp, impTotal;
	
	printf("Hola! Bienvenido al sistema.");
	do{
	
		printf("\n\nSueldo a promediar: ");
		scanf("%f", imp);
		
	} while (imp != 0);
	
}
