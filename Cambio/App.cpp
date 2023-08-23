#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int opc;
	float cant, imp, total = 0;
	bool menu = true;
	
	FILE *histotxt = fopen("historial.txt", "a");
	FILE *imptxt = fopen("valor.txt", "r");
	fscanf(imptxt, "%f", &imp);
	
	while(menu){
		
		system("cls");
		printf("Hola! Bievenido al programa DOLARES. La cotizacion actual es: $%.2f", imp);
		printf("\n\nIngrese la cantidad de dolares a cotizar: ");
		scanf("%f", &cant);
		total = cant * imp;
		printf("\nEl total seria: $%.2f\n\n", total);
		
		
		fprintf(histotxt, "%.2f\n", total);
		
		printf("\nDesea ingresar otra cantidad de dolares a cotizar? Ingrese 1 para continuar o 0 para finalizar.");
		printf("\n\nOpcion: ");
		scanf("%i", &opc);
		
		if(opc == 0){
			menu = false;
		}
    }
    
    printf("\nGracias por utilizar el programa! ");
	system("pause");
	fclose(histotxt);
	fclose(imptxt);
	
	return 0;
	
}
