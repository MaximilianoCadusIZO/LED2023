/*

Ingresando 3 notas mostrar el promedio. Si es mayor o igual a 6 "Aprobado". Caso contrario, "Recupera"

Inicio
IZO
1-Mostrar datos alumnos
2-Ingresar 2 numeros mostrar el mayor
3-Salir
Fin


*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdbool.h>

int main (void){

 //Declaraci�n de variables
 int opcion, salir;
 float num1, num2;
 bool menu = true;
 
 //Utilizo bucle while para volver al men� luego de ejecutar una opci�n
 while (menu){
 	
 	system("cls");
 	printf("\x1b[44mBienvenido al sistema IZO\x1b[0m");
 	printf("\n\n1-Mostrar datos del alumno");
 	printf("\n2-Ingresar dos numeros y mostrar el mayor");
 	printf("\n3-Salir");
 	printf("\n\nIngrese una opcion: ");
 	//Valido que la opcion ingresada sea valida
 	while (scanf("%i", &opcion) != 1 || opcion < 1 || opcion > 3){
 		
 		printf("\nError. Debe ingresar una opcion valida del 1 al 3");
 		// Limpiamos el buffer de entrada para evitar que scanf entre en un bucle infinito
        while(getchar() != '\n');
        printf("\nIngrese una opcion: ");
 		
	 }
 	
 	//Utilizo switch para ejecutar lo que ingreso el usuario
 	switch (opcion){
 		
 		case 1:
 			system("cls");
 			printf("\x1b[42mDatos del alumno:\x1b[0m");
 			printf("\n\n\x1b[32mNombre:\x1b[0m Maximiliano Cadus");
 			printf("\n\x1b[32mDNI:\x1b[0m 43.379.524\n\n");
 			system("Pause");
 			break;
 		
 		case 2:
 			system("cls");
 			printf("\x1b[42mIngrese dos numeros para mostrar el mayor\x1b[0m");
 			printf("\n\nIngrese el primer numero: ");
 			while (scanf("%f", &num1) != 1){
 		
 				printf("\nError. Debe ingresar un numero valido.");
 				// Limpiamos el buffer de entrada para evitar que scanf entre en un bucle infinito
       			while(getchar() != '\n');
        		printf("\nIngrese el primer numero: ");
 		
	 		}
	 		printf("\nIngrese el segundo numero: ");
	 		while (scanf("%f", &num2) != 1  || num1 == num2){
 		
 				printf("\nError. Debe ingresar un numero valido distinto al anterior.");
 				// Limpiamos el buffer de entrada para evitar que scanf entre en un bucle infinito
       			while(getchar() != '\n');
        		printf("\nIngrese el segundo numero: ");
 		
	 		}
	 		if (num1 > num2)
	 			printf("\nEl numero mayor es: %.2f", num1);
	 		else
	 			printf("\nEl numero mayor es: %.2f", num2);
	 		printf("\n\n");
	 		system("pause");
	 		break;
	 	
	 	case 3:
	 		system("cls");
	 		printf("\x1b[41mSeguro que quiere salir del programa?\x1b[0m");
	 		printf("\n\nSeleccione \x1b[31m1 para salir\x1b[0m / \x1b[32m2 para regresar\x1b[0m: ");
	 		while (scanf("%i", &salir) != 1 || salir < 1 || salir > 2){
	 			
	 			printf("\nError. Debe ingresar una opcion valida.");
 				// Limpiamos el buffer de entrada para evitar que scanf entre en un bucle infinito
       			while(getchar() != '\n');
        		printf("\nIngrese una opcion: ");
	 			
			}
			if (salir == 1)
	 			menu = false;
	 		break;
 		
	 }
 	
 	
 }

}
