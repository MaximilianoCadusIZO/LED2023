/*

Ingresando 3 notas mostrar el promedio. Si es mayor o igual a 6 "Aprobado". Caso contrario, "Recupera"

Inicio
1-Ingresar 3 notas
2-Calcular promedio
3-Decidir si es mayor o menor a 6 e identificar aprobación
4-Mostrar
Fin


*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>

main (){
	
	//Declaración de variables
	float nota1, nota2, nota3, promedio;
	
	//Ingreso de datos
	printf("Hola! Bienvenido al programa. Ingrese 3 notas para calcular promedio e indicar condicion.\n\n");
	printf("Primer nota: ");
	//scanf("%f", &nota1);
	while (scanf("%f", &nota1) != 1 || nota1 < 1 || nota1 > 10) {
        printf("\nError: Debe ingresar una nota del 1 al 10.\n");
        // Limpiamos el buffer de entrada para evitar que scanf entre en un bucle infinito
        while(getchar() != '\n');
        printf("\nIngrese una nota valida: ");
    }
	printf("\nSegunda nota: ");
	//scanf("%f", &nota2);
	while (scanf("%f", &nota2) != 1 || nota2 < 1 || nota2 > 10) {
        printf("\nError: Debe ingresar una nota del 1 al 10.\n");
        // Limpiamos el buffer de entrada para evitar que scanf entre en un bucle infinito
        while(getchar() != '\n');
        printf("\nIngrese una nota valida: ");
    }
	printf("\nTercer nota: ");
	//scanf("%f", &nota3);
	while (scanf("%f", &nota3) != 1 || nota3 < 1 || nota3 > 10) {
        printf("\nError: Debe ingresar una nota del 1 al 10.\n");
        // Limpiamos el buffer de entrada para evitar que scanf entre en un bucle infinito
        while(getchar() != '\n');
        printf("\nIngrese una nota valida: ");
    }
	
	//Cálculo y muestra
	promedio = (nota1 + nota2 + nota3) / 3; 
	if ( promedio >= 6)
		printf("\nAprobado con promedio %.2f \n\n", promedio);
	else
		printf("\nRecupera con promedio %.2f \n\n", promedio);
	
	system("pause");
	
}
