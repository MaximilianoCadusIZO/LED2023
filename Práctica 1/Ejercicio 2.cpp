/*

Ingresar tres valores, sumarlos e imprimir esa suma.

Inicio
1- Ingresar primer valor
2- Ingresar segundo valor
3- Ingresar tercer valor
3- Calcular suma
4- Mostrar
Fin

*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>

main(){

	//Declaración de variables
	float num1, num2, num3;
	
	//Ingreso de datos
	printf("Hola! ingrese tres numeros para sumar.");
	printf("\n\n\nPrimer numero: ");
	scanf("%f", &num1);
	printf("\nSegundo numero: ");
	scanf("%f", &num2);
	printf("\nTercer numero: ");
	scanf("%f", &num3);
	
	//Calculo y muestra
	printf("\nLa suma de los numeros ingresados es: %.2f \n\n", num1 + num2 + num3);
	
	system("pause");

}
