/*

SE TIENE LA CANTIDAD DE ALUMNOS DE UN CURSO
	DEBE INGRESARLA EL USUARIO
	INGRESAR LA EDAD DE CADA ESTUDIANTE
	AL FINALIZAR, MOSTRAR EL PROMEDIO DE EDAD DEL CURSO
	
PSEUDOCÓDIGO:

INICIO
1- Declaración de variables: 
	int i, n, edad y cont = 0
2- Mostrar("Ingrese la cantidad de alumnos").
3- Leer la cantidad de alumnos (n).
4- PARA (i = 1; i <= n; i++)
	4.1- Mostrar("Ingrese la edad del alumno").
	4.2- Leer la edad del alumno (edad).
	4.3- Sumar cont + edad
5- SI (n == 0)
	5.1- Mostrar("Se ingreso 0 como cantidad de alumnos")
	FIN
6- Mostrar("El promedio de los n alumnos es: cont / n")
FIN	

*/

#include <windows.h>
#include <conio.h>
#include <stdio.h>

int main (void){
	
	int i, n, edad, cont = 0;

    printf("Ingrese la cantidad de alumnos a promediar: ");
    scanf("%i", &n);

    for (i = 1; i <= n; i++) {
    	printf("\nIngrese la edad del alumno Numero %i: ", i);
    	scanf("%i", &edad);
        cont += edad;
    }

	if(n == 0){
		printf("Se ingreso 0 como cantidad de alumnos.");
		return 0;
	}
	
    printf("\nEl promedio edad de los %i alumnos es: %.2f\n\n", n, (float)cont / n);
    system("pause");

    return 0;
	
}
