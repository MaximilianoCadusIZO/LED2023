/*

Calcular la suma de 10 números reales ingresados por teclado. (acumulador)

*/

#include <windows.h>
#include <conio.h>
#include <stdio.h>

int main (void){
	
	int i;
	float num, cont = 0;
	
	for (i = 0; i <= 9; i++){
		
		printf("Ingrese un numero real para sumar: ");
		scanf("%f", &num);
		cont += num;
		
	};
	
	printf("La suma de los 10 numeros es: %.2f\n\n", cont);
	system("pause");
	
}
