#include <windows.h>
#include <conio.h>
#include <stdio.h>

int main(void){
	
	int cont = 0, aprobados = 0, aplazados = 0;
	float nota, acum = 0;
	
	printf("Hola! Bienvenido al programa NOTAS.");
	do {
		printf("\n\nIngrese la nota del alumno. Ingrese 0 para finalizar: ");
		//scanf("%f", &nota);
		while (scanf("%f", &nota) != 1 || nota < 0 || nota > 10) {
	        printf("\nError: Debe ingresar una nota valida del 1 al 10.\n");
	        // Limpiamos el buffer de entrada para evitar que scanf entre en un bucle infinito
	        while(getchar() != '\n');
	        printf("\nNota: ");
    	}
		if (nota != 0){
			cont ++;
			acum =+ nota;
			if (nota >= 6){
				aprobados++;
				printf("\nAPROBADO");
			} else {
				aplazados++;
				printf("\nAPLAZADO");
			}	
		}
	} while(nota != 0);
	
	system("cls");
	printf("\n\nLa cantidad total de parciales es: %i", cont);
	printf("\n\nLa cantidad total de aprobados es: %i", aprobados);
	printf("\n\nLa cantidad total de aplazados es: %i", aplazados);
	printf("\n\nE promedio de las notas es: %.2f", acum / cont);
	printf("\n\nMuchas gracias por utilizar al programa!\n\n");
	system("pause");
	
	return 0;
	
}
