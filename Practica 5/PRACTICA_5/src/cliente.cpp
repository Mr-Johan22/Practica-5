#include "headers/cliente.h"

Cliente::Cliente(const std::string& dni, const std::string& nombre, const std::string& telefono, const std::string& direccion)
    : dni(dni), nombre(nombre), telefono(telefono), direccion(direccion) {}

void Cliente::mostrarCliente() const {
    std::cout << "  DNI: " << dni << "\n"
              << "  Nombre: " << nombre << "\n"
              << "  Telefono: " << telefono << "\n"
              << "  Direccion: " << direccion << std::endl;
}
