#include<stdio.h>
#include<conio.h>
#include<windows.h>

main(){
	
	const float pi = 3.14;
	float diam, rad, area;
	
	printf("Ingrese el diametro del circulo: ");
	scanf("%f" , &diam);
	system("pause");
	system("cls");
	
	rad = diam / 2;
	area = pi * (rad * rad);
	
	printf("El area del circulo es: %.2f \n", area);
	system("pause");
	
}

/* 

INICIO 
1- Ingresar diámetro
2- Calcular radio y área
3- Mostrar
FIN

*/
