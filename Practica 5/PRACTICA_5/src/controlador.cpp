#include "headers/controlador.h"
#include <iostream>

void Controlador::registrarVehiculo(const Vehiculo& vehiculo) {
    vehiculos.push_back(vehiculo);
}

void Controlador::registrarCliente(const Cliente& cliente) {
    clientes.push_back(cliente);
}

void Controlador::listarVehiculos() const {
    std::cout << "\n--- Lista de Vehiculos ---\n";
    if (vehiculos.empty()) {
        std::cout << "No hay vehiculos registrados.\n";
    } else {
        for (const auto& vehiculo : vehiculos) {
            vehiculo.mostrarVehiculo();
            std::cout << "-------------------------\n";
        }
    }
}

void Controlador::listarClientes() const {
    std::cout << "\n--- Lista de Clientes ---\n";
    if (clientes.empty()) {
        std::cout << "No hay clientes registrados.\n";
    } else {
        for (const auto& cliente : clientes) {
            cliente.mostrarCliente();
            std::cout << "-------------------------\n";
        }
    }
}
