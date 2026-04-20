#ifndef PARQUEADERO_H
#define PARQUEADERO_H

#include <string>
#include <ctime>
#include <fstream>

using namespace std;

// Estructura obligatoria [cite: 20]
struct Vehiculo {
    string placa;
    time_t horaEntrada;
    bool ocupado = false;
};

// Declaración de funciones (Modularidad) [cite: 28, 38]
void inicializarMapa(Vehiculo mapa[20][20]);
void mostrarMapa(Vehiculo mapa[20][20]);
void registrarIngreso(Vehiculo *espacio, string placa); // Uso de punteros [cite: 34]
float registrarSalida(Vehiculo *espacio); // Sistema de cobro [cite: 21]

#endif