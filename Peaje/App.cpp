#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

void convertirMayusculas(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        str[i] = toupper(str[i]);
        i++;
    }
}

int main (void){
	
	//Declaración de variables
	int opc, ejes, cat;
	float imp1, imp2, total = 0;
	bool menu = true;
	char patente[7];
	time_t tiempo;
    struct tm *info_tiempo;
    char buffer[80];
	
	//Abre los files
	FILE *histotxt = fopen("historial.txt", "a");
	FILE *imp1txt = fopen("imp1.txt", "r");
	fscanf(imp1txt, "%f", &imp1);
	FILE *imp2txt = fopen("imp2.txt", "r");
	fscanf(imp2txt, "%f", &imp2);
	
	//Entra en bucle para repetir el proceso hasta que el usuario determine finalizar
	while(menu){
		
		system("cls");
		printf("Hola! Bievenido al programa PEAJE. El importe actual es: $%.2f para categoria 1 y $%.2f para categoria 2", imp1, imp2);
		printf("\n\nIngrese la categoria del vehiculo: ");
		//Validamos la categoría
		while (scanf("%i", &cat) != 1) {
	        printf("\nError: Debe ingresar una categoria valida.\n");
	        // Limpiamos el buffer de entrada para evitar que scanf entre en un bucle infinito
	        while(getchar() != '\n');
	        printf("\nCategoria: ");
    	}
    	
    	printf("\nIngrese la patente del vehiculo: ");
		//Validamos la categoría
		while (scanf("%s", &patente) != 1) {
	        printf("\nError: Debe ingresar una patente valida.\n");
	        // Limpiamos el buffer de entrada para evitar que scanf entre en un bucle infinito
	        while(getchar() != '\n');
	        printf("\nPatente: ");
    	}
    	
    	convertirMayusculas(patente);
		
		// Obtener el tiempo actual
	    tiempo = time(NULL);
	
	    // Convertir el tiempo en una estructura tm para obtener los componentes
	    info_tiempo = localtime(&tiempo);
	
	    // Formatear la fecha y hora
	    strftime(buffer, sizeof(buffer), "%d-%m-%Y %H:%M:%S", info_tiempo);
		
		//Cambia de proceso según la categoría ingresada
		switch(cat){
			case 1:
				printf("\nCategoria 1. Ingrese la cantidad de ejes.");
				printf("\n\nEjes: ");
				//Validamos los ejes
				while (scanf("%i", &ejes) != 1 || ejes < 1) {
			        printf("\nError: Debe ingresar una cantidad de ejes valida.\n");
			        // Limpiamos el buffer de entrada para evitar que scanf entre en un bucle infinito
			        while(getchar() != '\n');
			        printf("\nEjes: ");
	    		}
				total = ejes * imp1;
				printf("\nCategoria del vehiculo: 1\nPatente: %s\nFecha y hora: %s\nEjes: %i\nEl total a cobrar es: $%.2f\n\n", patente, buffer, ejes, total);
				//Guardamos el total en historial.txt
				fprintf(histotxt, "Categoria del vehiculo: Auto\nPatente: %s\nFecha y hora: %s\nEjes: %i\nEl total a cobrado es: $%.2f\n\n", patente, buffer, ejes, total);
				break;
			
			case 2:
				printf("\nCategoria 2. Ingrese la cantidad de ejes.");
				printf("\n\nEjes: ");
				//Validamos los ejes
				while (scanf("%i", &ejes) != 1 || ejes < 1) {
			        printf("\nError: Debe ingresar una cantidad de ejes valida.\n");
			        // Limpiamos el buffer de entrada para evitar que scanf entre en un bucle infinito
			        while(getchar() != '\n');
			        printf("\nEjes: ");
	    		}
				total = ejes * imp2;
				printf("\nCategoria del vehiculo: Camion\nPatente: %s\nFecha y hora: %s\nEjes: %i\nEl total a cobrar es: $%.2f\n\n", patente, buffer, ejes, total);
				//Guardamos el total en historial.txt
				fprintf(histotxt, "Categoria del vehiculo: 1\nPatente: %s\nFecha y hora: \nEjes: %i\nEl total a cobrado es: $%.2f\n\n", patente, ejes, total);
				break;
				break;
				
			default:
				printf("\nCategoria invalida.\n");
				break;
		}
		
		printf("\nDesea ingresar otro vehiculo a cobrar? Ingrese 1 para continuar o 0 para finalizar.");
		printf("\n\nOpcion: ");
		//Validamos la opcion
		while (scanf("%i", &opc) != 1 || opc < 0 || opc > 1) {
			printf("\nError: Debe ingresar una opcion valida.\n");
			// Limpiamos el buffer de entrada para evitar que scanf entre en un bucle infinito
			while(getchar() != '\n');
			printf("\nOpcion: ");
	    }
		
		//Si la opción ingresada es 0, finaliza
		if(opc == 0){
			menu = false;
		}
    }
    
    printf("\nGracias por utilizar el programa! ");
	system("pause");
	//Cerramos los files abiertos
	fclose(histotxt);
	fclose(imp1txt);
	fclose(imp2txt);

	
	return 0;
	
}
