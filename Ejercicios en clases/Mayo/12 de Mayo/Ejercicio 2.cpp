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

main (){

 //Declaración de variables
 int opcion;
 float num1, num2;
 bool menu = true;
 
 while (menu = true){
 	
 	printf("IZO");
 	printf("\n\n1-Mostrar datos alumno");
 	printf("\n2-Ingresar 2 numeros y mostrar el mayor");
 	printf("\n3-Salir");
 	printf("\nIngrese una opcion valida: ");
 	while (scanf("%i", &opcion) != 1 || opcion < 1 || opcion > 3){
 		
 		printf("\nError. Debe ingresar una opcion valido del 1 al 3");
 		// Limpiamos el buffer de entrada para evitar que scanf entre en un bucle infinito
        while(getchar() != '\n');
        printf("\nIngrese una opcion valida: ");
 		
	 }
 	
 	switch (opcion){
 		
 		case 1:
 			printf("\nNombre: Maximiliano Cadus");
 			printf("\nDNI: 43.379.524\n");
 			system("Pause");
 			break;
 		
 		case 2:
 			printf("\nIngrese dos numeros para mostrar el mayor");
 			printf("\nIngrese el primer numero: ");
 			while (scanf("%f", &num1) != 1){
 		
 				printf("\nError. Debe ingresar un numero valido.");
 				// Limpiamos el buffer de entrada para evitar que scanf entre en un bucle infinito
       			while(getchar() != '\n');
        		printf("\nIngrese un numero valido: ");
 		
	 		}
	 		printf("\nIngrese el segundo numero: ");
	 		while (scanf("%f", &num2) != 1){
 		
 				printf("\nError. Debe ingresar un numero valido.");
 				// Limpiamos el buffer de entrada para evitar que scanf entre en un bucle infinito
       			while(getchar() != '\n');
        		printf("\nIngrese un numero valido: ");
 		
	 		}
	 		if (num1 > num2)
	 		printf("\nEl numero mayor es: %.2f", num1);
	 		else
	 		printf("\nEl numero mayor es: %.2f \n", num2);
	 		system("pause");
	 		break;
	 	
	 	case 3:
	 		menu == false;
	 		break;
 		
	 }
 	
 	
 }

}
