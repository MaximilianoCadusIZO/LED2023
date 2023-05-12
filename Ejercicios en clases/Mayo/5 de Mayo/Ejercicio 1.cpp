#include<stdio.h>
#include<conio.h>
#include<windows.h>

main(){
	
	int num, ant, post;
	
	printf("Ingrese un numero entero: ");
	scanf("%i" , &num);
	system("pause");
	system("cls");
	
	ant = num - 1;
	post = num + 1;
	
	printf("El anterior al numero ingresado es: %i", ant);
	printf("\nEl posterior al numero ingresado es: %i \n", post);
	system("pause");
	
}

/* 

INICIO 
1- Ingresar entero
2- Calcular anterior y posterior
3- Mostrar
FIN

*/
