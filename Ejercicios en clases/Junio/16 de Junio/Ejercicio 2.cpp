/*

UN RAPIPAGO INGRESA EL VALOR LAS FACTURAS COBRADAS EN EL DIA
	SU COMISION ES EL 3% DE LO RACAUDADO
	MOSTRAR AL FINAL DE LA CARGA (0=SALIR)
		TOTAL DE DINERO EN CAJA
		NETO A PAGAR
		COMISION GENERADA
	
PSEUDOCÓDIGO:

INICIO
1- Declaración de variables: 
	float imp, cont = 0.
2- Mostrar("Ingrese los valores de las facturas. Ingrese 0 para finalizar")
3- Leer el importe (imp)
4- MIENTRAS(imp != 0)
	4.1- Sumar cont + imp
	4.2- Mostrar("Desea ingresar otro importe? Ingrese 0 para finalizar")
	4.3- Leer importe (imp)
5- Mostrar("El monto total de la caja es: $ cont")
6- Mostrar("El neto a pagar es: $ cont * 0.97")
7- Mostrar("La comision del 3 porciento es: $ cont * 0.03")
FIN	


*/

#include <windows.h>
#include <conio.h>
#include <stdio.h>

int main (void){
	
	float imp, cont = 0;
	
	printf("Ingrese los valores de las facturas. Ingrese 0 para finalizar.");
	printf("\n\nImporte: $");
	scanf("%f", &imp);
	
	while(imp != 0){
		
		cont += imp;
		printf("\nDesea ingresar otro importe? Ingrese 0 para finalizar.");
		printf("\n\nImporte: $");
		scanf("%f", &imp);
		
	}
	
	printf("\nEl monto total en caja es: $%.2f", cont);
	printf("\n\nEl neto a pagar es: $%.2f", cont * 0.97);
	printf("\n\nLa comision del 3 porciento es: $%.2f\n\n", cont * 0.03);
	system("pause");
	
	return 0;
}
