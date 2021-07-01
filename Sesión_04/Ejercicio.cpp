#include <iostream>
using namespace std;

struct coordenadas {
    int filas, columnas;
};

struct movimientos {
    int filas, columnas;
};

void reiniciar(coordenadas caballo, coordenadas destino, char matriz[][8]);
void imprimirTablero(char tablero[][8]);
void imprimirMovimientosPosibles(coordenadas caballo, char matriz[][8], movimientos posiblesMovimientos[8]);

int main(void) {
    char tablero[8][8];
    bool jugando = false;
    int opcion = 0;

    movimientos posibleMovimiento[8];

    posibleMovimiento[0].filas = 1; posibleMovimiento[0].columnas = 2;
    posibleMovimiento[1].filas = -1; posibleMovimiento[1].columnas = 2;
    posibleMovimiento[2].filas = -2; posibleMovimiento[2].columnas = 1;
    posibleMovimiento[3].filas = -2; posibleMovimiento[3].columnas = -1;
    posibleMovimiento[4].filas = -1; posibleMovimiento[4].columnas = -2;
    posibleMovimiento[5].filas = 1; posibleMovimiento[5].columnas = -2;
    posibleMovimiento[6].filas = 2; posibleMovimiento[6].columnas = -1;
    posibleMovimiento[7].filas = 2; posibleMovimiento[7].columnas = 1;

    coordenadas caballo, destino, temporal;

    cout << "Digite coordenadas iniciales: "; cin >> caballo.filas; cin >> caballo.columnas;
    cout << "Posicion de destino: "; cin >> destino.filas; cin >> destino.columnas;

    reiniciar(caballo, destino, tablero);

    while(!jugando) {
        imprimirMovimientosPosibles(caballo, tablero, posibleMovimiento);

        cout << "Digite opcion: "; cin >> opcion;
        opcion--;

        temporal.filas = caballo.filas + posibleMovimiento[opcion].filas;
        temporal.columnas = caballo.columnas + posibleMovimiento[opcion].columnas;

        if(temporal.filas == destino.filas && temporal.columnas == destino.columnas) {
            cout << "Ganaste!" << endl;

            return 0; 
        }

        caballo = temporal;
        reiniciar(caballo, destino, tablero);

    }

    return 0;
}

void reiniciar(coordenadas caballo, coordenadas destino, char matriz[][8]) {
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            if(i == caballo.filas && j == caballo.columnas)
                matriz[i][j] = '*';
            else if(i == destino.filas && j == destino.columnas)
                matriz[i][j] = '@';
            else
                matriz[i][j] = 'H';
        }
    }
}

void imprimirTablero(char tablero[][8]) {
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            cout << tablero[i][j] << "\t";
        }
        cout << endl;
    }
}

void imprimirMovimientosPosibles(coordenadas caballo, char matriz[][8], movimientos posiblesMovimientos[8]) {
    char numeros[] = {'1', '2', '3', '4', '5', '6', '7', '8'};

    for(int i = 0; i < 8; i++) {
        int auxFilas = caballo.filas + posiblesMovimientos[i].filas;
        int auxCol = caballo.columnas + posiblesMovimientos[i].columnas;

        if(auxFilas >= 0 && auxFilas < 8 && auxCol >= 0 && auxCol < 8) {
            matriz[auxFilas][auxCol] = numeros[i];
        }
    }

    imprimirTablero(matriz);
    cout << endl;
}