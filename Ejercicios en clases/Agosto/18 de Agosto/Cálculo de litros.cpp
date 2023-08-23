/*

Una empresa de transporte, desea calcular los litros de combustible que necesita para
llenar todos los tanques de sus camiones. Sus unidades son del tipo PESADAS con una
capacidad de carga de 600 litros y de REPARTO, los cuales cargan 80 litros. A la fecha
cuenta con 36 de las primeras y 11 de REPARTO, pero este número puedo cambiar debido
a compras de nuevas unidades, por lo tanto se deben ingresar al momento de ejecutar
el programa. Nos solicitan automatizar este cálculo.

SE SOLICITA:

DEFINICION DEL PROBLEMA
1 QUE DATOS SE REQUIEREN?
cantidad de unidades pesadas: 36
cantidad de unidades de reparto: 11
capacidad de carga pesada: 600
capacidad de carga reparto: 80

2 CUAL ES LA SALIDA DESEADA?
cantidad de litros para completar los tanques de todas las unidades:

3 ALGORITMO
inicio
leer numero de unidades PESADAS:
leer numero de unidades de REPARTO:
Calcular la suma de litros entre total pesadas y totasl reparto
Mostrar resultado
fin

4 CODIGO FUENTE

5 NOS PIDEN UN UPDATE DE FUNCIONALIDAD, DONDE: INGRESANDO EL PRECIO DEL COMBUSTIBLE
EL PROGRAMA NOS INFORME EL IMPORTE A PAGAR.
TENEMOS 2 OPCIONES DE PAGO
1) CONTADO (obtenemos un 10% de descuento)
2) TRANSFERENCIA (a precio normal)

*/


#include <windows.h>
#include <conio.h>
#include <stdio.h>

int main(void){
	
	int uPesadas, uReparto, totalLitros, pesadasLitros = 600, repartoLitros = 80, opcion;
	float precioLitro;
	
	printf("Hola! Bienvenido al sistema CALCULO DE LITROS.");
	printf("\n\nIngrese la cantidad de unidades PESADAS: ");
	scanf("%i", &uPesadas);
	printf("\nIngrese la cantidad de unidades de REPARTO: ");
	scanf("%i", &uReparto);
	
	totalLitros = (uPesadas * pesadasLitros + uReparto * repartoLitros);
	
	printf("\nEl total de litros necesarios para %i unidades PESADAS y %i unidades de REPARTO es: %i", uPesadas, uReparto, totalLitros);
	
	printf("\n\nIngrese el precio del litro de combustible: $");
	scanf("%f", &precioLitro);
	printf("\nIngrese 1 para abonar en efectivo con descuento o 2 para transferencia a precio regular: ");
	scanf("%i", &opcion);
	switch (opcion){
		case 1: 
			printf("\nEl total a abonar en efectivo es: $%.2f", (totalLitros * precioLitro) * 0.9);
			printf("\n\nEl descuento es de: $%.2f", (totalLitros * precioLitro) * 0.1);
			break;
		
		case 2:
			printf("\nEl total a abonar en transferencia es: $%.2f", totalLitros * precioLitro);
			break;
		
		default: 
			printf("\nForma de pago invalida.");
			break;
	}
	
	printf("\n\nMuchas gracias por usar el programa!\n\n");
	system("pause");
	
	return 0;
}
