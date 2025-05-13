#include "headers/vehiculo.h"

Vehiculo::Vehiculo(const std::string& codigo, const std::string& marca, const std::string& modelo, int anio, int kilometraje, double precio)
    : codigo(codigo), marca(marca), modelo(modelo), anio(anio), kilometraje(kilometraje), precio(precio) {}

void Vehiculo::mostrarVehiculo() const {
    std::cout << "  Codigo: " << codigo << "\n"
              << "  Marca: " << marca << "\n"
              << "  Modelo: " << modelo << "\n"
              << "  Anio: " << anio << "\n"
              << "  Kilometraje: " << kilometraje << "\n"
              << "  Precio: " << precio << std::endl;
}
