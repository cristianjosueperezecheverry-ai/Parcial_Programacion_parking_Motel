#include <iostream>
#include "parqueadero.h"

int main() {
    Vehiculo miliga[20][20]; // Matriz de 20x20 [cite: 37]
    inicializarMapa(miliga);
    
    int op, f, c;
    string placa;

    do {
        cout << "\n1. Ver Mapa\n2. Ingresar\n3. Salida\n0. Salir\nOpcion: ";
        cin >> op;

        switch(op) {
            case 1: mostrarMapa(miliga); break;
            case 2:
                cout << "Placa: "; cin >> placa;
                cout << "Fila Col (0-19): "; cin >> f >> c;
                registrarIngreso(&miliga[f][c], placa);
                break;
            case 3:
                cout << "Fila Col (0-19): "; cin >> f >> c;
                cout << "\nCobro: $" << registrarSalida(&miliga[f][c]) << endl;
                break;
        }
    } while (op != 0);
    return 0;
}