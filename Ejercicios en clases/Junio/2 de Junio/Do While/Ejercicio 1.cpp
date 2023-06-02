/*

Realizar un programa que tome un valor entero y verificar que el mismo se encuentre entre 1 y 10 incluidos.

*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>

int main (void){
	
	int num;
	
	printf("Hola! Bienvenido al sistema. Ingrese un numero entero entre 1 y 10. \n");
	do {
		
		printf("\nNumero entre 1 y 10: ");
		scanf("%i", &num);
		
	} while (num <= 0 || num > 10);
	
	printf("\nEl numero es: %i\n", num);
	system("pause");
	
}
