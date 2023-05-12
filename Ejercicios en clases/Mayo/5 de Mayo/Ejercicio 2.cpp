#include<stdio.h>
#include<conio.h>
#include<windows.h>

main(){
	
	float dep1, dep2, suma, interes;
	
	printf("Ingrese el primer deposito: ");
	scanf("%f" , &dep1);
	printf("Ingrese el segundo deposito: ");
	scanf("%f" , &dep2);
	system("pause");
	system("cls");
	
	suma = dep1 + dep2;
	interes = suma * 1.20;
	
	printf("La suma de los depositos mas el 20 de interes es: %.2f \n", interes);
	system("pause");
	
}

/* 

INICIO 
1- Ingresar depósitos
2- Calcular sumar e interés
3- Mostrar
FIN

*/
