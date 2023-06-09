/*

Mostrar los números del 0 al 5 de menor a mayor,(luego de mayor a menor)

*/

#include <windows.h>
#include <conio.h>
#include <stdio.h>

int main (void){
	
	int i;
	
	for ( i = 0; i <= 5; i++){
		
		printf("%i\n\n", i);
		
	}
	
	system("pause");
	system("cls");
	for ( i = 5; i >= 0; i--){
		
		printf("%i\n\n", i);
		
	}
	
	system("pause");
	
}
