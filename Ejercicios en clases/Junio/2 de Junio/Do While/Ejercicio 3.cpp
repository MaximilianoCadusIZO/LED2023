/*

Dada una lista de espera de pasajeros de un micro, donde se indica el peso de equipaje de
cada uno de ellos, deberá determinarse cuantas personas viajarán en el mismo de acuerdo a
las siguientes condiciones:

a. El peso del equipaje total no debe superar los 3500 kg.
b. No se permiten pasajeros de pie.
c. Para lo cual se tiene además los siguientes datos del micro: número del mismo y
cantidad de asientos que posee el mismo.
d. Exhibir el número del micro, la cantidad de pasajeros y el peso del equipaje.

*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>

int main(void) {
	
	const float peso = 3500;
	float pesoPasajero, pesoParcial = 0;
	int numMicro, cantAsi, asiParcial = 0;
	
	printf("Hola! Bienvenido al sistema MICROCOLECTIVOS.");
	printf("\n\nIngrese el numero del micro: ");
	scanf("%i", &numMicro);
	printf("\nIngrese la cantidad de asientos del micro: ");
	scanf("%i", &cantAsi);
	do {
		
		printf("\nIngrese el peso del equipaje del pasajero. \n");
		printf("\nPeso del equipaje: ");
		scanf("%f", &pesoPasajero);
		if (pesoPasajero == 0) {
			break;
		}
		pesoParcial += pesoPasajero;
		asiParcial++;
		
	} while ( ( pesoParcial < 3500 &&  asiParcial < cantAsi ) );
	
	system("cls");
	printf("Numero de micro: %i", numMicro);
	printf("\n\nCantidad de pasajeros: %i", asiParcial);
	printf("\n\nPeso de equipaje: %.2f\n\n", pesoParcial);
	system("pause");
	
}
