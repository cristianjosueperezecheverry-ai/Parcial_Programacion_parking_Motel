#include <iostream>
#include <iomanip>
#include "parqueadero.h"

// Inicialización con ciclos for [cite: 32]
void inicializarMapa(Vehiculo mapa[20][20]) {
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            mapa[i][j].ocupado = false;
            mapa[i][j].placa = "";
        }
    }
}

// Mapa visual con colores (Innovación para el 5.0) [cite: 44]
void mostrarMapa(Vehiculo mapa[20][20]) {
    cout << "\n      === MAPA DE DISPONIBILIDAD (20x20) ===\n";
    for (int i = 0; i < 20; i++) {
        cout << setw(2) << i << " "; // Números de fila
        for (int j = 0; j < 20; j++) {
            if (mapa[i][j].ocupado)
                cout << "\033[1;31m[X]\033[0m"; // Rojo si está lleno [cite: 22]
            else
                cout << "\033[1;32m[ ]\033[0m"; // Verde si está libre [cite: 22]
        }
        cout << endl;
    }
}

// Registro usando punteros para modificar la matriz [cite: 35]
void registrarIngreso(Vehiculo *espacio, string placa) {
    espacio->placa = placa;
    espacio->horaEntrada = time(0); // Registro de tiempo [cite: 20]
    espacio->ocupado = true;
}

// Salida con generación de Ticket .txt (Innovación superior) [cite: 46]
float registrarSalida(Vehiculo *espacio) {
    time_t ahora = time(0);
    double segundos = difftime(ahora, espacio->horaEntrada);
    float tarifa = 10.0; // Valor por segundo
    float total = segundos * tarifa;

    // Generar archivo físico
    string nombreTicket = "Recibo_" + espacio->placa + ".txt";
    ofstream file(nombreTicket.c_str());
    if (file.is_open()) {
        file << "PARQUEADERO PRO\nPlaca: " << espacio->placa;
        file << "\nTiempo: " << segundos << " seg\nTotal: $" << total;
        file.close();
        cout << "\n[!] Recibo generado: " << nombreTicket;
    }

    espacio->ocupado = false;
    return total;
}