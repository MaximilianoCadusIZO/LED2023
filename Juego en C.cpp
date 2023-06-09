#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define FILAS 10
#define COLUMNAS 10

void imprimirLaberinto(char laberinto[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("%c ", laberinto[i][j]);
        }
        printf("\n");
    }
}

int main() {
    char laberinto[FILAS][COLUMNAS] = {
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
        {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
        {'#', ' ', '#', '#', '#', '#', '#', '#', ' ', '#'},
        {'#', ' ', '#', ' ', ' ', ' ', ' ', '#', ' ', '#'},
        {'#', ' ', '#', ' ', '#', '#', ' ', '#', ' ', '#'},
        {'#', ' ', '#', ' ', '#', '#', ' ', '#', ' ', '#'},
        {'#', ' ', '#', ' ', ' ', ' ', ' ', '#', ' ', '#'},
        {'#', ' ', '#', '#', '#', '#', '#', '#', ' ', '#'},
        {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}
    };

    int jugadorX = 1;
    int jugadorY = 1;
    char tecla;

    while (1) {
        system("cls"); // Limpiar la pantalla
        laberinto[jugadorY][jugadorX] = 'P'; // Colocar al jugador en el laberinto
        imprimirLaberinto(laberinto);

        // Capturar la tecla presionada
        tecla = getch();

        // Mover al jugador según la tecla presionada
        switch (tecla) {
            case 'w':
                if (laberinto[jugadorY - 1][jugadorX] != '#') {
                    laberinto[jugadorY][jugadorX] = ' ';
                    jugadorY--;
                }
                break;
            case 'a':
                if (laberinto[jugadorY][jugadorX - 1] != '#') {
                    laberinto[jugadorY][jugadorX] = ' ';
                    jugadorX--;
                }
                break;
            case 's':
                if (laberinto[jugadorY + 1][jugadorX] != '#') {
                    laberinto[jugadorY][jugadorX] = ' ';
                    jugadorY++;
                }
                break;
            case 'd':
                if (laberinto[jugadorY][jugadorX + 1] != '#') {
                    laberinto[jugadorY][jugadorX] = ' ';
                    jugadorX++;
                }
                break;
        }
    }

    return 0;
}
